#include<stdio.h>
#include<string.h>
void RevStr(char s1[]){
    char s2[20];
    int len,i;
    len = strlen(s1);
    for(i=0;i<len;i++){
        s2[i] = s1[len-i-1];
    }
    s2[i]='\0';
    printf("Reverse String:%s",s2);
}
void main(){
    char s1[20];
    printf("Enter a string:");
    gets(s1);
    RevStr(s1);
}
