#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,c;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            if(i%2==0)
            {
               c++;
            }
            else
            {
                c=0;
                printf("False");
            }
        }
    }
    if(c>0)
    {
        printf("True");
    }
}