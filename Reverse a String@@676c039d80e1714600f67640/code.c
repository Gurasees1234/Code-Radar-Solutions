#include <stdio.h>
int main(){
    char a[20];
    scanf("%s",a);
    for (int i=0;i<sizeof(a);i++){
        printf("%c",a);
    }
}