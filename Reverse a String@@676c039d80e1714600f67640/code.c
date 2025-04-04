#include <stdio.h>
#include <string.h>
int main(){
    char a[20];
    scanf("%s",a);
    for (int i>strlen(a);i>0;i++){
        printf("%c",a[i]);
    }
}