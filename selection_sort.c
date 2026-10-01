#include <stdio.h>
int main() {
    int arr[]={2,6,5,9,7,8,10};
    int n=7;
    for (int i=0;i<n-1;i++) {
        int minIdx=i;
        for(int j=i+1;j<n;j++) {
            if(arr[j]<arr[minIdx]) {
                minIdx=j;
            }
        }
    int temp=arr[i];
    arr[i]=arr[minIdx];
    arr[minIdx]=temp;
    }
    printf("sorted\n");
    for(int i=0;i<n;i++) {
        printf("%d\t",arr[i]);
    }
    return 0;
}