#include<stdio.h>
#include<string.h>
void CompareStr(char [],char[]);
void main(){
    char s1[20],s2[20];
    printf("Enter first String:");
    gets(s1);
    printf("Enter second String:");
    gets(s2);
    CompareStr(s1,s2);
}
void CompareStr(char s1[],char s2[]){
    int len1,len2,i,flag=1;
    len1=strlen(s1);
    len2=strlen(s2);
    if(len1 != len2) printf("Both strings are different.");
    else{
        for(i=0;i<len1;i++){
            if(s1[i]!= s2[i]) flag=0;
        }

    }
    if(flag) printf("Both Strings are same.");
    else printf("Both String are different.");
}
