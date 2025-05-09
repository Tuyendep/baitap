#include <stdio.h>
#include <string.h>
int main() {
    char *arr[] = {"na", "tao", "cam", "thom"};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i;
     int j;
    for(i=0; i<n-1; i++)
        for( j=i+1; j<n; j++)
            if(strcmp(arr[i], arr[j]) >0){
                char *tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
    printf("mang da sap xep:\n");
    for(i=0; i<n; i++){
        printf("%s\n", arr[i]);
    }
    return 0;
}
