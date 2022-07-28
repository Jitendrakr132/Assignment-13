#include<stdio.h>
int fonc(int );
int main()
{
    int num,c;
    printf("Enter a number");
    scanf("%d",&num);
    c=func(num);
    printf("%d Number of digit %d",c,num);
    return 0;
}
int func(int n)
{

    if(n<10)
    return 1;
        return 1+func(n/10);
}
