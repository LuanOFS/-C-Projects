#include <stdio.h>

int main(void){

int item_number;
float unit_price;
char date[10];

printf("Enter item number: ");
scanf("%i", &item_number);

printf("Enter unite price: ");
scanf("%f", &unit_price);

printf("Enter purchase date (mm/dd/yyyy): ");
scanf("%10s", date);

int mm = (date[0] - '0') * 10 + (date[1] - '0');
int dd= (date[3] - '0') * 10 + (date[4] - '0');
int yyyy= (date[6] - '0') * 1000 + (date[7] - '0') * 100 + (date[8] - '0') * 10 +  (date[9] - '0');

printf("Item\t\tUnit\t\tPurchase\n");
printf("\t\tPrice\t\tDate\n");
printf("%-d\t\t$%4.2f\t\t%-s\n", item_number, unit_price, date);

return 0;

} 
