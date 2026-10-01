#define _USE_MATH_DEFINES
#include <stdio.h>

#include <math.h>
int main() {
int power;
int sqrtt;
int cuberoot;
float sine;
power=pow(2,3);
sqrtt=sqrt(4);
cuberoot=cbrt(27);
sine=sin(M_PI/4);
printf("%d\n",power);
printf("%d\n",sqrtt);
printf("%d\n",cuberoot);
printf("%f\n",sine);
printf("%f\n",tan(M_PI/4));  //angle always in radian, not in degree
printf("%f\n",atan(1));
printf("%f\n",log10(10));
printf("%f\n",exp(10));
printf("%f\n",hypot(3,4));
printf("%d\n",fmod(10,2));
printf("%f\n",fmin(10,6));   //fmin and fmax works on float value
printf("%f\n",fmax(10,100));





return 0;
}