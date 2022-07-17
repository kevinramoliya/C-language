#include <stdio.h>
struct person
{
	char name[100];
	int dateofjoinig;
	int monthofjoinig;
	int yearofjoinig;
	long selary;
};
int main(int argc, char const *argv[])
{
	int n;
	printf("enter how many person in your company??\n");
	scanf("%d",&n);
	struct person detail[n];

	for(int i=0;i<n;i++)
	{
		printf("enter person(%d)\n",i+1);
		printf("ener Name::");
		scanf("%s",&detail[i].name);
		printf("enter dateofjoinig::");
		scanf("%d",&detail[i].dateofjoinig);
		printf("enter monthofjoinig::");
		scanf("%d",&detail[i].monthofjoinig);
		printf("enter yearofjoinig::");
		scanf("%d",&detail[i].yearofjoinig);
		printf("enter selary::");
		scanf("%ld",&detail[i].selary);
	}
	for(int i=0;i<n;i++)
	{
		printf("\n\t\t\t||Detail of person %d|| \n",i+1);
		printf("\tName::%s \n",detail[i].name);
		printf("\tDateOfJoinig::%d-%d-%d \n",detail[i].dateofjoinig,detail[i].monthofjoinig,detail[i].yearofjoinig);
		printf("\tselary::%ld \n",detail[i].selary);
		printf("\n\n");
	}
	return 0;
}