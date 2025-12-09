#include<stdio.h>

int main(){
	float f,s,t,temp;
	
	printf("input price: ");
	scanf("%f",&f);
	temp=f-(f*5/100);
	printf("%f\n",temp*1.07);
	scanf("%f",&s);
	temp=(f+s)-((f+s)*15/100);
	printf("%f\n",temp*1.07);
	scanf("%f",&t);
	temp=(f+s+t)-((f+s+t)*30/100);
	printf("%f",temp*1.07);
}
