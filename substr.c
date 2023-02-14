#include<stdio.h>
#include<string.h>
void SubStr(char s1[]){
    char s2[20];
    int pos,n,i;
    printf("Enter position:");
    scanf("%d",&pos);
    pos=pos-1;
    printf("Enter number of character:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        s2[i] = s1[pos];
        pos++;
    }
    s2[i] = '\0';
    printf("%s",s2);

}
void main(){
    char s1[20];
    printf("Enter a string:");
    gets(s1);
    SubStr(s1);
}
