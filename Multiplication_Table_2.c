#include<stdio.h>
int main()
{
    int a,n,i;
    scanf("%d%d",&a,&n);
    for(i=1;i<=n;i++)
    {
        printf("%d x %d = %d
",a,i,a*i);
    }
}