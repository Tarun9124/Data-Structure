#include<stdio.h>
void UprToLwr(char s[]){
    int i,len;
    for(len=0;s[len]!='\0';len++);
    for(i=0;i<len;i++){
        if(s[i]>='A' && s[i]<='Z')
            s[i] = s[i]+32;
    }
    printf("Upper To Lower String:%s",s);
}
void main(){
    char str[20];
    printf("Enter a String:");
    scanf("%s",str);
    UprToLwr(str);
}
