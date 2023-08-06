#include<stdio.h>

/*
!n = n * (n - 1) * (n - 2) * . . . * 2 * 1
For example,
!6 = 6 * 5 * 4 * 3 * 2 * 1 = 720
*/
void main()
{
   int n;
   long int fact = 1;
   printf("Enter the number: ");
   scanf("%d" , &n);
   int i = n;
   while(i) {
       fact = fact * i;
       i--;
   }
   printf("Factorial of %d is %ld", n , fact);
}