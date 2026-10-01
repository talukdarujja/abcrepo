// #include <stdio.h>

// int main() {
//     char operator;   //operator is a variable
//     float a,b;
//     printf("enter operator(+,-,/,*):");
//     scanf("%c", &operator);
//     printf("enter value of a and b");
//     scanf("%f %f", &a, &b);

//     switch(operator) {
//         case '+':
//         printf("sun is:%f",a+b);
//         break;

//         case '-':
//         printf("diff is:%f",a-b);
//         break;

//         case '*':
//         printf("product is:%f",a*b);
//         break;

//         case '/':
//         if(b!=0) {
//         printf("quotient is:%f",a/b);
//         } else {
//             printf("division not applicable");
//         }
//         break;

//         default:
//         printf("abc");

//     }
//     return 0;
// }

#include <stdio.h>
int main() {
    int day;
    printf("enter day:");
    scanf("%d", &day);

    switch(day) {
        case 1:
        printf("monday");
        break;

        case 2:
        printf("tuesday");
        break;

        case 3:
        printf("wednesday");
        break;

        case 4:
        printf("thursday");
        break;

        case 5:
        printf("friday");
        break;
        case 6:
        printf("saturday");
        break;
        case 7:
        printf("sunday");
        break;

        default:
        printf("no day");

    }
    return 0;
}