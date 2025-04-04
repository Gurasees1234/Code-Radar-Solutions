#include <stdio.h>
#include <string.h>
int main(){
    char n[100];
    scanf("%s",n);
    int count=0;
    for (int i=0;i< strlen(n);i++){
        if (n[i]=='a'||'e'||'i'||'o'||'u'||'A'||'E'||'I'||'O'||'U'){
            count+=1;
        }
    }
    printf("%d",count);
}