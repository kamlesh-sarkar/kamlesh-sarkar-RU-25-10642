#include <stdio.h>

int main()
{

    float balance = 10000.00;
    float withdrawAmount;

    printf("Welcome to the ATM Simulation.\n");
    printf("Current Balance: %.2f\n", balance);

    printf("Enter the amount to withdraw: ");

    scanf("%f", &withdrawAmount);

    if (withdrawAmount > 0)
    {

        if (withdrawAmount <= balance)
        {

            balance = balance - withdrawAmount;

            printf("Transaction Successful!\n");
            printf("Updated Balance: %.2f\n", balance);
        }
        else
        {

            printf("Error: Insufficient balance for this withdrawal.\n");
        }
    }
    else
    {

        printf("Error: Invalid amount. Please enter a value greater than 0.\n");
    }

    return 0;
}