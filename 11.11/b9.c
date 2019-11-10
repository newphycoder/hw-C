#include <stdio.h>

int str_cat(char a[],char b[],char c[]);

int main(){
	char str1[100];
	char str2[100];
	char result[200];
	int i;

	printf("单个字符串最多100个,超过直接截断\n");
	printf("请输入第一串字符\n");

	for(i=0;i<100;i++)
	{
		str1[i]=getchar();
		if(str1[i]==EOF)
		{
			break;
		}
	}

	fflush(stdin);

	printf("请输入第二串字符\n");
	for(i=0;i<100;i++)
	{
		str2[i]=getchar();
		if(str2[i]==EOF)
		{
			break;
		}
	}

	str_cat(str1,str2,result);
	printf("合成结果:%s\n",result);	
	return (0);
}

int str_cat(char a[],char b[],char c[]){
	int i=0,j=0;
	while(a[i+1]!=EOF)
	{
		c[i]=a[i];
		i++;
	}

	while(b[j+1]!=EOF)
	{
		c[i]=b[j];
		i++,j++;
	}

	c[i]='\0';
	return (0);
}