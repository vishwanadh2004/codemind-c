#include<stdio.h> 
int main() 
{
    int n;
    scanf("%d",&n);
    int ar[n],i,j,flag=0,psq=0;
    for(i=0;i<n;i++)
    {
    scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)    
    {
        for(j=1;j<=n;j++)
        {
           if(j*j==ar[i])
           {
              psq+=ar[i];
           }
        }
    }   
        printf("%d",psq);
}