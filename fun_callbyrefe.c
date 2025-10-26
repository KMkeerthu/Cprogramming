#include<stdio.h>
int fun(int* ,int*);
int main()
{
int x=12,y=14;
fun(&x,&y);
printf("X=%d, Y=%d",x,y);
return 0;
}
int fun(int*ptr1,int*ptr2)
{*ptr1=20;
*ptr2=50;
}

