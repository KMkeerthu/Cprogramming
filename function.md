#include<stdio.h>
int areaOfReat(int length, int breadth)
{
int area ;
area = length*breadth;
return area;
}
int main()
{
int l=4,b=6;
int area=areaOfReat(l,b);
printf("area of rect is:%d",area);
return 0;
}
