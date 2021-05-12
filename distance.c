#include<stdio.h>
float main()
{
	float t, d, u, a, temp1, temp2;
	printf("Enter the value of velocity:");
	scanf("%f", &u);
	printf("Enter the value of time:");
	scanf("%f", &t);
	printf("Enter the value of acceleratioin:");
	scanf("%f", &a);
	temp1 = u*t;
	temp2= a*t*t/2;
	d= temp1 + temp2;
	printf("The distance is: %f,\n", d);
	return 0;
}