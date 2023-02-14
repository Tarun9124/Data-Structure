#include<stdio.h>
void StrCpy(char s[]){
    char sc[20],len,i;
    for(len=0;s[len]!='\0';len++);
    for(i=0;i<len;i++){
        sc[i] = s[i];
    }
    sc[i] = '\0';
    printf("Copied String:%s",sc);
}
void main(){
    char str[20];
    printf("Enter String:");
    scanf("%s",str);
    StrCpy(str);
}
