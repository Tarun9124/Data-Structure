#include<stdlib.h>
struct ComplexNum{
    float Real;
    float Imag;
};
void main(){
    struct ComplexNum num,n1,n2;
    printf("Prajapati Tarun Jayantibhai\n");
    printf("ER-NO:206120316008\n");
    printf("\nEnter First Number(Real Part): ");
    scanf("%f",&n1.Real);
    printf("Enter First Number(Imaginary Part): ");
    scanf("%f",&n1.Imag);
    printf("\nEnter second Number(Real Part): ");
    scanf("%f",&n2.Real);
    printf("Enter second Number(Imaginary Part): ");
    scanf("%f",&n2.Imag);
    printf("\nResult: Real=%.2f\n\tImaginary=%.2fi",n1.Real+n2.Real,n1.Imag+n2.Imag);

}
