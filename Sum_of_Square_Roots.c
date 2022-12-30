#include<stdio.h> 
#include<math.h> 
int main()
{     
    int a,n,i;  
    float sum=0;   
    scanf("%d%d",&a,&n);
    for(i=a;i<=n;i++)    
    {      
        sum=sum+sqrt(i);  
    }     
        printf("%.2f",sum); 
}