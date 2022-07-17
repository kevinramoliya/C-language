#include <stdio.h>
int main(int argc, char const *argv[])
{   
	int gs;
	int bs;
	printf("enter your basic selary\n");
	scanf("%d",&bs);
	if(bs>=10000)
	{
		if(bs<20000)
		{
			gs=bs+((20*bs)/100)+((80*bs)/100);
		printf("your groth selary is %d\n",gs);
		}
		else if(bs>=20000)
	{
		if(bs<30000)
		{
			gs=bs+((25*bs)/100)+((90*bs)/100);
		printf("your groth selary is %d\n",gs);
		}
		  else if(bs>=30000)
			{
				gs=bs+((30*bs)/100)+((95*bs)/100);
				printf("your groth selary is %d\n",gs);	
			}
return 0;
}

	
	
