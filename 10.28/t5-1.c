#include <stdio.h>

int main(){
	int i,j,m;
	int grade[10],order[10];
	char name[10][10];
	for(i=0;i<10;i++){
		printf("第%d个学生姓名\n",i+1);
		scanf("%9s",name[i]);
		printf("第%d个学生成绩\n",i+1);
		scanf("%d",&grade[i]);
		order[i]=i;
	}
	for(i=0;i<10;i++){
		for(j=0;j<9-i;j++)
			if(grade[order[j]]<grade[order[j+1]]){
				m=order[j];
				order[j]=order[j+1];
				order[j+1]=m;
			}
	}
	for (i=0;i<10;i++)
	{
		printf("%s 	%d\n",name[order[i]],grade[order[i]]);
	}
}