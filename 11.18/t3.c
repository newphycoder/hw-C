#include <stdio.h>

void order(int *num,int i);


int main(){
	int n;
	int ser[100];
	printf("the number of the series\n");
	scanf("%d",&n);
	printf("input a series of number\n");
	for(int i=0;i<n;i++)
	{
		printf("the %dth numeber:\n",i+1);
		scanf("%d",&ser[i]);
	}

	order(ser,n);

	for(int i=0;i<n;i++)
	{
		printf("%6d",ser[i]);
	}

	printf("\n");
	return (0);
}

void order(int *num,int n){
	int m;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(num[i]>num[j])
			{
				m=num[i];
				num[i]=num[j];
				num[j]=m;
			}
		}
	}
}
