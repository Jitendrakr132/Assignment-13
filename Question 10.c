#include<stdio.h>
double power(double x,double y)
{

    if(y==0)
        return 1;
    if(y>0)
        return x*power(x,y-1);
    else
        return 1/x *power(x,y+1);
}
int main()
{
    printf("%d power %d is %lf",2,5,power(2,5));
}
