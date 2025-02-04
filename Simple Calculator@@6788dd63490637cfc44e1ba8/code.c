#include <stdio.h>
int main() {
    int a,b;
    char c;
    scanf("%d %d",&a,&b);
    getchar();
    scanf("%c",&c);
    if (c== '+'){printf("%d",a+b);}
    else if(c== '-'){printf("%d",a-b);}
    else if(c== '*'){printf("%d",a*b);}
    else if(c== '/'){printf("%d",a/b);}
    else{printf("Error");}
    return 0;
}