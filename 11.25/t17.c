#include <stdio.h>
#include <stdlib.h>

int sort(int* a,int size);
int exchange(int* order,int* a,int len);

int main(){
	int i,j;
	int n;
	printf("input the size of the matrix:\n");
	scanf("%d",&n);

	int (*(matr))[n];
	matr = malloc ( n * sizeof( int[n] ) );

	printf("input the matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&matr[i][j]);
		}
	}

	sort(matr,n);

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%-4d",matr[i][j]);
		}
		printf("\n");
		printf("\n");
	}
}

int sort(int* a,int n){
	int* order;
	order = malloc( n*n * int );
	for (int i = 0; i < n*n-1 ; ++i)
	{
		order[i]=i;
	}
	for (int i = 0; i < n*n-1; ++i)
	{
		for(int j =i; j< n*n-1; ++j)
		{
			if(a[order[j]]>a[order[j+1]])
			{
				t=order[j];
				order[j]=order[j+1];
				order[j+1]=t;
			}
		}
	}

	for(int i =0; i< n*n-1; ++i)
	{
		if(order[i]=0)
		{
			m=i;
			break;
		}
	}
	_a=a[order[0]];
	t=order[0];
	a[order[0]]=a[0];
	order[0]=0;
	a[0]=_a;
	order[m]=t;

	for(int i =0; i< n*n-1; ++i)
	{
		if(order[i]=n-1)
		{
			m=i;
			break;
		}
	}
	_a=a[order[1]];
	t=order[1];
	a[order[1]]=a[n-1];
	order[1]=n-1;
	a[n-1]=_a;
	order[m]=t;

	for(int i =0; i< n*n-1; ++i)
	{
		if(order[i]=n*(n-1))
		{
			m=i;
			break;
		}
	}
	_a=a[order[2]];
	t=order[2];
	a[order[2]]=a[n*(n-1)];
	order[2]=n*(n-1);
	a[n*(n-1)]=_a;
	order[m]=t;

	for(int i =0; i< n*n-1; ++i)
	{
		if(order[i]=n*n-1)
		{
			m=i;
			break;
		}
	}
	_a=a[order[3]];
	t=order[3];
	a[order[3]]=a[n*n-1];
	order[3]=n*n-1;
	a[n*n-1]=_a;
	order[m]=t;

}

int exchange(int* order,int* a,int len,int num){
	int t;
	int m;
	int _a;
	for(int i =0; i< n*n-1; ++i)
	{
		if(order[i]=len)
		{
			m=i;
			break;
		}
	}
	_a=a[order[num]];
	t=order[num];
	a[order[num]]=a[len];
	order[num]=len;
	a[num]=_a;
	order[m]=t;

}