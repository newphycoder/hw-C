#include <stdio.h>

int print(int n);

int main(){
	int n;
	printf("魔方矩阵的阶数:\n");
	scanf("%d",&n);
	if(n%2)
	{
		print(n);
	}
	else
	{
		printf("n不为奇数\n");
	}
}

int print(int n){
	int mat[30][30];
	int i,j,p,q;
	p=n-1,q=n/2;
	for( i=0 ; i<n ; i++ )
	{
		for( j=1 ; j<=n ; j++ )
		{
			mat[n-1-p][q]=i*n+j;
			p++;q++;
			p%=n;q%=n;
		}
		p+=n-2,q+=n-1;
		p%=n,q%=n;
	}
	for( i=0 ; i<n ; i++ )
	{
		for( j=0 ; j<n ; j++ )
		{
			printf("%4d",mat[i][j]);
		}
		printf("\n");
	}
	return (0);
}