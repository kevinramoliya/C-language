#include <stdio.h>
int main(int argc, char const *argv[])

{
	int m,n,i,j;
	printf("enter row of matrix\n");
	scanf("%d",&m);
	printf("enter col of matrix\n");
	scanf("%d",&n);
	int m1[m][n];

	for (i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter value of m1[%d][%d]",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	printf("entered matrix given below<<<<<\n");
	for (i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d ",m1[i][j]);
			
			}
			printf("\n");
		}

	printf("transpos of matrix given below>>>>>\n");
	for (i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",m1[j][i]);
			
		}
		printf("\n");
	}

	return 0;
}
	
