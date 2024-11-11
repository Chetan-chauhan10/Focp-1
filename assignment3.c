#include<stdio.h>
#include<math.h>
int main()
{   
    int choice,a=1;
    double n1,n2,result;

   while(a=1){
    printf("A SIMPLE CALCULATOR");
    printf("\nselect What operations you want to perform???");
    printf("\nPRESS 1 FOR ADDITION");
    printf("\nPRESS 2 FOR SUBTRATION");
    printf("\nPRESS 3 FOR MULTIPLICATION");
    printf("\nPRESS 4 FOR DIVISION");
    printf("\nPRESS 5 FOR LOGARITHMIC VALUE");
    printf("\nPRESS 6 FOR SQUARE ROOT");
    printf("\nPRESS 7 TO EXIT THE CALCULATOR");
    printf("\nENTER YOUR CHOICE: ");
    scanf("%d",&choice);
    
    switch(choice){
        case 1:
        printf("ENTER FIRST NUMBER: ");
        scanf("%lf",&n1);
        printf("ENTER SECOND NUMBER: ");
        scanf("%lf",&n2);
        result=n1+n2;
        printf("THE SUM OF THE TWO NUMBERS IS :%lf\n\n",result);
        break;

        case 2:
        printf("ENTER FIRST NUMBER: ");
        scanf("%lf",&n1);
        printf("ENTER SECOND NUMBER: ");
        scanf("%lf",&n2);
        result=n1-n2;
        printf("THE DIFFERRENCE BETWEEN THE ENTERED NUMBERS IS: %lf\n\n",result);
        break;

        case 3:
        printf("ENTER FIRST NUMBER: ");
        scanf("%lf",&n1);
        printf("ENTER SECOND NUMBER: ");
        scanf("%lf",&n2);
        result=n1*n2;
        printf("THE PRODUCT OF THE ENTERED NUMBERS IS :%lf\n\n",result);
        break;

        case 4:
        printf("ENTER FIRST NUMBER: ");
        scanf("%lf",&n1);
        printf("ENTER SECOND NUMBER: ");
        scanf("%lf",&n2);
        if(n2!=0){
        result=n1/n2;
        printf("THE DIVISION OF THE ENTERED NUMBERS IS: %lf\n\n",result);}
        else{
            printf("Error: Division by zero is not allowed.\n\n");
        }
        break;

        case 5:
        printf("ENTER THE NUMBER: ");
        scanf("%lf",&n1);
        if(n1>0){
        result=log10(n1);
        printf("THE LOGARITHMIC VALUE OF THE ENTERED NUMBER IS: %lf\n\n",result);}
        else{
            printf("ERROR Logarithm is not defined for non-positive numbers.\n\n");
        }
        break;

        case 6:
        printf("ENTER THE NUMBER: ");
        scanf("%lf",&n1);
        if(n1>0){
            result=sqrt(n1);
            printf("THE SQUARE ROOT OF THE ENTERED NUMBER IS:%lf\n\n",result);
        }
        else{
            printf("Error: Square root of a negative number is not defined.\n\n");
        }
        break;
        
        case 7:
           a=0;
           return a;
        default:
           printf("PLEASE CHOOSE CORRECT OPTION!!\n\n");
           break;
    }
}
}