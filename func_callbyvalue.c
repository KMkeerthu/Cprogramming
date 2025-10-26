#include<stdio.h>
int fun(int ,int);

int main()
{
int x=12,y=14;
fun(x,y);
printf("x=%d, y=%d",x,y);
return 0;
}
int fun(int x , int y)
{x=20;
y=50;
}
