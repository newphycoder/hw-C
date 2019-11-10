#include <stdio.h>

int main(){
	int i,n,m,a[20];
	printf("数组元素个数\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("第%d位元素：\n",i+1);
		scanf("%d",&a[i]);
	}
	printf("删去第几位元素：\n");
	scanf("%d",&m);
	for(i=m-1;i<n-1;i++){
		a[i]=a[i+1];
	}
	printf("最终数组：\n");
	for(i=0;i<n-1;i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
	return (0);
}