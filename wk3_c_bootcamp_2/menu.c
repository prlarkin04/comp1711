#include <stdio.h>

int main() {
    int choice;
    printf("        Menu:\n1.Fried Chicken & Chips\n2.Sirloin Steak with Chips and Pepper Sauce\n3.Pan Roast Salmon in a Lemon Cream Sauce\n4.Chicken Katsu Curry\n5.Spicy Bean Roast(v)\nEnter the number of your menu choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1: printf("You have chosen the Fried Chicken\n");
        break;

        case 2: printf("You have chosen the Steak\n");
        break;

        case 3: printf("You have chosen the Salmon\n");
        break;

        case 4: printf("You have chosen the Chicken Curry\n");
        break;

        case 5: printf("You have chosen the Spicy Bean Roast\n");
        break;

        default: printf("Only options 1-5 are available\n");
    }
}