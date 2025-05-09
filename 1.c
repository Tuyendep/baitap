#include<stdio.h>
int main(){
	printf("Dung chi so mang");
	int arr[4]={7,8,9,10};
	int i;
	for (i = 0; i <4; i++){
			printf("\n arr[%d]=%d",i,arr[i]);
	}
	printf("\n su dung con tro");
	int *p=arr;
    for (i = 0; i <4; i++){
	printf("\n %d",*(p+i));
}
return 0;
}
