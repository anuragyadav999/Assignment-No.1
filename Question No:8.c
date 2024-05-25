//Anurag Yadav
//Roll no.2303510100024
// 8. WAP in C that takes minutes as input, and display the total number of hours and minutes in (HH : MM) format.
//          Expected Output:
//          Input total minute: 546
//          09 : 06 

#include <stdio.h>

int main() {
    int minutes , hour ;

    printf("Enter the total minutes ");
    scanf("%d",&minutes);

    hour = minutes /60;
    minutes = minutes %60;

    printf("The time is %d:%d",hour,minutes);

}
