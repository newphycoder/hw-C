#include <stdio.h>

int trans(int num,int n,char num_n[],int i);

int l;

int main(){
	int num,n;
	int i=-1;
	char num_n[20];
	printf("输入一个十进制数:\n");
	scanf("%d",&num);
	printf("需要转换的进制数\n");
	scanf("%d",&n);
	trans(num,n,num_n,i);
	num_n[l+1]='\0';
	printf("%d进制下为:%s\n",n,num_n);
	return 0;
}

int trans(int num,int n,char num_n[],int i){
	int t;
	t=num%n;
	num/=n;
	i++;
	if(num)
	{
		trans(num,n,num_n,i);
	}
	else{
		l=i;
	}
	if(t>9)
	{
		num_n[i]='a'+t-10;
	}
	else
	{
		num_n[i]='0'+t;
	}
	return (i);
}