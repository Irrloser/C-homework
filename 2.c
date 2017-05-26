#include<stdio.h>
#define YES 1
void judge(int a);
int main()
{
    int a;
    while(scanf("%d",&a))
        judge(a);
}
void judge(int a)
{
    if(a/3==0&&a%10==5)
        print("%d\n",YES);
    else 
        printf("%d\n",!YES);
}