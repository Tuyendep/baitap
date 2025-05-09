#include<stdio.h>
int giaithua(int n){
	int giaithua=1;
	int i;
	for(i=1;i<=n;i++)
		giaithua*=i;
		return giaithua;
	}
	int main(){
		int n;
		printf("nhap so:");
		scanf("%d", &n);
		int kq= giaithua(n);
		printf("%d", kq);
		return 0;
	}
