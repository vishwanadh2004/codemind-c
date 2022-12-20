#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float ar,s;
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c)/2.0;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%0.2f",ar);
}