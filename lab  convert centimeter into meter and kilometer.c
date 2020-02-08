#include <stdio.h>
int main ()
{
float cm,meter,km;
printf("Enter the value of centimeter : ");
scanf("%f",&cm);
meter=cm/100.0;
km=cm/100000.0;

printf("length in meter=%.2f\n",meter);
printf("lenght in km =%.2f\n",km);

return 0;


}
