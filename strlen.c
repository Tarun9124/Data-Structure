#include<stdio.h>
int StrLen(char []);
void main(){
    char str[20];
    printf("Enter String:");
    gets(str);
    printf("String Length = %d",StrLen(str));
}
int StrLen(char s[]){
    int len;
    for(len=0;s[len]!='\0';len++);
    return len;

}
