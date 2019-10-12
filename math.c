#include<stdio.h>
main()
{
  //f=0 i.e division = 0 shows zero division error.
float a,b,f=0,s=0,d=0,p=0;
printf ("enter the two numbers \n");
scanf ("%f %f",&a,&b);
s=a+b;
d=a-b;
p=a*b;
if(b!=0)
  f=a/b;
else
   f=0;
printf ("sum is %f , Result after subtraction is %f ,Product is %f and the fraction is %f my friend \n",s,d,p,f);
return 0;
}

