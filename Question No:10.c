// Anurag Yadav
//Roll no.2303510100024
// 10. Write a C program that calculates the volume of a sphere. (Formula : V = 4/3*π*r*r*r)
//         Expected Output :
//         Input the radius of the sphere : 2.56
//         The volume of sphere is 70.276237.

#include <stdio.h>

int main()
{
   float a;
   printf("Enter the radius of the sphere: ");
   scanf("%f",&a);
   float v=1.333*3.1428*a*a*a;
   
   printf("the volume of the sphere is %f",v);
    return 0;
}
