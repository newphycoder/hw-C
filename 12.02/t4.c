#include <stdio.h>
#include <stdlib.h>

#define total (5)
#define chance

struct student
{
	int num;
	char name[10];
	char sex;
	int age;
	float grade;
};

int input(struct student *sp);
int sort(struct student *sp);
int output(struct student *sp);

int main(){
	struct student (*sp)[total];
	struct student stu[total];
	
	int i;
	for( i=0; i<total; i++)
	{
		sp = stu;
	}

	input(sp);
	sort(sp);
	output(sp);

	return 0;
}

int input(struct student *sp){
	int i;
	for( i=0; i<total; i++)
	{
		printf("input the num of %dth student\n",i+1);
		scanf("%d",&sp->num);
		printf("input the name of %dth student\n",i+1);
		scanf("%s",sp->name);
		printf("input the sex of %dth student\n",i+1);
		scanf("%c",&sp->sex);
		printf("input the age of %dth student\n",i+1);
		scanf("%d",&sp->age);
		printf("input the grade of %dth student\n",i+1);
		scanf("%f",&sp->grade);
		sp++;
	}
	return (0);
}

int sort(struct student *sp){
	int i,j;
#ifdef chance
	for( i=0; i<total; i++)
	{
		

