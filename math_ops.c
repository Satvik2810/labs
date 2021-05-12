#include<stdio.h>
#include<math.h>
int main()
{
	double pi = 3.142;
	double x , y ;
	double expr1 , expr2 ;
	printf("Enter the value of x:");
	scanf("%lf", &x);
	printf("Enter the value of y:");
	scanf("%lf", &y);
	expr1 = (exp(x) * sin(60*pi/180) + 5.6 * (pow(10,-5)))/(3 * cos(30*pi/180));
	printf("expr1 = %lf\n",  expr1);
	expr2 = sin((atan(0.33) + 3.142)/(2 * y));
	printf("expr2 = %lf\n", expr2);
	return 0; 
}