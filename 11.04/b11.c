#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
	char str[30];
	int i;
	int length;
	printf("输入一段字符串\n");
	for( i=0 ; i<30 ; i++ )
	{
		str[i]=getchar();
		if(str[i]==EOF)
		{
			str[i-1]='\0';
			break;
		}
		if(i==28)
		{
			str[29]='\0';
			break;
		}
	}

	length = strlen(str);
	bool a = true;
	if( !(str[0]=='_' || (str[0]>='a'&&str[0]<='z') 
		|| (str[0]>='A'&&str[0]<='Z')) )
	{
		a = false;
	}
	else
	{
		for( i=1 ; i<length ; i++ )
		{
			if( !(str[i]=='_' || (str[i]<='z'&&str[i]>='a')
				  || (str[i]>='A'&&str[i]<='Z') ||
				  (str[i]>='0'&&str[i]<='9') ) )
			{
				a = false;
				break;
			}
		}
	}
	if(a)
	{
		printf("此字符串构成标识符\n");
	}
	else
	{
		printf("此字符串不构成标识符\n");
	}
	return (0);
}