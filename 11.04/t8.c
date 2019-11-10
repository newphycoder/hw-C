#include <stdio.h>

void prime(int integ[]){
	int i,j;
	integ[0]=1,integ[1]=1;
	for( i=2 ; i<40 ; i++ )
	{
		if(!integ[i])
		{
			for( j=2 ; j*i<1000 ; j++ )
			{
				integ[i*j]=1;
			}
		}
	}
}

int main(){
	int integ[1000]={0};
	int i,n,t;
	prime(integ);
	for(i=0;i<1000;i++)
		if(!integ[i])
			printf("%d\n",i);
	while(1)
	{
		printf("请输入一个偶数(control+C退出)\n");
		scanf("%d",&n);
		if(n>1000)
		{
			printf("out of range\n");
		}
		else if(n%2)
		{
			printf("不为偶数\n");
		}
		else
		{
			for( i=2 ; i<=n/2 ; i++ )
			{	
				if(!integ[i])
				{
					if(!integ[n-i])
					{
						printf("%d=%d+%d\n",n,i,n-i);					
					}
				}
			}
		}
	}
}