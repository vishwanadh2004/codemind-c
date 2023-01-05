#include<stdio.h>
int main()
{
    int n,k,x,y,rc;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    rc=x*k;
    if(x<y)
    {
    printf("%d",rc+x*(n-k));
    }
    else
    {
        printf("%d",rc+y*(n-k));
    }
}