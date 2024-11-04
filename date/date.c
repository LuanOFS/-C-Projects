#include <stdio.h>

int main(void) {
    char date[11];  

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%10s", date);  

    // Extraindo os componentes da data
    int mm = (date[0] - '0') * 10 + (date[1] - '0');  
    int dd = (date[3] - '0') * 10 + (date[4] - '0');  
    int yyyy = (date[6] - '0') * 1000 + (date[7] - '0') * 100 + (date[8] - '0') * 10 + (date[9] - '0'); 

   
    printf("Your date: %04i%02i%02i\n", yyyy, mm, dd);  

    return 0;
}
