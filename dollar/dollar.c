#include <stdio.h>

void bills(int x);


int main(void){

int dollar_amount;

printf("Enter the dollar amount: ");
scanf("%i", &dollar_amount);
bills(dollar_amount);

return 0;

}


void bills(int x){

int b20 = x / 20;
    x = x % 20;  
    printf("$20 bills: %i\n", b20);

    int b10 = x / 10;
    x = x % 10;  
    printf("$10 bills: %i\n", b10);

    int b5 = x / 5;
    x = x % 5;  
    printf("$5 bills: %i\n", b5);

    int b1 = x;  
    printf("$1 bills: %i\n", b1);

}
