#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i;
	printf("nhap so phan tu: ");
	scanf("%d",&n);
	int a[n];
	int *b=(int *)malloc(n * sizeof(int));
	for (i=0;i<n;i++)
	{
		printf("a[%d]: ",i);
		scanf("%d",b+i);
		a[i]=*(b+i);
	}
	printf("gia tri khai bao tinh: ");
	for (i=0;i<n;i++)
{
	printf("%d ", a[i]);
	}	
	printf("\ngia tri duoc cap phat dong: ");
	for (i=0;i<n;i++)
{
	printf("%d ", *(b+i));
	}	
	free(b);
}
