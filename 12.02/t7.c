#include <stdio.h>

struct Book
{
	int num;
	char name[30];
	char author[30];
	char publisher[30];
	struct Book *next;
};

int run(struct Book *head);
struct Book *create(int amount);
struct Book *find(struct Book *head,int target);
struct Book *delect(struct Book *head,int target);

int main(){
	int n;
	int num;
	struct Book *head;
	printf("the amount of books:\n");
	scanf("%d",&n);
	head = create(n);
	run(head);
	freememory(head);
	return (0);
}

int run(struct Book *head){
	int i;
	printf("which operate do you want:\n");
	printf("0.terminate\n");
	printf("1.find a book\n");
	printf("2.delect a book\n");
	scanf("%d",&i);
	if (i==0)
	{
		return (0);
	}
	else if (i==1)
	{
		struct Book *result;
		printf("the number of the book\n");
		scanf("%d",num);
		result = find(head,num);
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
	else if (i==2)
	{
		delect(head,num);
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
			t=1
			break;
		}
		head = head->next;
	}
	return (head);
}

struct Book *delect(struct Book *head,int target){
	find
}