#include<stdio.h>
int main() 
{ 
    int n,p,i,j,a=0,c=0,sum=0;  
    scanf("%d",&n);
    for (i =1;i<= n;i++)
    {
        if(n%i==0)
        {
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    c++;
                }
            }
            if(c!=2)
            {
                a++;
            }
                c=0;
        }
    }
                printf("%d",a);
}