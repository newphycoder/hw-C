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
	int i = 0;
	fp = fopen("stud_dat","r");
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
		i++;
	}
	if ( fclose(fp) == 0 )
	{
		printf("stud_dat closed\n");
	}
	else
	{
		printf("can't close\n");
		return (-1);
	}

	fp = fopen("stud_sort","w");
	if (fp)
	{
		printf("file opened\n");
	}
	else
	{
		printf("can't open\n");
		return (-1);
	}
	for (int j = 0; j<i; j++)
	{
		if (head->avevage < head->next->avevage)
		{
			p = head;
			head = head->next;
			p->next = head->next;
			head->next = p;
		}
		STU **med;
		med = &head->next;
		while ((*med)->next)
		{
			if ((*med)->avevage < (*med)->next->avevage)
			{
				p = *med;
				(*med) = (*med)->next;
				p->next = (*med)->next;
				(*med)->next = p;
			}
			med = &(*med)->next;
		}
	}
	p = head;
	while (head)
	{
		fwrite(head,sizeof(STU),1,fp);
		head = head->next;
		free(p);
		p = head;
	}
	fflush(fp);
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