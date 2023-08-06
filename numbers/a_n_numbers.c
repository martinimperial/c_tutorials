#include <stdio.h>

// eg: 11 12 33 44: sum 110, average 27.50, largest 44
void sum(int array[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    printf("\n\n\nsum of the entered numbers is =  %d", sum);
}

void average(int array[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    printf("\n\n\nAverage of the entered numbers is =  %.02f", ((float)sum / size));
}

void maxium(int array[], int size)
{
    int i;
    int big;

    // Important step- always initialize big to the first element
    big = array[0];

    for (i = 2; i <= size; i++)
    {
        if (big < array[i])
            big = array[i]; // update big to the larger value
    }

    printf("\n\n\nThe largest of the %d numbers is  %d ", size, big);
}

void timesTable(int n)
{
    int i;

    for (i = 1; i <= 10; i++)
    {
        printf("\n\t\t\t%d * %d   =   %d \n", n, i, n * i);
    }
}

void main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");

    int n, i;
    int numberArray[1000], x;

    printf("Enter number of elements:  ");
    scanf("%d", &n);
    printf("\n\n\nEnter %d elements\n\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        numberArray[i] = x;
    }

    sum(numberArray, n);
    average(numberArray, n);
    maxium(numberArray, n);
    timesTable(n);
}