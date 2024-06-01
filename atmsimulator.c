#include <stdio.h>
int main() {
    int pin = 1234; 
    int enteredPin;
    float balance = 1000.00;
    int choice;
    float amount;

    printf("Welcome to the ATM\n");
    printf("Please enter your PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin) {
        printf("Invalid PIN. Exiting...\n");
        return 0;
    } else {
        printf("PIN accepted\n");
    }
    printf("\nATM Menu:\n");
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your balance is: %.2f\n", balance);
                break;
            case 2:
                printf("Enter the amount to deposit: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Deposit successful. Your new balance is: %.2f\n", balance);
                break;
            case 3:
                printf("Enter the amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > balance) {
                    printf("Insufficient funds\n");
                } else {
                    balance -= amount;
                    printf("Withdrawal successful. Your new balance is: %.2f\n", balance);
                }
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    return 0;
}