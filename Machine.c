#include <stdio.h>
#include <math.h>

/* defining ingredient quantities and prices for each coffee type*/

#define espresso_beans 8
#define espresso_water 30
#define espresso_milk 0
#define espresso_choco_syrup 0
#define espresso_price 3.5

#define cappuccino_beans 8
#define cappuccino_water 30
#define cappuccino_milk 70
#define cappuccino_choco_syrup 0
#define cappuccino_price 4.5

#define mocha_beans 8
#define mocha_water 39
#define mocha_milk 160
#define mocha_choco_syrup 10
#define mocha_price 5.5

#define low_threshold_beans 8
#define low_threshold_water 30
#define low_threshold_milk 30
#define low_threshold_choco_syrup 10

#define password 1234

int beans = 100 , water = 500 , milk = 500 , chocolate = 100;
double total_amount = 0.0;

void display_menu(){
    printf("1. order coffee\n");
    printf("2. admin mode\n");
    printf("3. exit\n");
}

void order_coffee()
{
    int coffee_type;
    printf("select coffee type\n");
    printf("1. espresso %.2f\n", espresso_price);
    printf("2. cappuccino %.2f\n", cappuccino_price);
    printf("3. mocha %.2f\n", mocha_price);
    printf("enter your choice: ");
    scanf("%d", &coffee_type);

}

void admin_mode(){
    int entered_password;
    printf("enter admin password: ");
    scanf("%d", &entered_password);
    if (entered_password != password) {
        printf("incorrect password\n");
        return;
    }
    change_price();
}
    
void change_prices();

 int main()
 {
    int choice;
    while (1) {
    display_menu();
    printf ("enter your choice: ");
    scanf ("%d", &choice);
    switch (choice)
     {
        case 1:
        order_coffee();
        break;

        case 2:
        admin_mode();
        break;
        
        case 3:
        printf("total sales amount: %.2f\n", total_amount);
        break;

        case 0:
        printf("exiting the program\n");
        return 0;

    }
    }
    return 0;
 }







