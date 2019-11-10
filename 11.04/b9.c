#include <stdio.h>
#include <string.h>

int strswap(char a[],char c[]){
	int i,len;
	len = strlen(a);
	for( i=0 ; i<len ; i++ )
	{
		c[len-1-i]=a[i];
	}
	c[len]='\0';
	return (0);
}
	

int main(){
	int i;
	char str[30];
	char res[30];
	printf("input the string:\n");
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
	strswap(str,res);
	printf("the result:\n");
	printf("%s\n",res);
	return (0);
}