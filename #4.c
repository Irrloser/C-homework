#include<stdio.h>
/*循环移位*/
int main(void)
{
	int a, b, c,d;

	scanf("%d %d", &a, &b);
	b %= 32;
	c = a >> b;
	d = a << (32 - b);
	printf("%d\n", c | d);
}
