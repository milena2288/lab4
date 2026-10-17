#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int task0();
int task1();
int task1a();
int task1b();
int task1c();
int task2();
int task3();

int main() {
    setlocale(LC_CTYPE, "RUS");
    task0() ;
    //task1();
    //task1a();
    //task1b();
    //task1c();
    //task2();
    //task3();
    return 0;
}
int task0(){
    int n;
    int z;
    puts("Введите 2 числа");
    scanf("%d %d", &n, &z);
    printf("%x %d", n, z);
    return 0;
}
int task1() {
    char c;
    int i;
    float f;
    double d;
    printf("Введите чар, инт, флоат, дабл через пробел:\n");
    scanf("%c %d %f %le", &c, &i, &f, &d); 
    printf("%c %d %f %e\n", c, i, f, d);
    return 0;
}

int task1a() {
    float n; // число
    int cel;
    float drob;
    puts("Введите вещественное число");
    scanf("%f", &n); // ввод числа
    cel = (int)n; // целая часть
    drob = n - cel; //дробная часть
    printf("Целая часть: %d\nДробная часть: %f\n", cel, drob);
    return 0;
}

int task1b() {
    char c;
    puts("Введите символ");
    scanf("%c", &c);
    printf("Символ '%c': десятичный код %d, шестнадцатеричный код %x\n", c, c, c); 
    return 0;
}

int task1c() {
    int i;
    puts("Введите целое число i");
    scanf("%d", &i);
    printf("1/%d = %f\n", i, 1.0 / i);
    return 0;
}

int task2() {
    int a = 11;
    int b = 3;
    int x;
    float y;
    double z;
    // a и b целые, поэтому деление тоже целое: 11 / 3 = 3,
    // дробная часть отбрасывается еще до присваивания.
    x = a / b;  // x = 3
    y = a / b;  // целое 3 неявно превращаетмя во float: y = 3.0
    z = a / b;  // целое 3 неявно превращаетмя в double: z = 3.0
    // у всех получился 3, тип переменной
    // не влияет на то, как считается выражение
    printf("x = %d\ny = %f\nz = %f\n", x, y, z);

    // превращаем a в дробное число до деления, поэтому получаем 3.666667
    printf("(float)a/b = %f\n", (float)a / b);
    // то же самое, но double точнее, поэтому выводим больше знаков
    printf("(double)a/b = %.15f\n", (double)a / b);
    // из-за скобок сначала делятся целые числа,
    // а превращение во float уже ничего не меняет
    printf("(float)(a/b) = %f\n", (float)(a / b));
    // то же самое с double
    printf("(double)(a/b) = %f\n", (double)(a / b));
    // можно превратить в дробное и b,результат снова  3.666667
    printf("a/(float)b = %f\n", a / (float)b);
    return 0;
}

int task3() {
    int n;
    int last, middle, first;
    puts("Введите целое трехзначное число");
    scanf("%d", &n);
    last = n % 10; // последняя цифра
    middle = n / 10 % 10; // средняя цифра
    first = n / 100; //первая цифра
    // сумма, разворот
    printf("Последняя цифра %d, первая %d, сумма цифр %d, чило наоборот %03d\n",
        last, first, first + middle + last, last * 100 + middle * 10 + first);
    return 0;
}