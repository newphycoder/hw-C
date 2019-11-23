#include <stdio.h>

int stat(char *str);

int main(){
	int i=0;
	char str[100];
	while((str[i]=getchar())!=EOF)
	{
		i++;
		if(i==100)
		{
			break;
		}
	}
	str[i]='\0';

	stat(str);
	return (0);
}

int stat(char *str){
	int i=0;
	int number=0;
	int space=0;
	int alpha=0;
	int ALPHA=0;
	int other=0;
	while(str[i])
	{
		if(str[i]>='0'&&str[i]<='9')
		{
			number++;
		}
		else if(str[i]==' ')
		{
			space++;
		}
		else if(str[i]>='a'&&str[i]<='z')
		{
			alpha++;
		}
		else if(str[i]>='A'&&str[i]<='Z')
		{
			ALPHA++;
		}
		else
		{
			other++;
		}
		i++;
	}
	printf("数字:%d;大写字母:%d;小写字母:%d;空格:%d;其他:%d\n",
		number,ALPHA,alpha,space,other);
	return (0);
}