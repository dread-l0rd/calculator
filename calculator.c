#include <stdio.h>
#include <math.h>

enum options {add=1, sub, mul, div, mod, exp};

int main(){

    int choice;
    
    do {
        float num1, num2, result;
        printf("What calculations do you want to perform?\nChose from the options\n");
        printf("1. Add\n2. Sub\n3. Multiply\n4. Divide\n5. Modulus\n6. Exponentiation\n0. Exit\n");
        scanf("%d", &choice);

        if (choice < 7 && choice > 0){
            printf("Enter the First number\n");
            scanf("%f", &num1);
            printf("Enter the Second number\n");
            scanf("%f", &num2);

            switch (choice)
            {
            case add:
                result = num1 + num2;
                printf("The sum of the numbers %0.2f and %0.2f is %0.2f\n", num1, num2, result);
                break;
            case sub:
                result = num1 - num2;
                printf("%0.2f - %0.2f is %0.2f\n", num1, num2, result);
                break;
            case mul:
                result = num1 * num2;
                printf("%0.2f * %0.2f is %0.2f\n", num1, num2, result);
                break;
            case div:
                if (num2 != 0){
                    result = num1 / num2;
                    printf("%0.2f / %0.2f is %0.2f\n", num1, num2, result);
                    break;
                }
                else {
                    printf("Cannot divide by Zero \n");
                    continue;
                }
                
            case mod:
                {
                int int_result = (int)num1 % (int)num2;
                printf("%d %% %d is %d\n", (int)num1, (int)num2, int_result);
                }
                break;
            case exp:
                result = (float)pow((double)num1, (double)num2);
                printf("%0.2f Pow of %0.2f is %0.2f\n", num2, num1, result);
                break;
            default:
                break;
            }

        } else {
            printf("Wrong Choice select from the Menu\n");
        }

    } while (choice != 0);

    return 0;
}