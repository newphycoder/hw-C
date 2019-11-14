#include <stdio.h>

int strcmp(char str1[],char str2[]);

int main(){
	char *s1,*s2;
	printf("input the first string\n:");
	gets(s1);
	printf("input the second string\n");
	gets(s2);

	int result;
	result = strcmp(s1,s2);
	printf("the result is %d\n",result);
	return (0);
}

int strcmp(char *str1,char *str2){
	int t=0;
	while(*(str1+t)!=0||*(str2+t)!=0)
	{
		if(*(str1+t)!=*(str2+t))
			break;
		t++;
	}
	return(*(str1+t)-*(str2+t));
}