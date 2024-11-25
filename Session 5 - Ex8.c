#include<stdio.h>
int main(){
	int a,b;
	printf("Nhap vao so a:");
	scanf("%d", &a);
	printf("Nhap vao so b:");
	scanf("%d", &b);
	int max = a<b?a:b;
	for(int i = max; i>=1; i++){
		if ((i%a==0)&&(i%b == 0)){
			printf("Boi chung nho nhat la: %d\n", i);
			break;
		}
	}
	return 0;
}
