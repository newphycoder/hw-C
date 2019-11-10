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

	int number,igrade;
	for(i=0;i<10;i++){
		number=order[i];
		igrade=grade[order[i]];
		for(j=i+1;j<10;j++){
			if(grade[order[j]]>igrade){
				m=j;
				number=order[j];
				igrade=grade[order[j]];
			}
		}
		order[m]=order[i];
		order[i]=number;
	}
	for (i=0;i<10;i++){
		printf("%s 	%d\n",name[order[i]],grade[order[i]]);
	}
}