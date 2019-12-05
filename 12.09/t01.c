#include <stdio.h>

#define TOTAL 5

typedef struct stu
{
	int num;
	char name[30];
	float grade[3];
	float average;
	struct stu *next;
}STU;


int main(){
	FILE *fp;
	fp = fopen("stud_dat","w");
	if (fp)
	{
		printf("file opened\n");
	}
	else
	{
		printf("can't open\n");
		return (-1);
	}
	STU stdinfo[TOTAL];
	for (int i = 0; i < TOTAL; i++)
	{
		float sum = 0;
		printf("input the number, name, grades of %dth student\n",i+1);
		scanf("%d%s", &stdinfo[i].num, stdinfo[i].name);
		for (int j=0; j<3; j++)
		{
			scanf("%f",&stdinfo[i].grade[j]);
			sum += stdinfo[i].grade[j];
		}
		stdinfo[i].average = sum / 3;
	}
	fwrite(stdinfo, sizeof(stdinfo), 1, fp);
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