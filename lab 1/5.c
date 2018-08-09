#include<stdio.h>
void main()
{
    int i=0;
    char a[20];
    gets(a);
    for(i=0;a[i];i++);
    printf("length = %d",i);


}
