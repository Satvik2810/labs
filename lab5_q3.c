#include<stdio.h>
int main()
{
	int a,b,c,d,largest_sum;
	printf("Enter the first number: ");
	scanf("%d,", &a);
	printf("Enter the second number: ");
	scanf("%d,", &b);
	printf("Enter the third number: ");
	scanf("%d,", &c);
	printf("Enter the fourth number: ");
	scanf("%d,", &d);
	if((a+b)>(b+c) && (a+b)>(b+d) && (a+b)>(a+c) && (a+b)>(a+d) && (a+b)>(c+d))
	{
		largest_sum = (a+b);
		printf("largest_sum = %d\n", largest_sum);
	}
	if((b+c)>(a+b) && (b+c)>(b+d) && (b+c)>(a+c) && (b+c)>(a+d) && (b+c)>(c+d))
	{
		largest_sum = (b+c);
		printf("largest_sum = %d\n", largest_sum);
	}
	if((a+c)>(a+b) && (a+c)>(a+d) && (a+c)>(b+c) && (a+c)>(b+d) && (a+c)>(c+d))
	{
		largest_sum = (a+c);
		printf("largest_sum = %d\n", largest_sum);
	}
	if((a+d)>(a+b) && (a+d)>(a+c) && (a+d)>(b+c) && (a+d)>(b+d) && (a+d)>(c+d))
	{
		largest_sum = a+d;
		printf("largest_sum = %d\n", largest_sum);
	}
	if((b+d)>(a+b) && (b+d)>(a+c) && (b+d)>(a+d) && (b+d)>(b+c) && (b+d)>(c+d))
	{
		largest_sum = b+d;
		printf("largest_sum = %d\n", largest_sum);
	}
	if((c+d)>(a+b) && (c+d)>(a+c) && (c+d)>(a+d) && (c+d)>(b+c) && (c+d)>(b+d))
	{
		largest_sum = c+d;
		printf("largest_sum = %d\n", largest_sum);
	}
	else
	{
		printf("NO UNIQUE ANSWER\n");
	}
return 0;
}