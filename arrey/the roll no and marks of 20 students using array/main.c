#include <stdio.h>
int main(int argc, char const *argv[])
{
	int student[20][2],i,j;

	for (i=0;i<20;i++)
	{
		for (j=0;j<2;j++)
		{
			if(j==0)
			{
				printf("enter roll number\n");
				scanf("%d",&student[i][0]);
			}
			if(j==1)
			{
				printf("enter total mark's \n");
				scanf("%d",&student[i][1]);
			}
		}
	}
	for(i=0;i<20;i++)
	{
		for(j=0;j<2;j++)
		{
			if (j==0)
			{
				printf("rollnumber=%d \t",student[i][0]);
			}
			if (j==1)
			{
				printf("mark's=%d ",student[i][1]);
			}
		}
		printf("\n");
	}
	return 0;
}