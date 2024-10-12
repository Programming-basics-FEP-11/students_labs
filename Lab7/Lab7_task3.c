#include <math.h>  
#include <stdio.h> 
double f(double x) {
    int l; l = 14;  // порядковий номер в журналі
    int p; p = 17;  // вік
    return l * x + p;  // результат рівняння N*x + A
}

int main() {
    int n = 0; 
    double a, b, c, eps;

    a = -100;  
    b = 100;   
    eps = 0.0000000000001;  // Точність, до якої буде знайдений корінь

    do {
        c = (a + b) / 2;  // Обчислюємо середню точку між a і b

        // Якщо знак функції в точці 'a' і 'c' різний, то корінь знаходиться між 'a' і 'c'
        if (f(c) * f(a) <= 0) 
            b = c;  
        else 
            a = c;  

        n += 1;  // Лічимо кількість ітерацій
    } while (fabs(a - b) >= eps);  // Виконуємо, доки різниця між a і b більша за eps

    printf("\nРівняння N*x + A = 0 розв'язком половинного ділення\n");
    printf("\nN = 14\nA = 17\n");  // Фіксовані значення N і A
    printf("x = %lf\n", c);  // Виводимо знайдений корінь

    return 0; 
}
