#include <stdio.h>

int print(int n);

int main(){
	int num;
	printf("input a number:\n");
	scanf("%d",&num);
	print(num);
	printf("\n");
	return (0);
}

int print(int n){
	int i;
	char c;
	i=n%10;
	n=n/10;
	if(n)
	{
		print(n);
	}
	c='0'+i;
	printf("%c",c);
	return (0);
}