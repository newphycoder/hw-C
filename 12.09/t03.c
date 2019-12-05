#include <stdio.h>
#include <stdlib.h>

typedef struct stu
{
	int num;
	char name[30];
	float grade[3];
	float avevage;
	struct stu *next;
}STU;

int main(){
	STU *head = NULL;
	STU *p = NULL;
	STU stu_med;
	FILE *fp;
	fp = fopen("stud_sort","r");
	if (fp)
	{
		printf("file opened\n");
	}
	else
	{
		printf("can't open\n");
		return (-1);
	}
	int size;
	size = fread(&stu_med,sizeof(STU),1,fp);
	while (size == 1)
	{
		head = (STU*) malloc(sizeof(STU));
		*head = stu_med;
		(*head).next = p;
		p = head;
		size = fread((void*)&stu_med,sizeof(STU),1,fp);
	}
	while (p)
	{
		printf("%-3d%-10s%5.1f%5.1f%5.1f%5.1f\n",
			p->num,p->name,p->grade[0],
			p->grade[1],p->grade[2],
			p->avevage);
		p = p->next;
		free(head);
		head = p;
	}
	if ( fclose(fp) == 0 )
	{
		printf("file closed\n");
	}
	else
	{
		printf("can't close\n");
	}
	return (0);
}