#include<stdio.h>
int main(){
	int i, k=2;
	printf("Nhap vao 1 so nguyen:");
	scanf("%d",&i);
	while(i!=k){
		printf("Doan sai roi! ");
		printf("Nhap vao 1 so nguyen:");
		scanf("%d",&i);
	}

	printf("Doan dung roi");
	return 0;
}
