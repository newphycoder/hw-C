#include <stdio.h>

struct student
{
		int num;
		char nam[10];
		char sex;
		int age;
		float grade;
};


int main()
{
	struct student stu[5]={
		{101,"zhang",'M',19,95.5},
		{102,"wang",'F',18,92.0},
		{103,"zhao",'M',19,85.5},
		{104,"li",'M',20,96.0},
		{105,"gao",'G',17,91.0}
		};
	int i;
	int order[5];

	for( i=0; i<5; i++)
	{
		order[i]=i;
	}

	return 0;
}