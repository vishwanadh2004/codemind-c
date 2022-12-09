#include<stdio.h>
int main()
{
    int bs,da,hra;
    float total;
    scanf("%d",&bs);
    if(bs<=10000)
    {
        da=(bs*80)/100;
        hra=(bs*20)/100;
    }
    else
    if(bs<=20000)
    {
        da=(bs*90)/100;
        hra=(bs*25)/100;
    }
    else
    if(bs>20000)
    {
        da=(bs*95)/100;
        hra=(bs*30)/100;
    }
    total=da+hra+bs;
    printf("%0.2f",total);
}