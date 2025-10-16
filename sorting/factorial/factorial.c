#include <stdio.h>

int factorial(int n);

int main(void)
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int result = factorial(n);
    printf("%d! = %d\n", n, result);

    return 0;
}

int factorial(int n)
{
    // Базовый случай: 0! и 1! = 1
    if (n == 0 || n == 1)
    {
        return 1;
    }

    // Рекурсивный случай: n! = n * (n - 1)!
    return n * factorial(n - 1);
}