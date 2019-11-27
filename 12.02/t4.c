#include <stdio.h>
#include <stdlib.h>

#define total (5)

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
	struct student (*stu)[total];
	struct student stustore[total];
	
	int i;
	for( i=0; i<total; i++)
	{
		stu = stustore;
	}

	input(stu,

	return 0;
}
