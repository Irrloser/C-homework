#include<stdio.h>
int Leap_Year(int a){
	int ret;
	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
		ret = 1;
	else
		ret = 0;
	return ret;
}
int month(int b)
{
	int mon[13]={ 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int i,total;
	total = 0;
	for (i = 0; i <b ; i++)
	{
		total += mon[i];
	}
	return total;
}

int main(void)
{
	int k;
	scanf("%d", &k);
	while(k--)
	{
		int a, b, c;
		int number;
		scanf("%d %d %d", &a, &b, &c);
		if (Leap_Year(a))
		{
			number = month(b) + 1 + c;
		}
		else {
			number = month(b) + c;
		}
		printf("%d\n", number);
	}
	return 0;
}
