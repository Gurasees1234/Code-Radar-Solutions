#include <stdio.h>
int main() {
    char ch;
    ch1=toupper(ch)
    if (isalpha(ch)){        
        ch=tolower(ch);
        if(ch=='a'||ch=='e'||ch=='i'||ch='o'||ch='u'){printf("Vowel");}}
        else{printf("Consonant");}}
    else if (isdigit(ch)){printf("Digit")}
    else{printf("Special Character");}
    return 0;
}