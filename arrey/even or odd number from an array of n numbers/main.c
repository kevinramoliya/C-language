#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,i,countodd=0,counteven=0;
	printf("how many number you want to enter???\n");
	scanf("%d",&n);
	int num[n];

	for (i=0;i<n;i++)
	{
		
		printf("enter number[%d]",i);
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++)
	{
		if (num[i]%2==0)
		{
			counteven++;
		}
		else {
			countodd++;
		}
	}
	printf("odd number count=%d \n even number count=%d",countodd,counteven);
	return 0;
}