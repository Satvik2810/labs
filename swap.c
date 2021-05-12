#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the value of a:");
	scanf("%d", &a);
	printf("Enter the value of b:");
	scanf("%d", &b);
	printf("The result wihtout introducing a third variable is:\n");
	printf("Value of a is: %d\n", b);
	printf("Value of b is:%d\n", a);
	printf("The resullt after introducing a third variable is:\n");
	c=b;
	printf("The value of a is:%d\n",c);
	c=a;
	printf("The value of b is:%d\n",c);
	return 0;
}
