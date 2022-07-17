#include <stdio.h>
struct student_recored
{
	char student_name[100];
	char student_branch[100];
	double student_mark;
};
int main(int argc, char const *argv[])
{
	int n;
	printf("enter how many student in your class??\n");
	scanf("%d",&n);
	struct student_recored student[n];

	for(int i=0;i<n;i++)
	{
		printf("enter detail of student[%d]~~~\n",i+1);
		printf("enter name::");
		scanf("%s",&student[i].student_name);
		printf("enter branch::");
		scanf("%s",&student[i].student_branch);
		printf("enter total obtain mark::");
		scanf("%lf",&student[i].student_mark);
		printf("\n\n");

	}
	for(int i=0;i<n;i++)
	{
		printf(" \t\t~~~student[%d] detail~~~\n",i+1);
		printf("\tname::%s \n",student[i].student_name);
		printf("\tbranch::%s \n",student[i].student_branch);
		printf("\ttotal obtain mark::%lf \n",student[i].student_mark);
		printf("\n\n");		
	}
	return 0;
}