#include <stdio.h>
struct cricket
{
	char name[100];
	char team_name[100];
	char beting_aevarage[100];
};
int main(int argc, char const *argv[])
{
	int n;
	printf("enter how many player detail you want to enterd??\n");
	scanf("%d",&n);
	struct cricket player[n];

	for(int i=0;i<n;i++)
	{
		printf("enter player[%d]detail::\n",i+1);
		printf("enter player name::");
		scanf("%s",&player[i].name);
		printf("enter team name::");
		scanf("%s",&player[i].team_name);
		printf("enter beting aevarage::");
		scanf("%s",&player[i].beting_aevarage);
		printf("\n\n");
	}

	for (int i = 0; i<n; ++i)
	{
		printf("\t\t||player [%d] detail||\n",i+1);
		printf("name::%s \n",player[i].name);
		printf("team name::%s \n",player[i].team_name);
		printf("beting aevarage::%s \n",player[i].beting_aevarage);
		printf("\n\n");

	}

	return 0;
}

