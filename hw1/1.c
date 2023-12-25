#include <stdio.h>

int main() {
   double u,t,a,v,s;
   printf("please input initial velocity, acceleration, and the time respectively\n");
   scanf("%lf%lf%lf",&u,&a,&t);
   v=u+a*t;
   s=u*t+a*t*t/2;
   printf("final velocity is %f\n",v);
   printf("distance is %f\n",s);
   return 0;
}