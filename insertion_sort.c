#include <stdio.h>
int main() {
    int arr[]={2,6,5,9,8};
    int n=7,key;

    for(int i=1;i<n;i++) {
        int key=arr[i]; //key=6,key=5
        int j=i-1;  //j=0,j=1

        while(j>=0 && arr[j]>key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    printf("sorted");
    for(int i=0;i<n;i++) {
        printf("%d\t",arr[i]);
        }
        return 0;
    }