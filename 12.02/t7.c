#include <stdio.h>
#include <stdlib.h>

struct Book
{
	struct Book *last;
	int num;
	char name[30];
	char author[30];
	char publisher[30];
	struct Book *next;
};

int run(struct Book **head);
struct Book *add(struct Book *head);
struct Book *find(struct Book *head,int target);
int delect(struct Book **head,int target);
int freememory(head);

int main(){
	struct Book *head = NULL;
	run(&head);
	freememory(head);

	return (0);
}

int run(struct Book **ph){
	int i;
	printf("which operate do you want:\n");
	printf("0.terminate\n");
	printf("1.add a book\n");
	printf("2.find a book\n");
	printf("3.delect a book\n");
	printf("4.print all book\n");
	scanf("%d",&i);
	if (i==0)
	{
		return (0);
	}
	else if (i==1)
	{
		int n;
		printf("the number of books\n");
		scanf("%d",&n);
		*hp = add(*hp)
	}
	else if (i==2)
	{
		struct Book *result;
		printf("the number of the book\n");
		scanf("%d",num);
		result = find(*hp,num);
		if (result)
		{
			printf("number     :  %s\n",result->number);
			printf("name       :  %s\n",result->name);
			printf("author     :  %s\n",result->author);
			printf("publisher  :  %s\n",result->publisher);
		}
		else
		{
			printf("can't find\n");
		}
	}
	else if (i==3)
	{
		delect(hp,num);
	}
	else
	{
		printf("input error\n");
	}
	run(head);
	return (0);
}

struct Book *create(amount){
	int i;
	struct Books *head = NULL, *pnew = NULL;
	for ( i=0; i<amount; i++)
	{
		pnew = (struct Book*)malloc( sizeof (struct Book));
		printf("the number of the book:\n");
		scanf("%d",&pnew->num);
		printf("the name of the book:\n");
		scanf("%s",pnew->name);
		printf("the author of the book:\n");
		scanf("%s",pnew->author);
		printf("the publisher of the book:\n");
		scanf("%s",pnew->publisher);
		pnew->next = head;
		head = pnew;
	}
	return (head);
}

struct Book *find(struct Book *head,int target){
	while (head)
	{
		if ( head->num = target)
		{
			t=1;
			break;
		}
		head = head->next;
	}
	return (head);
}

int delect(struct Book **head,int target){
	while (*head)
	{
		if ( (*head)->num = target)
		{
			head = head->next;
}
