#include<stdio.h>
void concatenate(char *a,char *b,int k);
void main()
{
    int l;
    char a[20],b[10];
    printf("enter the string a :");
    gets(a);
    l=strlen(a);
    printf("enter the string b :");
    gets(b);
    concatenate(a,b,l);
    puts(a);
}
void concatenate(char *a,char *b,int k)
{
    int i;
    for(i=0;*(b+i);i++)
       *(a+k+i)=*(b+i);
       *(a+k+i)=0;
}
