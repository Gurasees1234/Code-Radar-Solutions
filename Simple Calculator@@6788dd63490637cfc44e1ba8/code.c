#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    char c; 
    getchar();   
    scanf("%c",&c);
    if (c=='+'){printf("%d",a+b);}
    else if(c=='-'){printf("%d",a-b);}
    else if(c=='*'){printf("%d",a*b);}
    else if(c=='/'){printf("%d",a/b);}
    else{printf("Error");}
    return 0;
}