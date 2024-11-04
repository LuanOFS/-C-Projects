
#include <stdio.h>

int main(void){

char isbn[18];

printf("Enter ISBN: ");
scanf("%17s", isbn);

int gsl = (isbn[0] - '0') * 100 + (isbn[1] - '0') * 10 + (isbn[2] - '0');
int identifier= (isbn[4] - '0'); //if
int publisher_code= (isbn[6] - '0') * 100 + (isbn[7] - '0') * 10 + (isbn[8] - '0');
int item_number = (isbn[10] - '0') * 10000 + (isbn[11] - '0') * 1000 + (isbn[12] - '0') * 100 + (isbn[13] - '0') * 10 + (isbn[14] - '0');
int check_digit =  (isbn[16] - '0');

if(identifier == 0 || identifier == 1 || identifier == 2){
printf("English\n");
}else if(identifier == 3){
printf("German\n");
}else if(identifier == 4){
printf("Japan\n");
}else if(identifier == 5){
printf("USSR\n");
}else if(identifier == 6){
printf("China\n");
}else{
printf("Unsupported\n");
}

printf("GSl prefix: %i\n", gsl);
printf("Group identifier: %i\n", identifier);
printf("Publisher code: %i\n", publisher_code);
printf("%Item number: %i\n",  item_number);
printf("Check digit: %i\n", check_digit);

return 0;

}
