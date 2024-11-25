#include<stdio.h>
int main(){
	int a,b;
	printf("Nhap vao so a:");
	scanf("%d", &a);
	printf("Nhap vao so b:");
	scanf("%d", &b);
	int min = a<b?a:b;
	for(int i = min; i>=1; i--){
		if ((a%i==0)&&(b%i == 0)){
			printf("Uoc chung lon nhat la: %d\n", i);
			break;
		}
	}
	return 0;
}
