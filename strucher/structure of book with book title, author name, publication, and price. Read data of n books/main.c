#include <kamlesh.h>

struct book{
	char tittle[100];
	char author[100];
	char publication[100];
	double price;
};

int main(int argc, char const *argv[])
{
	int n;
	printf("enter how many book want you enter??\n");
	scanf("%d",&n);
	struct book bk[n];
	for(int i=0;i<n;i++)
		{
			printf("\nenter  book %d detail\n",i+1);
			printf("enter tittle::");
			scanf("%s",&bk[i].tittle);
			printf("enter author name::");
			scanf("%s",&bk[i].author);
			printf("enter publication name::");
			scanf("%s",&bk[i].publication);
			printf("enter price of book::");
			scanf("%lf",&bk[i].price);
		}
	for (int i=0;i<n;i++)
	{
		printf("\n\t\t\t\t---|||BOOK %d detail|||---\n",i+1);
		printf("\tTITTLE::'%s' \n",bk[i].tittle);
		printf("\tAUTHOR name::'%s' \n",bk[i].author);
		printf("\tPublication::'%s' \n",bk[i].publication);
		printf("\tPrice::--%.3lf-- \n",bk[i].price);
		printf("\n\n");
	}

	return 0;
}