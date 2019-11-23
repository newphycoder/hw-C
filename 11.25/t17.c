#include <stdio.h>
#include <stdlib.h>

int sort(int* a,int size);

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
	int i;
	int Nmax,Nfirst,Nsecond,Nthird,Nfouth;
	int max,first,second,third,fouth;
	Nmax=0,Nfirst=0,Nsecond=1,Nthird=2,Nfouth=3;
	for(i=1;i<n*n;i++)
	{
		if(a[i]<a[Nfirst])
		{
			Nfouth=Nthird;
			Nthird=Nsecond;
			Nsecond=Nfirst;
			Nfirst=i;
		}
		else if(a[i]<a[Nsecond])
		{
			Nfouth=Nthird;
			Nthird=Nsecond;
			Nsecond=i;
		}
		else if(a[i]<a[Nthird])
		{
			Nfouth=Nthird;
			Nthird=i;
		}
		else if(a[i]<a[Nfouth])
		{
			Nfouth=i;
		}
		if(a[i]>a[Nmax])
		{
			Nmax=i;
		}
	}
	first=a[Nfirst];
	second=a[Nsecond];
	third=a[Nthird];
	fouth=a[Nfouth];
	max=a[Nmax];
	a[Nfirst]=a[0];
	a[Nsecond]=a[n-1];
	a[Nthird]=a[n*(n-1)];
	a[Nfouth]=a[n*n-1];
	a[Nmax]=a[n*(n/2)+n/2];
	a[0]=first;
	a[n-1]=second;
	a[n*(n-1)]=third;
	a[n*n-1]=fouth;
	a[n*(n/2)+n/2]=max;
}