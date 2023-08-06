#include<stdio.h>

void forLoop()
{
    /* 
        Always declare the variables before using them 
    */
    int i = 0;  // declaration and initialization at the same time


    for(i = 0; i < 10; i++)
    {
        printf("i = %d\n", i);

        /*
            consequently, when i equals 10, the loop breaks.
            i is updated before the condition is checked-
            hence the value of i after exiting the loop is 10 
        */
     }

    printf("\nThe value of i after exiting the loop is %d\n\n", i);
    
    printf("\nRemember that the loop condition checks the conditional statement before it loops again.\n\n");
    
    printf("Consequently, when i equals 10, the loop breaks.\n\n");
    
    printf("i is updated before the condition is checked- hence the value of i after exiting the loop is 10 .\n\n");
    
    
}


void whileLoop()
{
    

    /* 
        always declare the variables before using them 
    */
    int i = 0;  // declaration and initialization at the same time

    printf("\nPrinting numbers using while loop from 0 to 9\n\n");

    /* 
        while i is less than 10 
    */
   while(i<10)
    {
        printf("%d\n",i);

        /* 
            Update i so the condition can be met eventually 
            to terminate the loop 
        */
        i++;    // same as i=i+1;
      }
    
}

void doWhileLoop()
{
    

    /* 
        always declare the variables before using them 
    */
    int i = 10;     // declaration and initialization at the same time

    do // do contains the actual code and the updation
    {
        printf("i = %d\n",i);
        i = i-1;    // updation
    }
    // while loop doesn't contain any code but just the condition
    while(i > 0);
    
    printf("\nThe value of i after exiting the loop is %d\n\n", i);
    
}

void nestedForLoop()
{
    
    printf("\n\nNested loops are usually used to print a pattern in c. \n\n");
    printf("\n\nThey are also used to print out the matrix using a 2 dimensional array. \n\n");

    int i,j,k;
    printf("\n\nOutput of the nested loop is :\n\n");
    for(i = 0; i < 5; i++)
    {
        printf("\t\t\t\t");
        for(j = 0; j < 5; j++)
        printf("* ");

        printf("\n");
    }
    
 }

int main(){
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");   
    
    forLoop();
    whileLoop();
    doWhileLoop();
    nestedForLoop();
    
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}