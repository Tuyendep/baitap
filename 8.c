#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, i;
	int *a;
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	a = (int *)malloc(n * sizeof(int));
	for (i = 0; i < n; i++)
	{
		printf("a[%d]: ", i);
		scanf("%d", a + i);
	}
	int tong = 0, max = *a, min = *a;
	for (i = 0; i < n; i++)
	{
		tong += *(a + i);
		if (*(a + i) > max) max = *(a + i);
		if (*(a + i) < min) min = *(a + i);
	}
	printf("tong: %d\n", tong);
	printf("trung binh: %.2f\n", (float)tong / n);
	printf("max: %d\n", max);
	printf("min: %d\n", min);
	free(a);
	return 0;
}
