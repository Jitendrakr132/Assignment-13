#include<stdio.h>
int hcf(int ,int);
int main()
{
    int a,b,h;
    printf("Enter the two number");
    scanf("%d %d",&a,&b);
    h=hcf(a,b);
    printf("HCF %d",h);
    return 0;
}
int hcf(int a,int b)
{
    if(a>b)
    {
        if(a%b==0)
            return b;
     return hcf(a%b,b);
    }
    else
    {
        if(b%a==0)
            return a;
        return hcf(b%a,a);
    }
}
