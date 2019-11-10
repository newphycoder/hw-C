#include <stdio.h>

int operate(int a[],int i){
	int t;
	a[0+30*(i+1)]=a[0+30*i];
	a[i+1+30*(i+1)]=a[i+30*i];
	for( t=0 ; t<i ; t++ )
	{
		a[t+1+30*(i+1)]=a[t+30*i]+a[t+1+30*i];	
	}
	return (0);
}

int main(){
	int n;
	int i,j;
	printf("打印行数:\n");
	scanf("%d",&n);

	int Yang[30][30];
	Yang[0][0]=1;
	for( i=0 ; i<n-1 ; i++ )
	{
		operate(Yang,i);
	}
	for( i=0 ; i<n ; i++ ){
		for( j=0 ; j<n-i ; j++ )
		{
			printf("   ");
		}
		for( j=0 ; j<i+1 ; j++ )
		{
			printf("%6d",Yang[i][j]);
		}
		for( j=0 ; j<n-i ; j++ )
		{
			printf("   ");
		}
		printf("\n");
	}
	return (0);
}