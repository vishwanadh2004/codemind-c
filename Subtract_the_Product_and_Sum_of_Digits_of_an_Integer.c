#include<stdio.h>
int main()
{
    int n,r,sum=0,product=1,sub;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r;
        product=product*r;
    }
    sub=product-sum;
    printf("%d",sub);
}