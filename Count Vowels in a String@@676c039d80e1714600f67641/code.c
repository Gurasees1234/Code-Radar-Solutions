#include <stdio.h>
#include <string.h>
int main(){
    char n[];
    int count=0;
    scanf("%s",&n);
    for (i=0;i< lenstr(n);i++){
        if (n[i]=='a','e','i','o','u',){
            count+=1;
        }
    }
    printf("%d",count);
}