#include <stdio.h>
#include <math.h>

double integer(double (*func)(double),double inf,double sup);

int main(){
	printf("Integer[sin[x],{x,0,1}]=%lf\n",integer(sin,0,1));
	printf("Integer[cos[x],{x,-1,1}]=%lf\n",integer(cos,-1,1));
	printf("Integer[cos[x],{x,-1,1}]=%lf\n",integer(exp,-1,1));
	return (0);
}

double integer(double (*func)(double),double inf,double sup){
	double result=0;
	int num=10000;
	double h=(sup-inf)/num;
	for (int i = 0; i < num ; ++i)
	{
		result += h * ((*func)(inf+(i+0.5)*h));
	}
	return (result);
}