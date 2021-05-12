#include<stdio.h>
int main()
{
	int tdays;
	int years,days,months;
	printf("Enter the total number of days:");
	scanf("%d", &tdays);
	years = (tdays/360);
	months = (tdays - 360*years)/30;
	days = tdays - years*360 - months*30;
	printf("Number of years = %d\n", years);
	printf("Number of months = %d\n", months);
	printf("Number of days = %d\n", days);
	return 0;
}