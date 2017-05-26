/*IP地址转换*/
#include<stdio.h>
#define BYTE 8
void dec2bin(int *a,int k);
void output(int *a);
int main()
{
	int a, k;
	int res[32];
	scanf("%d", &k);
	while (k--)
	{
		scanf("%d", &a);
		dec2bin(res, a);
		output(res);
	}
}
void dec2bin(int *a,int k)
{
	int i;
	for (i = 0; i<4 * BYTE; i++)
	{
		a[i] = k % 2;
		k /= 2;
	}
}
void output(int *a)
{
	int i, j;
	int ret[4] = { 0 };
	for (j = 0; j <4; j++)
		for (i = (j+1)*BYTE-1; i >=j*BYTE; i--)
			ret[j] = ret[j] * 2 + a[i];
			
	printf("%d.%d.%d.%d\n", ret[0], ret[1], ret[2], ret[3]);
}
