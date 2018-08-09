#include<stdio.h>
int factorial(int a);
int main()
{
    int a,ans;
    scanf("%d",&a);
    ans=factorial(a);
    printf("ans =%d",ans);
}
int factorial(int a)
{
    int f;
    if(a==0)
        return 1;
    else
    return a*factorial(a-1);

}

