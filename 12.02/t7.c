#include <stdio.h>
#include <stdlib.h>

struct Book
{
	int num;
	char name[30];
	char author[30];
	char publisher[30];
	struct Book *next;
};

int run(struct Book **hp);
struct Book *add(struct Book *head);
struct Book *find(struct Book *head,int target);
int delect(struct Book **head,int target);
int print(struct Book *head);
int freememory(struct Book *head);

int main(){
	struct Book *head = NULL;
	run(&head);
	freememory(head);
	return (0);
}

int run(struct Book **hp){
	int i;
	int num;
	printf("\n");
	printf("which operate do you want:\n");
	printf("0.terminate\n");
	printf("1.add a book\n");
	printf("2.find a book\n");
	printf("3.delect a book\n");
	printf("4.print all book\n");
	printf("input:");
	scanf("%d",&i);
	if (i==0)
	{
		return (0);
	}
	else if (i==1)
	{
		printf("\n");
		*hp = add(*hp);
	}
	else if (i==2)
	{
		printf("\n");
		struct Book *result;
		printf("the number of the book\n");
		scanf("%d",&num);
		result = find(*hp,num);
		if (result)
		{
			printf("number     :  %d\n",result->num);
			printf("name       :  %s\n",result->name);
			printf("author     :  %s\n",result->author);
			printf("publisher  :  %s\n",result->publisher);
		}
		else
		{
			printf("haven't the book\n");
		}
	}
	else if (i==3)
	{
		int t;
		printf("\n");
		printf("the number of the book\n");
		scanf("%d",&num);
		t=delect(hp,num);
		if (t!=0)
		{
			printf("delected\n");
		}
		else 
		{
			printf("haven't the book\n");
		}
	}
	else if (i==4)
	{
		print(*hp);
	}
	else
	{
		printf("\n");
		printf("input error\n");
	}
	run(hp);
	return (0);
}

struct Book *add(struct Book *head){
	int i;
	struct Book *pnew = NULL;
	pnew = (struct Book*)malloc( sizeof (struct Book));
	printf("the number of the book:\n");
	scanf("%d",&pnew->num);
	if (find(head,pnew->num))
	{
		printf("already have this number\n");
	}
	else
	{
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
	int t;
	while (head)
	{
		if ( head->num == target)
		{
			t=1;
			break;
		}
		head = head->next;
	}
	return (head);
}

int delect(struct Book **head,int target){
	int t=0;
	while (*head)
	{
		if ( (*head)->num == target)
		{
			free(*head);
			*head = (*head)->next;
			t = 1;
			break;
		}
		head = &(*head)->next;
	}
	return (t);
}

int print(struct Book *head){
	printf("\n");
	printf("num\t");
	printf("name\t");
	printf("author\t");
	printf("publisher\t");
	printf("\n");
	while (head)
	{
		printf("%d\t",head->num);
		printf("%s\t",head->name);
		printf("%s\t",head->author);
		printf("%s\t",head->publisher);
		printf("\n");
		head = head->next;
	}
	return (0);
}

int freememory(struct Book *head){
	struct Book *p=(void *)head;
	if (head->next)
	{
		head = head->next;
		freememory(head);
	}
	free(head);
	return (0);
}