#include <stdio.h>

int main(){
	int n;
	int *a;
	printf("the number of people:\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		*(a+i)=1;
	}

	for (int i = 0; i < n; i++)
	{
		static int t=0;
		static int m=0;
		if(*(a+i))
		{	
			t++;
			if(t==3)
			{
				t=0;
				*(a+i)=0;
				m++;
			}
		}
		if(i==n-1)
		{
			i=-1;
		}
		if(m==n-1)
		{
			break;
		}
	}

	int result;
	for(int i=0;i<n;i++)
	{
		if(*(a+i))
		{
			result=i;
			break;
		}
	}

	printf("the latest people is %d\n",result+1);

	return (0);
}