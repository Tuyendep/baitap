#include <stdio.h>
int SNT(int n) {
    if (n < 2) 
	return 0; 
    int i;
    for (i = 2;i<=n; i++) {
        if (n % i == 0) 
		return 0; 
        }
    return 1;
}
int main() {
    int n;
    printf("Nhap so: ");
    scanf("%d", &n);
    if (SNT(n))
        printf("%d la so nguyen to\n", n);
    else
        printf("%d khong phai la so nguyen to\n", n);
    return 0;
}

