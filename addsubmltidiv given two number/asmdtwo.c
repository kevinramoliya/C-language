#include <stdio.h>
#include <math.h>
int  main()
{
	float a,b,c;
	int d;
	printf("hello\n");
	printf("enter your frist number\n");
	scanf("%f",&a);
	printf("enter your second number\n");
	scanf("%f",&b);
		printf("[chose your action]\n");
		printf("[1]addision\n");
		printf("[2]substrection\n");
		printf("[3]multiplication\n");
		printf("[4]division\n");
		printf("enter your choise...\n");
		scanf("%d",&d);

			if(d<=1 )
				
					{c=(a+b);
					printf("%f is your answere\n",c);
					return 0;
				}
			

			if(d<=2 && d>1)
				
				{	c=(a-b);
					printf("%f is your answere\n",c);
					return 0;
				}
			

			if(d<=3 && d>2)
				
					{c=(a*b);
					printf("%f is your answere\n",c);
					return 0;
				}
			

			if(d<=4 && d>3)
				
				{	c=(a/b);
					printf("%f is your answere\n",c);
					return 0;
				}
			
return 0;	
}