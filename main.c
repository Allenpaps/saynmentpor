#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Number 1
    printf("Magandang Umaga! Kamusta ka?\n");
    printf("\tOhayo Gozaimasu!\n");
    printf("O genki desu ka?");

    printf(" \n\n");

    //Number2
    int convertedhours;
    printf("Input time(hours) to be converted: ");
    scanf("%d", &convertedhours);
    printf("%d hours is %d minutes", convertedhours, convertedhours*60);

    printf(" \n\n");

    //Number3
    int retailPrice;
    int salesTaxRate;

    int totalPrice;

    printf("Enter the retail price: ");
    scanf("%d", &retailPrice);
    printf("Enter the tax rate(%c): ", '%');
    scanf("%d", &salesTaxRate);

    int salesTax = retailPrice*salesTaxRate/100;

    printf("\n");
    printf("Retail Price: %d\n", retailPrice);
    printf("Tax Rate: %d%c\n", salesTaxRate,'%');
    printf("Sales Tax: %d\n", salesTax);
    printf("Total Price: %d\n", retailPrice+salesTax);

    printf(" \n\n");

    //Number4

    int startingBalance;
    int totalAmountOfDeposits;
    int totalAmountOfWithdrawals;
    int monthlyInterestRate;
    int currentBalance;

    printf("Enter your starting balance: ");
    scanf("%d", &startingBalance);
    printf("Enter the total amount of deposits you've made: ");
    scanf("%d", &totalAmountOfDeposits);
    printf("Enter the total amount of withdrawals you've made: ");
    scanf("%d", &totalAmountOfWithdrawals);
    printf("Enter the monthly interest rate(%c): ", '');
    scanf("%d", &monthlyInterestRate);

    printf("Starting Balance: %d\n", startingBalance);
    printf("Total amount of deposits made: %d\n", totalAmountOfDeposits);
    printf("Total amount of withdrawals made: %d\n", totalAmountOfWithdrawals);

    startingBalance += totalAmountOfDeposits;
    startingBalance -= totalAmountOfWithdrawals;

    printf("Current Balance: %d\n", startingBalance);

    printf(" \n\n");


    //Number5
    int num1 = 5;
    int num2 = 10;
    num2 += 7;
    int num3 = num1 * num2;
    num2 -= num1;

    printf("num1=%d num2=%d num3=%d", num1, num2, num3);

    printf(" \n\n");


    //Number6
    int hourlyPayRate;
    int hoursWorkedForTheWeek;

    printf("Enter your hourly pay: ");
    scanf("%d", &hourlyPayRate);
    printf("Enter the total number of hours you worked for a week(no overtime, and no taxes): ");
    scanf("%d", &hoursWorkedForTheWeek);

    printf("Pay for the week: %d", hourlyPayRate*hoursWorkedForTheWeek);




    return 0;
}
