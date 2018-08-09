#include<stdio.h>
int main()
{
    int i,a,b,c,d,e;
    for(i=33;i<=99;i++)
    {
        e=i*i;
        a=e%10;
        e/=10;
        b=e%10;
        e/=10;
        c=e%10;
        e/=10;
        d=e%10;
        e/=10;
        if(a==b&&c==d)
        {  printf("%d",i*i);
           break;
        }
    }
}
