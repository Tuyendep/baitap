#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,i,tam;
	printf("nhap n: ");
	scanf("%d", &n);
 int *a = (int*)malloc(n * sizeof(int));
	for(i=0;i<n;i++)
	{	
	printf("a[%d]: ",i);
	scanf("%d",a+i);
}
int *st=a;
int *e=a+n-1;
while (st<e)
{
	tam=*st;
	*st=*e;
	*e=tam;
	st++;
	e--;
}
printf("sau khi dao: ");
for(i=0;i<n;i++)
{
	printf("%d ",*(a+i));
}
free(a);
return 0;
}

