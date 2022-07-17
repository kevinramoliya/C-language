#include <stdio.h>
int main(int argc, char const *argv[])

{
	int row1,col1,row2,col2,i,j,k;
	printf("enter m1 row of matrix\n");
	scanf("%d",&row1);
	printf("enter m1 col of matrix\n");
	scanf("%d",&col1);
	printf("enter m2 row of matrix\n");
	scanf("%d",&row2);
	printf("enter m2 col of matrix\n");
	scanf("%d",&col2);
	int m1[row1][col1],m2[row2][col2];


	for (i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			printf("enter value of m1[%d][%d]",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	printf("entered matrix given below<<<<<\n");
	for (i=0;i<row1;i++)
		{
			for(j=0;j<col1;j++)
			{
				printf("%d ",m1[i][j]);
			
			}
			printf("\n");
		}
	for (i=0;i<row2;i++)
	{
		for(j=0;j<col2;j++)
		{
			printf("enter value of m2[%d][%d]",i,j);
			scanf("%d",&m2[i][j]);
		}
	}
	printf("entered matrix given below<<<<<\n");
	for (i=0;i<row2;i++)
		{
			for(j=0;j<col2;j++)
			{
				printf("%d ",m2[i][j]);
			
			}
			printf("\n");
		}

		printf("the mulitiplication of m1 and m2\n");

		if (col1!=row2)
		{
			printf("multiplication is not possible\n");

		}
		else if (col1==row2)
		{
			int m3[row1][col2],sum;

			for(i=0;i<row1;i++)
			{
				
				for(j=0;j<row1;j++)
				{
					sum=0;
					for(k=0;k<row1;k++)
					{
						sum=sum+(m1[i][k]*m2[k][j]);
					}
					m3[i][j]=sum;
					
				}

			}

			for(i=0;i<row1;i++)
			{
				for(j=0;j<col2;j++)
				{
					printf("%d ",m3[i][j]);
				}
				printf("\n");
			}

		}

	return 0;
}
	
