#include <stdio.h>
#include <string.h>
int main(){
    char a[20];
    scanf("%s",a);
    for (int i=0;i<  strlen(a);i++){
        printf("%c",a[i]);
    }
}