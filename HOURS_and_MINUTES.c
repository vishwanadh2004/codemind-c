#include<stdio.h>
int main()
{
    int s,hr,min;
    scanf("%d",&s);
    hr=s/60;
    min=s%60;
    printf("%d Hour(s) %d Minute(s)",hr,min);
}