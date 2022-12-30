#include<stdio.h>
int main()
{
    int r,rev=0,n,num;
    scanf("%d",&n);
    num=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    if(num==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}