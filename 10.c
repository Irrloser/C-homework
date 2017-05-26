#include<stdio.h>
int main()
{
    int i,k,sum=0;
    int a[10];
    scanf("%d",&k);
    while(k--)
    {
        for(i=0;i<10;i++)
           { 
               scanf("%d",a+i);
               sum+=a[i];
           }
        printf("%d\n",sum);
    }
}