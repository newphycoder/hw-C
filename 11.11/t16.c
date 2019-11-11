#include <stdio.h>
#include <math.h>

int trans(double num,int n,char num_n[],int i);
int l;

int main(){
	double num;
	int n,i=-1;
	char num_n[30];
	printf("输入一个十进制数:\n");
	scanf("%lf",&num);
	printf("需要转换的进制数\n");
	scanf("%d",&n);
	trans(num,n,num_n,i);
	printf("%d进制下为:%s\n",n,num_n);
	return 0;
}

int trans(double num,int n,char num_n[],int i){
	int t;
	double m=num-floor(num);
	t=((int)floor(num))%n;
	num=(int)(num/n);
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
		num_n[l-i]='a'+t-10;
	}
	else
	{
		num_n[l-i]='0'+t;
	}

	num_n[l+1]='.';
	for(i=0;i<30;i++)
	{
		t=m*n/1;
		if(t>9)
		{
			num_n[l+2+i]='a'+t-10;
		}
		else
		{
			num_n[l+2+i]='0'+t;
		}
		m=m*n-floor(m*n);
		if(m==0){
			break;
		}
		if(i==19)
		{
			break;
		}
	}
}