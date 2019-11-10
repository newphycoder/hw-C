#include <stdio.h>

int main (){
	int i,n,m,a[21];
	printf("数组元素个数:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("第%d个元素：\n",i+1);
		scanf("%d",&a[i]);
	}
	printf("插入第几位元素后：\n");
	scanf("%d",&m);
	for(i=n;i>m;i--){
		a[i]=a[i-1];
	}
	printf("插入的元素为：\n");
	scanf("%d",&a[m]);
	printf("最终的数组：\n");
	for(i=0;i<n+1;i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
	return (0);
}