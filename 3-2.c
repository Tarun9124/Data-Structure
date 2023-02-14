#include<stdio.h>
int fact(int n){
    if(n==1){
        return 1;
    }
    else
        return n * fact(n-1);
}
int GCD(int m,int n){
    int rem;
    rem = m%n;
    if(rem==0){
        return n;
    }
    else
        return GCD(n,rem);
}
int FIBBO(int n){
    if((n==0) || (n==1))
        return 0;
    else if(n==2)
        return 1;
    else
        return (FIBBO(n-1)+FIBBO(n-2));

}
void main(){
    int n,m,gcd,i,j,ch;
    printf("Prajapati Tarun\n");
	printf("Enrollment No.:206120316008\n");
    printf("Select Choice::");
    printf("\n1.Factorial");
    printf("\n2.Greatest Common Divisior");
    printf("\n3.Fibonacci series");

    printf("\nEnter Your Choice:");
    scanf("%d",&ch);


    switch(ch){

    case 1 : printf("Enter a number:");
             scanf("%d",&n);
             printf("Factorial = %d",fact(n));
             break;

    case 2 : printf("Enter first number: ");
             scanf("%d",&m);
             printf("Enter second number: ");
             scanf("%d",&n);
             gcd = GCD(m,n);
             printf("GCD = %d",gcd);
             break;

    case 3 :printf("Enter a limit:");
            scanf("%d",&n);
            for(i=1;i<=n;i++){
            printf("%d\n",FIBBO(i));
            j++;
            }
            break;
    case 4 : printf("Invalid operation.");break;
       }
}
