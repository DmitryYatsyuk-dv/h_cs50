#include <stdio.h>

int fibonacci(int n);

// Рекурсивно
int main(void)
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Fibonacci(%d) = %d\n", n, fibonacci(n));

    return 0;
}

// Вычисляем n-е число Фибоначчи
int fibonacci(int n)
{
    // Базовые случаи
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    // Рекурсивное определение: F(n) = F(n-1) + F(n-2)
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Ряд Фибы начинается с 0, 1, 1, 2, 3, 5, 8, 13, 21, ...
// Каждое число — сумма двух предыдущих.

// Пример для n = 5:
// f(5)
// → f(4) + f(3)
// → (f(3)+f(2)) + (f(2)+f(1))
// → ((f(2)+f(1)) + (f(1)+f(0))) + ((f(1)+f(0)) + 1)
// → ((1+1)+(1+0)) + ((1+0)+1)
// → 5


// __________________________________________________________

// Через цикл 
int mainLoopF(void)
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    // Базовые случаи
    if (n == 0)
    {
        printf("Fibonacci(0) = 0\n");
        return 0;
    }
    else if (n == 1)
    {
        printf("Fibonacci(1) = 1\n");
        return 0;
    }

    int prev1 = 0; // F(0)
    int prev2 = 1; // F(1)
    int current = 0;

    // Цикл начинается с 2, так как F(0) и F(1) уже известны
    for (int i = 2; i <= n; i++)
    {
        current = prev1 + prev2; // формула F(n) = F(n-1) + F(n-2)
        prev1 = prev2;           // сдвигаем «окно»
        prev2 = current;
    }

    printf("Fibonacci(%d) = %d\n", n, current);

    return 0;
}


// Пример n = 6
// i=2 → current=1 (0+1)
// i=3 → current=2 (1+1)
// i=4 → current=3 (1+2)
// i=5 → current=5 (2+3)
// i=6 → current=8 (3+5)

// Fibonacci(6) = 8

