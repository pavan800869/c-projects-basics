// Automatic Espresso Machine 
#include <stdio.h>

void coffee();
void tea();
void milk();

int main()
{
    char size;
    int choice;
    static int money;

    start: printf("Hello! Please insert the money in the box\n");
    scanf("%d", &money);
    if (money == 10 || money == 5){

   
    
        printf("==============================================\n");
        printf("||    Welcome to Espresso Maker Machine     ||\n");
        printf("||                                          ||\n");
        printf("||     Available Bevarage:-                 ||\n");
        printf("||                                          ||\n");
        printf("||          1. Coffee   10/-                ||\n");
        printf("||                                          ||\n");
        printf("||          2. Tea       5/-                ||\n");
        printf("||                                          ||\n");
        printf("||          3. Milk      5/-                ||\n");    
        printf("||                                          ||\n");
        printf("||                                          ||\n");
        printf("|| Choose Your Bevarage using the number    ||\n");
        printf("||                                          ||\n");
        printf("||                                          ||\n");
        printf("||          Thank You <3                    ||\n");
        printf("||                                          ||\n");
        printf("||                                          ||\n");
        printf("||                                          ||\n");
        printf("||  You will be redirected to your page     ||\n");
        printf("==============================================\n");

        printf("Enter the Bevarange number:  ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if(money<10){
                printf("You cannot buy a coffee with the amount you inserted\n");
                goto start;
            }
            else{
                coffee();
                break;
            }
        case 2:
            if(money<5){
                printf("Here! Collect your 5rs from the box below\n");
                break;
            }
            else{
                tea();
                if (money>5){
                    printf("Here! Collect your 5rs from the box below\n");
                }
                break;
            }
        case 3:
            if(money<5){
                printf("Here! Collect your 5rs from the box below\n");
                break;
            }
            else{
                milk();
                if (money>5){
                    printf("Here! Collect your 5rs from the box below\n");
                }
                break;
            }
        default:
            printf("Please Enter the Correct option\n");
            break;
        }
    }
    else
    {
        return 0;
    }
    return 0;
}


void coffee()
{
    int no_of_drinks = 5;
    int c2h;
    printf("1)Chilled or 2)Hot\n");
    scanf("%d",&c2h);
    
    switch(c2h)
    {
        case 1:
            printf("Your cold coffee is getting prepared and served to you in few seconds...\n");
            no_of_drinks--;
            break;
    
        case 2:
            printf("Your hot coffee is getting prepared and served to you in few seconds...\n");
            no_of_drinks--;
            break;
    
        default:
            printf("Your coffee is getting prepared and served in few seconds....\n");
            no_of_drinks--;
            break;
    }
    printf("Enjoy your Coffee\n");
}

void tea()
{
    int no_of_drinks = 5;
    int c2h;
    printf("1)Chilled or 2)Hot\n");
    scanf("%d",&c2h);
    
    switch(c2h)
    {
        case 1:
            printf("Your cold Tea is getting prepared and served to you in few seconds...\n");
            no_of_drinks--;
            break;
    
        case 2:
            printf("Your hot Tea is getting prepared and served to you in few seconds...\n");
            no_of_drinks--;
            break;
    
        default:
            printf("Your Tea is getting prepared and served in few seconds....\n");
            no_of_drinks--;
            break;
    }
    printf("Enjoy your Tea\n");
}

void milk()
{
    int no_of_drinks = 5;
    int c2h;
    printf("1)Chilled or 2)Hot\n");
    scanf("%d",&c2h);
    
    switch(c2h)
    {
        case 1:
            printf("Your cold Milk is getting prepared and served to you in few seconds...\n");
            no_of_drinks--;
            break;
    
        case 2:
            printf("Your hot Milk is getting prepared and served to you in few seconds...\n");
            no_of_drinks--;
            break;
    
        default:
            printf("Your Milk is getting prepared and served in few seconds....\n");
            no_of_drinks--;
            break;
    }
    printf("Enjoy your Milk\n");
}
