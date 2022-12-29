#include<stdio.h>
int main()
{
    int n,i,f=0,g=0,j;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        f=f+(i*i);
    }
    for(j=0;j<=n;j++)
    {
        g=g+j;
    }
    printf("%d",(g*g)-f);
}