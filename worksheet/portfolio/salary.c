
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: OMAR HAMDAN 
 * ID: 201972526
 */

 int main( void ) {

    // define and initialise variables for the problem data 
    float Salary = 30000;
    float National_Insurance_Rate = 0.09;
    float Tax_Rate = 0.25;

    // calculate the deductions and final take-home salary
    float National_Insurance_Contribution = National_Insurance_Rate * Salary;
    float Tax_Contribution = (Salary-National_Insurance_Contribution-12500) * Tax_Rate;
    float Take_Home_Salary = Salary - (National_Insurance_Contribution + Tax_Contribution);

    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2f\n", Salary);
    printf("NI contribution £%.2f\n", National_Insurance_Contribution);
    printf("Tax contribution £%.2f\n", Tax_Contribution);
    printf("Take home salary £%.2f\n",Take_Home_Salary);

    return 0;
 }