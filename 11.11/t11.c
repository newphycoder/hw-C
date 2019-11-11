#include <stdio.h>

#define swap(a,b) (a=a+b,b=a-b,a=a-b)

int main(){
	int x,y;
	printf("input two number:\n");
	scanf("%d%d",&x,&y);
	swap(x,y);
	printf("x=%d,y=%d\n",x,y);
	return (0);
}