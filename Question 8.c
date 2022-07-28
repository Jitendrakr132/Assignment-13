#include<stdio.h>
int fob(int );
int main()
{
    int i,n;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf("%d ",fob(i));
    return 0;
}
int fob(int n)
{
    int a,b;
    if(n==1||n==2)
       return 1;
        return (fob(n-1)+fob(n-2));

}

