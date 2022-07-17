#include <stdio.h>
struct time_struct
{
	int second;
	int miniet;
	int hour;
};
int main(int argc, char const *argv[])
{
	struct time_struct time;
	printf("enter hour::");
	scanf("%d",&time.hour);
	printf("enter miniet::");
	scanf("%d",&time.miniet);
	printf("enter second::");
	scanf("%d",&time.second);
	printf("\n\n\n\n");
	printf("\t||time in proper formate// %d:%d:%d \n",time.hour,time.miniet,time.second);
	return 0;
}
