#include<stdio.h>

void swap(){
    int x = 10, y = 15, temp;
    temp = x;
    x = y;
    y = temp;
    printf("x = %d and y = %d", x, y);
}

void swap2(){
    int x = 10, y = 15;
    x = x + y; //25
    y = x - y;  //25 - 15 = 10
    x = x - y; //25 - 10 = 15
    //that is:
    //x = x + y - (y = x);
    printf("x = %d and y = %d",x,y);
}

void main()
{
    swap();
    swap2();
}


