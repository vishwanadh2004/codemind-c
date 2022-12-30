#include<stdio.h> 
int main() 
{    
    int n,i,sum=0,t; 
    scanf("%d",&n); 
    t=n;   
    for(i=1;i<n;i++) 
    {        
        if(n%i==0)   
        {          
            sum=sum+i; 
        }   
    }   
            if(sum==t) 
        {      
                printf("PERFECT"); 
        }     else if(sum<t)   
        {         
                    printf("DEFICIENT"); 
        }   
                    else 
    {    
                        printf("ABUNDANT"); 
    }     
}