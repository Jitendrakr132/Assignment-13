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
    if(n>=1)
        return n+SumN(n%10);


}

