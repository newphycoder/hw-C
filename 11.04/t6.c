#include <stdio.h>
#include <string.h>

int* sta(char str[]){
	int res[4]={0};
	int i;
	int len=strlen(str);
	for( i=0 ; i<len ; i++ )
	{
		if(str[i]<='z'&&str[i]>='a'
			||str[i]<='Z'&&str[i]>='A')
			res[0]++;
		else if(str[i]<='9'&&str[i]>='0')
			res[1]++; 
		else if(str[i]==' ')
			res[2]++;
		else
			res[3]++;
	}
	return (res);
}

int main(){
	char str[100];
	int i=0;
	int* res;
	printf("输入字符串(最多99个,换行后加):\n");
	for( i=0 ; i<100 ; i++ )
	{
		str[i]=getchar();
		if(str[i]==EOF)
		{
			str[i]='\0';
			break;
		}
		if(i==98)
		{
			str[99]='\0';
		}
	}
	res=sta(str);
	printf("%s中字母:%d,数字:%d,空格:%d,其他字符(包括最后的回车):%d\n",
		str,res[0],res[1],res[2],res[3]);
	return (0);
}