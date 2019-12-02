#include <stdio.h>

#define count (10)

struct Book
{
	int number;
	char name[30];
	char author[30];
	char publisher[30];
	float price;
};

int main(){
	int i;
	struct Book books[count];
	for( i=0; i<count; i++)
	{
/*		printf("the %dth book's number\n",i+1);
		scanf("%d",&books[i].number);
		printf("the %dth book's name\n",i+1);
		scanf("%s",books[i].name);
		printf("the %dth book's author\n",i+1);
		scanf("%s",books[i].author);
		printf("the %dth book's publisher\n",i+1);
		scanf("%s",books[i].publisher);
		printf("the %dth book's price\n",i+1);
		scanf("%f",&books[i].price);
*/		printf("input number name author publisher price\n");
		scanf("%d%s%s%s%f",	&books[i].number,
							books[i].name,
							books[i].author,
							books[i].publisher,
							&books[i].price);
	}

	float sum=0;
	for( i=0; i<count; i++)
	{
		sum+=books[i].price;
	}

	float average;
	average = sum/count;
	printf("the average of the books' price:%f\n",average);

	return (0); 
}