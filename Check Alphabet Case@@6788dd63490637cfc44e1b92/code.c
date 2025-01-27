#include <stdio.h>
int main() {
    char num;
    scanf("%c",&num);
    if (num>=A && num<=Z){printf("Uppercase");}
    else if(num>=a && num<=z){printf("Lowercase");}
    else{printf("Not an alphabet");}
    return 0;
}