#include <stdio.h>
int main()
{
	int i,j,aev[5][3],sum=0,aevrage,mark;
	char name;

	for(i=0;i<5;i++)
	{
		printf("%d i",i);
		printf("enter student name\n");
		scanf("%s",&name);
		for(j=0;j<3;j++)
		{
			
			printf("enter frist sub mark::");
			scanf("%d",&mark);
			sum=sum+mark;	
		
		}
		aevrage=sum/3;
		printf("aevrage mark=%d \n",aevrage);

	}
	//printf("%d i",i);
	//printf("%d j",j);


return 0;

}
