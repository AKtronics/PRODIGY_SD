#include <stdio.h>
int main(){
    printf("Welcome to Temperature Converter!\n");
    while(1){
        int choice;
        float cel,far,kel;
        printf("1. Celsius conversion \n");
        printf("2. Fahrenheit conversion\n");
        printf("3. Kelvin conversion\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if(choice == 1){
            printf("Enter the temperature in celcius: ");
            scanf("%f",&cel);
            far = ((cel * 9/5) + 32);
            kel = cel + 273.15;
            printf("Temperature in Fahrenheit: %.2f\n", far);
            printf("Temperature in Kelvin: %.2f\n", kel);
            
        }
        else if(choice == 2){
            printf("Enter the temperature in Fahrenheit: ");
            scanf("%f",&far);
            cel = ((far - 32) * 5/9);
            kel = cel + 273.15;
            printf("Temperature in Celcius: %.2f\n", cel);
            printf("Temperature in Kelvin: %.2f\n", kel);
        }
        else if(choice == 3){
           printf("Enter the temperature in Kelvin: ");
           scanf("%f",&kel);
           cel = kel - 273.15;
           far = ((cel * 9/5) + 32);
           printf("Temperature in Celcius: %.2f\n", cel);
           printf("Temperature in Fahrenheit: %.2f\n", far);
        }
        else if(choice == 4){
            break;
        }
        else{
            printf("Invalid Input! Try again.\n");
        }
    }
    return 0;
}