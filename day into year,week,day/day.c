#include <stdio.h>
void main()
{
	int days;
	printf("enter number of days\n");
	scanf("%d",&days);
	int year=days/365;
	int week=(days%365)/7;
	int day=(days%365)%7;
	int month=(days/30);
	printf("days into year is %d \n",year);
	printf("days into week is %d \n",week);
	printf("days into day is %d \n",day);
	printf("days into month is %d \n",month);

}