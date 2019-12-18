#include<stdio.h>
int main(){
	int a;
	float s=0;
	printf("nhap a= \n");
	scanf("%d",&a);
	for (int i=1;i<=a;i++){
		s+=(float)1/i; 
	}
	printf("tong cac so s= %f",s);
	return 0; 
} 
