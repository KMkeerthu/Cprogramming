#include<stdio.h>
int main()
{
float var = 3.1415926535897932;
double var1 =  3.1415926535897932;
long double var2 =  3.141592653589793236774373;
printf("%d\n",sizeof(float));
printf("%d\n",sizeof(double));
printf("%d\n",sizeof(long double));
printf("%.16f\n",var);
printf("%.16lf\n",var1);
printf("%.21Lf\n",var2);
}
