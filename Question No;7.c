// Anurag Yadav
// Roll no.2303510100024
// 7. Write a C program that converts kilometres per hour to miles per hour. (1 KM = 0.621371 M)
//          Expected Output:
//          Input kilometres per hour: 15
//          9.320568 miles per hour

#include <stdio.h>

int main() {
    float kmph ,mph;

    printf("Enter the speed in Kmph ");
    scanf("%f",&kmph);

    mph = kmph * 0.621371;

    printf("The speed in mph is %0.7f",mph);

}
