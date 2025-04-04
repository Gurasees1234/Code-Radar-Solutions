#include <stdio.h>
#include <string.h>
int main(){
    char n[100];
    int count=0;
    scanf("%s",&n);
    for (int i=0;i< strlen(n);i++){
        if (n[i]=='a','e','i','o','u','A','E','I','O','U'){
            count+=1;
        }
    }
    printf("%d",count);
}