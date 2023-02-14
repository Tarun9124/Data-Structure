#include<stdio.h>
#include<stdlib.h>
struct Employee{
    char Name[50];
    char Company[50];
    int Salary;
};
void main(){
   struct Employee EP;
   struct Employee *E;
   E = &EP;
   printf("Prajapati Tarun Jayantibhai\n");
   printf("ER-NO:206120316008\n");
   printf("\nName: ");
   scanf("%s",E->Name);
   printf("Company: ");
   scanf("%s",E->Company);
   printf("Salary: ");
   scanf("%d",&E->Salary);
   printf("\n|Name = %s |\n|Company = %s|\n|Salary = %d|",E->Name,E->Company,E->Salary);
}
