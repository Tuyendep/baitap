#include<stdio.h>
int main(){
	int arr[4]={7,8,9,10};
	int *p=arr;
    printf("Duyet mang bang con tro \n");
    int i;
	for (i = 0; i <4; i++){
		printf("phan tu %d:%d\n",i,*p);
		*p++;
} 
return 0;
	}
	
