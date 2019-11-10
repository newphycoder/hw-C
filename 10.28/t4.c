#include <stdio.h>

int main(){
	int i,m,a[20],b[10];
	m=1;

	printf("输入有序数组\n");
	printf("第1个元素\n");
	scanf("%d",&a[0]);
	for(i=1;i<10;i++){
		printf("第%d个元素\n",i+1);
		scanf("%d",&a[i]);
		if(a[i-1]>a[i]){
			m=0;
			break;
		}
	}

	if(m){
		printf("输入准备插入的数组\n");
		for(i=0;i<10;i++){
			printf("第%d个元素\n",i+1);
			scanf("%d",&b[i]);
			int j,t;
			for(j=0;j<10+i;j++){
				if(a[j]>b[i])
					break;
			}
			for(t=10+i;t>j;t--){
				a[t]=a[t-1];
			}
			a[j]=b[i];
		}
		printf("最终数组为:\n");
		for(i=0;i<20;i++){
			printf("%d\t",a[i]);
			if(i%5==4)
				printf("\n");
		}
	}else{
		printf("不是有序数组\n");
	}
}