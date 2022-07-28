#include<stdio.h>
int SumN(int);
int main()
{
    int n,sum;
    printf("Enter the number");
    scanf("%d",&n);
    sum=SumN(n);
    printf("sum is %d",sum);
    return 0;
}
int SumN(int n)
{
    int s=0;
    if(n>=1)
        return n*n+SumN(n-1);
      else
    return n;
}

