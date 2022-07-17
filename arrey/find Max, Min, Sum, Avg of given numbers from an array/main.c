#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,i,min,max;
	double avg,sum=0;
	printf("how many number you want to emter??\n");
	scanf("%d",&n);
	int num[n];

	for (i=0;i<n;i++)
	{
		printf("enter the number[%d]\n",i);
		scanf("%d",&num[i]);


		

	}
	max=min=num[0];
	for(i=0;i<n;i++)
	{
		if(max<num[i])
		{
			max=num[i];
		}
		if(min>num[i])
		{
			min=num[i];
		}
		sum=sum+num[i];

	}
	avg=sum/n;

	printf("maximum number is %d \n",max);
	printf("minimum number is %d \n",min);
	printf("sum of the number is %f \n",sum);
	printf("aevrage of the number's is %.3lf \n",avg);

	return 0;
}