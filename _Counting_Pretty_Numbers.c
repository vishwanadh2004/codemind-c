#include<stdio.h> 
int main()
{
    int n,m;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int a,b,c=0;
        scanf("%d%d",&a,&b);
        for(int j=a;j<=b;j++)  
        {
            m=j%10;
            if(m==2 || m==3 || m==9)        
            {
                c++;    
            }
        } 
                printf("%d
",c);
    }
}