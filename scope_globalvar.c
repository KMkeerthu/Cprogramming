#include<stdio.h>
int fun();
int var = 3;
int main()
{
int var = 4;
printf("%d\n",var);
fun();
return 0;
}
int fun()
{
printf("%d",var);
}
