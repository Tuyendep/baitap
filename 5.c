#include <stdio.h>
int main() {
    int arr[2][3] = {{7, 8, 9}, {4, 5, 6}};
    int (*p)[3] = arr;
    int i;
    for (i = 0; i < 2; i++) {
    	int j;
        for (j = 0; j < 3; j++) {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }
    int *ptr = (int *)arr;
    printf("\nduyet bang con tro thuan:\n");
    for (i = 0; i < 6; i++) {
        printf("%d ", *(ptr + i));
    }
    return 0;
}
