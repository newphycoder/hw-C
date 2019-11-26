#include <stdio.h>
#include <stdlib.h>

double inner(int length,float *left_arrow,float *right_arrow);

int main(){
	int length;
	printf("input the dimesion of arrow:\n");
	scanf("%d",&length);
	float* left_arrow = malloc( length * sizeof(float) );
	float* right_arrow = malloc( length * sizeof(float) );

	int i;
	for(i=0;i<length;i++)
	{
		printf("input the %dth component of left arrow:\n",i+1);
		scanf("%f",(left_arrow+i));
	}
	for(i=0;i<length;i++)
	{
		printf("input the %dth component of right arrow:\n",i+1);
		scanf("%f",(right_arrow+i));
	}

	inner(length,left_arrow,right_arrow);

	free(left_arrow);
	free(right_arrow);
	return (0);
}

double inner(int length,float *left_arrow,float *right_arrow){
	float inner_product=0;
	for(int i=0 ; i<length ; i++ )
	{
		inner_product += (* ( left_arrow + i )) 
						* (* ( right_arrow +i )) ;
	}
	printf("the inner product:%f\n",inner_product);
	return (inner_product);
}