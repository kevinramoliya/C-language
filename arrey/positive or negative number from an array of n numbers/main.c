#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,i,positive=0,zero=0,negative=0;
	printf("how many number you want to enter??\n");
	scanf("%d",&n);
	int num[n];

	for (i=0;i<n;i++)
	{
		printf("enter num[%d]",i);
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++)
	{
		if (num[i]<0)
		{
			negative++;
		}
		else if (num[i]>0)
		{
			positive++;
		}
		else if(num[i]==0)
		{
			zero++;
		}
	}
	printf("positive number's=%d \n negative number's=%d \n zero's=%d \n",positive,negative,zero);

	return 0;
}