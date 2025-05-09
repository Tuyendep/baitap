#include <stdio.h>
int main() {
    int n, i;
   char a[1000];
	printf("nhap chuoi:");
	scanf("%[^\n]",a);  
    printf("chuoi ky tu da sao chep: ");
    char *p=a;
    while (*p!='\0') {
    printf("%c", *p);
    p++;
}
}
