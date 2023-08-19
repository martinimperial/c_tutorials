#include <stdio.h>

// n + (n-1) + ... + 3 + 2 + 1
int sumByLoop(int n)
{
    int result = 0;
    for (int i = n; i >= 1; i--)
    {
        result = result + i;
    }
    return result;
}

// n + (n-1) + ... + 3 + 2 + 1
int sumByRecursion(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + sumByRecursion(n - 1);
    }
}

// n^2 + (n-1)^2 + ... + 3^2 + 2^2 + 1^2
int sumQuaredByLoop(int n)
{
    int result = 0;
    for (int i = n; i >= 1; i--)
    {
        result = result + i * i;
    }
    return result;
}

// n^2 + (n-1)^2 + ... + 3^2 + 2^2 + 1^2
int sumQuaredByRecursion(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * n + sumQuaredByRecursion(n - 1);
    }
}

// n * (n-1) * ... * 3 * 2 * 1
int factorialByLoop(int n)
{
    int result = 1;
    for (int i = n; i >= 1; i--)
    {
        result = result * i;
    }
    return result;
}

// n * (n-1) * ... * 3 * 2 * 1
int factorialByRecursion(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorialByRecursion(n - 1);
    }
}

int main()
{
    printf("sum by loop of %d numbers is %d\n", 10, sumByLoop(10));
    printf("sum by recursion of %d numbers is %d\n", 10, sumByRecursion(10));

    printf("sum of squared by loop of %d numbers is %d\n", 5, sumQuaredByLoop(5));
    printf("sum of squared by recursion of %d numbers is %d\n", 5, sumQuaredByRecursion(5));

    printf("factorial by loop of %d numbers is %d\n", 5, factorialByLoop(5));
    printf("factorial by recursion of %d numbers is %d\n", 5, factorialByRecursion(5));
}