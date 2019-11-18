#include <stdio.h>

int udf_strlen(char *str);

int main(){
	int i=0;
	char str[100];
	printf("input a string:\n");
	while((str[i]=getchar())!=EOF)
	{
		i++;
		if(i>99)
		{
			str[i]='\0';
			printf("will be out of range\n");
			break;
		}
	}
	if(str[i]==EOF)
		str[i-1]='\0';

	printf("the length of the string:%d\n",udf_strlen(str));
	return (0);
}

int udf_strlen(char *str){
	int n=0;
	while(str[n]!='\0')
		n++;
	return (n);
}