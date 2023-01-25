
//Written by Emin Ayyıldız
#include <stdio.h>
#include <unistd.h>
int amount = 1000;
int balance;
int choice;
int account_number;
int account_pasword;

int main() {
    printf("Written by Emin Ayyıldız\n");
    printf("Welcome to the banking system. We wish you a nice day\n");
    int access = 0;
    while (!access)
    {
        printf("Please enter your account number : ");
        scanf("%d",&account_number);
        printf("Please enter your account password : ");
        scanf("%d",&account_pasword);
        if (account_number == 123456 && account_pasword == 1234) {
            printf("Logging into the system... Please wait..\n");
            sleep(2);
            printf("The system has been logged.\n");
            access = 1;
            
        }
        else {
            printf("Invalid account number or password..\n");
        }
    }
    
    while(choice >=0)
    {

            printf("***MENU***\n");
            printf("1-Deposit Money \n2-Withdraw Money \n3-Show all Amount \n4-EXIT \n");
            printf("Please enter your choice : ");
            scanf("%d",&choice);
            
            switch (choice) {
                case 1:
                    printf("Please enter the amount you wish to deposit:");
                    scanf("%d",&balance);
                    printf("Your money is being deposited... Please wait...\n");
                    sleep(1.5);
                    amount = amount + balance;
                    printf("New amount : %d \n",amount);
                    sleep(2);
                    continue;
                case 2:
                    
                    printf("Please enter the amount you want to withdraw :");
                    scanf("%d",&balance);
                    if (balance <= amount){
                        printf("Processing... Please wait...\n");
                        sleep(2);
                        amount = amount-balance;
                        printf("New amount : %d \n",amount);
                        sleep(2);
                    }
                    else
                    {
                        printf("Insufficient Balance\n");
                        
                    }
                    continue;
                case 3:
                    printf("Showing all balance... Please wait..\n");
                    sleep(1.5);
                    printf("Your amount : %d \n",amount);
                    sleep(2);
                    continue;
                case 4:
                    printf("Logging out from the system.. Please don't forget to take your card...\n");
                    sleep(2);
                    printf("Logged out.\n");
                    choice = -1;
                    access = 0;
                    break;
                default:
                    printf("Invalid Choice\n");
                    continue;
            }
            
            
        }
        return 0;
    }
    

