#include <stdio.h>

int main(){

	int a[2][15]={{	1,	2,	3,	4,	5,
					6,	7,	8,	9,	10,
					11,	12,	13,	14,	15}
					,{	
						13,54,34,76,47,48,37,
						12,35,75,46,45,73,90,
						17
					}};
	int find;
	int p,q;
	int r,s;
	for(p=0;p<15;p++){
		for(q=0;q<14-p;q++){
			if(a[1][q]>a[1][q+1]){
				r=a[0][q];
				a[0][q]=a[0][q+1];
				a[0][q+1]=r;
				s=a[1][q];
				a[1][q]=a[1][q+1];
				a[1][q+1]=s;
			}
		}
	}
	printf("你需要查找的整数\n");
	scanf("%d",&find);
	int l,h,m;
	int i=-1;
	l=0;h=14;
	while(l!=h){
		m=(l+h)/2;
		if(a[1][m]<find){
			l=m+1;
		}else if(a[1][m]>find)
			h=m;
		else{
			i=m;
			break;
		}
	}
	if(l==h)
		i=l;
	if(a[1][i]!=find){
		i=-1;
	}
	if(i+1){
		printf("该数是第%d个元素\n",a[0][i]);
	}else{
		printf("无此数\n");
	}
}