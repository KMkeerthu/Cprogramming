#include<stdio.h>
void fun(int n)
{
if(n==0)
return ;
else
return fun(n-1);
}
int main()
{
fun(3);
return 0;
}
