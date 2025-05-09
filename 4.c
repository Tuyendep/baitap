#include <stdio.h>
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
	printf("kich thuoc cua mang: %lu",sizeof(a));
	printf("\nkich thuoc cua con tro: %lu",sizeof(b));
}
