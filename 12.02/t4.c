#include <stdio.h>
#include <stdlib.h>

#define total (5)
#define choose

struct student
{
	int num;
	char name[10];
	char sex;
	int age;
	float grade;
};

int input(struct student *sp[]);
int sort(struct student *sp[]);
int output(struct student *sp[]);

int main(){
	struct student *sp[total];
	struct student stu[total];
	
	int i;
	for( i=0; i<total; i++)
	{
		sp[i] = stu+i;
	}

	input(sp);
	sort(sp);
	output(sp);

	return 0;
}

int input(struct student *sp[]){
	int i;
	for( i=0; i<total; i++)
	{
/*		printf("input the num of %dth student\n",i+1);
		scanf("%d",&sp[i]->num);
		printf("input the name of %dth student\n",i+1);
		scanf("%s",sp[i]->name);
		fflush(stdin);
		printf("input the sex of %dth student\n",i+1);
		scanf("%c",&sp[i]->sex);
		printf("input the age of %dth student\n",i+1);
		scanf("%d",&sp[i]->age);
		printf("input the grade of %dth student\n",i+1);
		scanf("%f",&sp[i]->grade);
*/		printf("input num name sex age grade\n");
		scanf("%d%s%1s%d%f",&sp[i]->num,
							sp[i]->name,
							&sp[i]->sex,
							&sp[i]->age,
							&sp[i]->grade);
	}
	return (0);
}

int sort(struct student *sp[]){
	int i,j;
#ifdef choose
	int order;
	struct student *media = NULL;
	for( i=0; i<total; i++)
	{
		order = i;
		media = sp[i];
		for( j=i+1; j<total; j++)
		{
			if( sp[j]->grade < media->grade)
			{
				media = sp[j];
				order = j;
			}
		}
		sp[order] = sp[i];
		sp[i] = media;
	}
#else
	struct student *media = NULL;
	for( i=0; i<total; i++)
	{
		for( j=1; j<total; j++)
		{
			if( sp[j-1]->grade < sp[j]->grade)
			{
				media = sp[j];
				sp[j] = sp[j-1];
				sp[j-1] = media;
			}
		}
	}
#endif
	return (0);
}

int output(struct student *sp[]){
	int i;
	printf("num\t");
	printf("name\t");
	printf("sex\t");
	printf("age\t");
	printf("grade\t");
	printf("\n");
	for ( i=0; i<total; i++)
	{
		printf("%d\t",sp[i]->num);
		printf("%s\t",sp[i]->name);
		printf("%c\t",sp[i]->sex);
		printf("%d\t",sp[i]->age);
		printf("%3.1f\t",sp[i]->grade);
		printf("\n");
	}
	return (0);
}