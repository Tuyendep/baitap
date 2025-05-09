#include<stdio.h>
int sum(int n){
	int sum=0;
	int i;
	for(i=0;i<=n;i++)
		sum=sum+i;
		return sum;
		}
		int main(){
			int n;
			printf("nhap so: ");
			scanf("%d",&n);
			int kq=sum(n);
			printf("%d", kq);
			return 0;
		}
