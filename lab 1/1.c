#include<stdio.h>
void main()
{
    int i,j;
    printf("enter i & j : ");
    scanf("%d",&i);
    scanf("%d",&j);
        i=i+j-(i%j);
    printf("i =%d",i);


}
