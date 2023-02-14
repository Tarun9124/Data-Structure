#include<stdio.h>
void LwrToUpr(char s[]){
    int i,len;
    for(len=0;s[len]!='\0';len++);
    for(i=0;i<len;i++){
        if(s[i]>='a' && s[i]<='z')
            s[i] = s[i]-32;
    }
    printf("Lower to Upper String:%s",s);
}
void main(){
    char str[20];
    printf("Enter a String:");
    scanf("%s",str);
    LwrToUpr(str);
}
