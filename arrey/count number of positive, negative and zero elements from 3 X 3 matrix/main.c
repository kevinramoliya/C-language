#include <stdio.h>
int main(int argc, char const *argv[])

{
	int m,n,i,j,zero=0,positive=0,negative=0;
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
	for (i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" %d \t",m1[i][j]);
			
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if (m1[i][j]<0)
			{
				negative++;
			}
			if(m1[i][j]>0)
			{
				positive++;
			}
			if (m1[i][j]==0)
			{
				zero++;
			}
		}
	}
	printf("positive number's=%d \n",positive);
	printf("negative number's=%d \n",negative);
	printf("zero number's=%d \n",zero);


	return 0;
}
	
