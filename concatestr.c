#include<stdio.h>
void ConcateStr(char s1[],char s2[20]){
    int len1,len2;
    char s3[20];
    for(len1=0;s1[len1]!='\0';len1++){
        s3[len1] = s1[len1];
    }
    for(len2=0;s2[len2]!='\0';len2++,len1++){
        s3[len1] = s2[len2];
    }
    printf("Concated String:%s",s3);

}
void main(){
    char s1[20],s2[20];
    printf("Enter first String:");
    gets(s1);
    printf("Enter Second String:");
    gets(s2);
    ConcateStr(s1,s2);


}
