#include<stdio.h>
int main()
{
	int n = 123;
	int count = 0;
	while(n > 0)
	{
		count++;
		n /= 10;
	}

	printf("Count is : %d\n",count);
}

