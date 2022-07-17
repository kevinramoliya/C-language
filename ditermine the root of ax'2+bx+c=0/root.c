#include <stdio.h>
#include <math.h>

int main()
{
	float a,b,c,root1,root2,rt;
	char i='i';
	
	printf("hello\n");
	printf("your equation given below\n");
	printf("ax*x+bx+c=0\n");
	printf("enter value of a\n");
	scanf("%f",&a);
	printf("enter value of b\n");
	scanf("%f",&b);
	printf("enter value of c\n");
	scanf("%f",&c);
		float d=(b*b)-(4*a*c);
		printf("the value of D=%f",d);
		printf(".........................................................................................................................................................................................................................................\n");
		printf("if you find the root of equation so enter '1'or not to '0'....\n");
		int q1;
		scanf("%d",&q1);
		if(q1>=1 && q1<2)
		{
			printf("work in prosses plese wait...\n");
			printf("we are prossesing that 'd=0' or 'd>0' or 'd<0'...plese wait\n ");
			if(d==0)
			{
				printf("we find that 'd=0'\n");
					root1=-b/(2*a);
					root2=-b/(2*a);
					printf("root1=%f\n",root1);
					printf("root2=%f\n",root2);
					printf("                           root1=root2=%f\n",root1);
                    printf("thank you very much\n");


					

			}
			if(d>0)
			{
				printf("we find that 'd>0'\n");
				rt=sqrt(d);
				root1=(-b+rt)/(2*a);
				root2=(-b-rt)/(2*a);
				printf("root1=%f\n",root1);
				printf("root2=%f\n",root2);
                printf("thank you very much\n");
			}

			if(d<0)
			{
				printf("we find that 'd<o'\n");
				float e=-d;
				rt=sqrt(e);
				root1=-b/(2*a)+rt/(2*a);
				root1=-b/(2*a)-rt/(2*a);

				printf("root1=%f\n",root1);
				printf("root2=%f\n",root2);
                printf("thank you very much\n");
			}
		}
		if(q1>=0 && q1<1){printf("HAVE A NICE DAY\n");
                          printf("thank you very much\n");}
		if(q1!=0 && q1!=1){printf("enter vaild value plese restart the program..\n");
                           }
	
        

	return 0;
}
