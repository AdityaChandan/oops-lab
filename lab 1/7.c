#include<stdio.h>
int strend(char *s,char *t,int l,int m);
void main()
{
    int l,m;
     char a[20],b[10];
    printf("enter the string a :");
    gets(a);
    printf("enter the string b :");
    gets(b);
    l=strlen(a);
    m=strlen(b);
    strend(a,b,l,m);
}
int strend(char *s,char *t,int l,int m)
{
    int i,j;
    for(i=l-1,j=m-1;i>=l-m;i--,j--)
    {
        if(*(s+i)!=*(t+j))
           {return 0;
            break;}
        else
            return 1;
    }
}
