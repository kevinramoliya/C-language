#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i,j,person[5][2],greaterhight_170=0,whieagtless_50=0;

	for (i=0;i<5;i++)
	{
		for(j=0;j<2;j++)
		{
			if(j==0)
			{
				printf("enter person(%d) height::",i+1);
				scanf("%d",&person[i][0]);
				if (person[i][0]>=170)
				{
					greaterhight_170++;
				}
			}
			if (j==1)
			{
				printf("enter person(%d) weight::",i+1);
				scanf("%d",&person[i][1]);
				if (person[i][1]<=50)
				{
					whieagtless_50++;
				}
			}
		}
		printf("\n");
	}
	for (i=0;i<5;i++)
	{
		
		
			printf("person(%d) height=%d weight=%d \n",i+1,person[i][0],person[i][1]);
		
	}
	printf("number of person which height greater then 170=%d \n",greaterhight_170);
	printf("number of person which weight less then 50=%d \n",whieagtless_50);

	return 0;
}