#include <stdio.h>

int main() {
	
 int pin = 1234, inputPin, attemptCount = 0;
 float balance = 0.0;
 
 while(attemptCount < 3)
 {
 printf("Enter your PIN: ");
 scanf("%d", &inputPin);
 
 if(inputPin == pin) 
 {
 break;
 } 
 else 
 {
 printf("Incorrect PIN! Try again.\n");
 attemptCount++;
 }
 }
 
 if(attemptCount == 3) 
 {
 printf("You have exceeded the maximum number of attempts. Exiting...\n");
 return 0;
 }
 
 int choice;
 float amount;
 
 while(1) 
 {
 printf("1. View Balance\n2. Deposit\n3. Withdraw\n4. Exit\nEnter your choice: ");
 scanf("%d", &choice);
 
 switch(choice) 
 {
 case 1:
 printf("Current balance: %.2f\n", balance);
 break;
 case 2:
 printf("Enter amount to deposit: ");
 scanf("%f", &amount);
 balance += amount;
 break;
 case 3:
 printf("Enter amount to withdraw: ");
 scanf("%f", &amount);
 if(amount > balance) {
 printf("Insufficient balance!\n");
 } 
 else 
 {
 balance -= amount;
 }
 break;
 case 4:
 return 0;
 default:
 printf("Invalid choice!\n");
 }
 }

 return 0;
}
