#include <stdio.h>

int str_cat(char a[],char b[],char c[]);

int main(){
	char str1[100];
	char str2[100];
	char result[200];
	int i;

	printf("单个字符串最多100个,超过直接截断\n");

	printf("请输入第一串字符\n");
	gets(str1);

	printf("请输入第二串字符\n");
	gets(str2);

	str_cat(str1,str2,result);
	printf("合成结果:\n");
	printf("%s\n",result);
	return (0);
}

int str_cat(char a[],char b[],char c[]){
	int i=0,j=0;
	while(a[i]!='\0'&&i<100)
	{
		c[i]=a[i];
		i++;
	}

	while(b[j]!='\0'&&j<100)
	{
		c[i]=b[j];
		i++,j++;
	}
	c[i]='\0';
	return (0);
}