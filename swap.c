// #include <stdio.h>
// int main() {
//     //swaping without using third variable
//     int a=5;
//     int b=10;
//     int c=15;

//     c=a+b; //c=15  or a=a+b+c
//     b=c-a; //b=10     b=a-b-c....
//     a=c;  //a=15
//     c=b;  //c=10
//     b=a-c;  //b=5
    
//     printf("%d\n",a);
//     printf("%d\n",b);
//     printf("%d\n",c);
//     return 0;
// }
// #include <stdio.h>
// int main() {
//     int n=5;
//     int i=0;
//     do {
//         printf("%d",i);
//         i++;
//     }
//     while(i<=n);
//     return 0;
// }

    // int A[2][2];
    // int B[2][2];
    // int C[2][2]={0};

    // for(int i=0;i<2;i++) {
    //     for(int j=0;j<2;j++) {
    //         printf("enter the elements of A:");
    //         scanf("%d", &A[i][j]);
    //         }
    //     }
    // for(int i=0;i<2;i++) {
    //     for(int j=0;j<2;j++) {
    //         printf("enter the elements of B:");
    //         scanf("%d", &B[i][j]);
    //     }
    // }
    // for(int i=0;i<2;i++) {
    //     for(int j=0;j<2;j++) {
    //         for(int k=0;k<2;k++) {
    //             C[i][j]+=A[i][k]*B[k][j];
    //         }
    //     }
    // }
    // for(int i=0;i<2;i++) {
    //     for(int j=0;j<2;j++) {
    //         printf("%d\t",C[i][j]);
    //     } printf("\n");
    // }

#include <stdio.h>
int main() {
    int n=123;
    int original=n;
    int rev=0;
    int r=0;
    while(n>0) {
        r=n%10;
        rev=rev*10+r;
        n/=10;
    }
    printf("%d",rev);
    if(rev==original) {
        printf("pal");
    } else {
        printf("non pal");
    }
    return 0;
}
