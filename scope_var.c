#include<stdio.h>
int main()
{
int var = 23;
{
    int var = 4;
    printf("%d\n",var);
}
printf("%d",var);
return 0;
}
