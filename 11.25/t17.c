#include <stdio.h>
#include <stdlib.h>

int sort(int* a,int size);
int exchange(int* order,int* a,int len,int num,int n);

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
	int t;
	int* order;
	order = malloc( n*n * sizeof(int) );
	for (int i = 0; i < n*n ; ++i)
	{
		order[i]=i;
	}
	for (int i = 0; i < n*n-1; ++i)
	{
		for(int j =0; j< n*n-1; ++j)
		{
			if(a[order[j]]>a[order[j+1]])
			{
				t=order[j];
				order[j]=order[j+1];
				order[j+1]=t;
			}
		}
	}
	exchange(order,a,0,0,n);
	exchange(order,a,n-1,1,n);
	exchange(order,a,n*(n-1),2,n);
	exchange(order,a,n*n-1,3,n);
	for (int i = 0; i < n*n; ++i)
	{
		printf("%d\n",a[order[i]]);
	}
	for (int i = 0; i < n*n; ++i)
	{
		printf("%d\n",order[i]);
	}
	exchange(order,a,n*(n/2)+n/2,n*n-1,n);
}

int exchange(int* order,int* a,int len,int num,int n){
	int t;
	int m;
	int _a;
	for(int i =0; i< n*n; ++i)
	{
		if(order[i]==len)
		{
			m=i;
			break;
		}
	}
	_a=a[order[num]];
	a[order[num]]=a[len];
	a[len]=_a;
	t=order[num];
	order[num]=len;
	order[m]=t;
	return (0);
}