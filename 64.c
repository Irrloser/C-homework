#include<stdio.h>
#define size 8*sizeof(int)
void dec2bin(int *a, unsigned int x);
void print(int *a);
void reverse(int m, int n, int *a);

int main()
{
	unsigned int i,x,m,n;
	int a[size];
	scanf("%d %d %d", &x,&m,&n);
	dec2bin(a, x);
	print(a);
	reverse(m, n, a);
	print(a);
}
void print(int *a)
{
	int i;
	for (i = 31; i>23; i--)
		printf("%d", a[i]);
	
	putchar(' ');
	for (i = 23; i > 15; i--)
		printf("%d", a[i]);
	putchar(' ');
	for (i = 15; i >7; i--)
		printf("%d", a[i]);
	putchar(' ');
	for (i =7; i >-1; i--)
		printf("%d", a[i]);
	putchar('\n');
}
void dec2bin(int *a, unsigned int x)
{
	int i;
	for (i = 0; i < size; i++)
	{
		*(a+i) = x % 2;
		x /= 2;
	}
}
void reverse(int m, int n, int *a)
{
	int i;
	for (i = 0; i < n; i++)
		a[m + i]= !a[m + i];
}