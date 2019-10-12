#include <stdio.h>
main()
{
float r,p=0,c=0;
printf ("enter radius");
scanf ("%f",&r);
// p=perameter a=area pi=3.14
p=6.28*r;
c=3.14*r*r;
printf ("The perimeter is %f and the area is %f \n",p,c);
return 0;
}
