#include <stdio.h>
int i,n,contodd=0,conteven=0;

int main(int argc, char const *argv[])
{
 	
 	
	printf("enter how many number you enterd?\n");
	scanf("%d",&n);
	int num[n];
	printf("no of odd number=%d \n",contodd());
	printf("no of odd number=%d \n",conteven());
	return 0;
}

int contodd()
{
	

		for(i=0;i<n;i++)
		{
			printf("num[%d]= \n",i);
			scanf("%d",&num[i]);
		}
		for (i=0;i<n;i++)
		{
			if (num[i]%2!=0)
			{
				contodd++;
			}
			
		
		}
return contodd;
}
int conteven()
{
	for(i=0;i<n;i++)
		{
			printf("num[%d]= \n",i);
			scanf("%d",&num[i]);
		}
		for (i=0;i<n;i++)
		{
			if (num[i]%2==0)
			{
				conteven++;
			}
			
		
		}
return conteven;
}
