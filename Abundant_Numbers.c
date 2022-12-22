#include<stdio.h>
int main()
{
    int n,i,s=0,q;
    scanf("%d",&n);
    q=n;
    for(i=1;i<n;i++)
    {
        if(q%i==0)
        {
            s=s+i;
        }
    }
    if(s>n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}