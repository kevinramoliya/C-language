#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,i;
	printf("how many number you want to enter????\n");
	scanf("%d",&n);
	int num[n];

	for (i=0;i<n;i++)
	{
		printf("enter your %d's number::",i);
		scanf("%d",&num[i]);
	}
	printf("revears odder is ....\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d",num[i]);
		printf("\n");
	}
	
	return 0;
}