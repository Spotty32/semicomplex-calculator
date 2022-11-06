#include <stdio.h>
#include <math.h>

void main() 
{
    char operation, status = 1;
    double number1, number2, special1, special2;

    printf("Welcome to my Semi-Complex Overcomplicated Calculator in C!\nThis is my first project in C, I hope you'll enjoy it.\nMade by Spotty32, https://github.com/Spotty32\nVersion: 1.0\n\n");

    while (status == 1)
    {
        printf("Please enter the first number: ");
        scanf("%lf", &number1);

        printf("Please enter the second number: ");
        scanf("%lf", &number2);

        printf("%lf, %lf\nPlease select an operation: \n1. +, 2. -, 3. *, 4. /, 5. sqrt, 6. pow, 7. round, 8. ceil, 9. floor, 10. abs, 11. log, 12. sin, 13. cos, 14. tan: \n", number1, number2);
        scanf("%d", &operation);

        switch (operation)
        {

        case 1:
            special1 = number1 + number2;
            printf("\n%lf\n", special1);
            break;

        case 2:
            special1 = number1 - number2;
            printf("\n%lf\n", special1);
            break;

        case 3:
            special1 = number1 * number2;
            printf("\n%lf\n", special1);
            break;

        case 4:
            special1 = number1 / number2;
            printf("\n%lf\n", special1);
            break;

        case 5:
            special1 = sqrt(number1), special2 = sqrt(number2);
            printf("\nSqrt of the first number: %lf\nSqrt of the second number: %lf\n", special1, special2);
            break;
        
        case 6:
            special1 = pow(number1, number2);
            printf("\n%lf\n", special1);
            break;

        case 7:
            special1 = round(number1), special2 = round(number2);
            printf("\nThe first number rounded: %0.lf\nThe second number rounded: %0.lf\n", special1, special2);
            break;

        case 8:
            special1 = ceil(number1), special2 = ceil(number2);
            printf("\nThe first number rounded up: %0.lf\nThe second number rounded up: %0.lf\n", special1, special2);
            break;

        case 9:
            special1 = floor(number1), special2 = floor(number2);
            printf("\nThe first number rounded down: %0.lf\nThe second number rounded down: %0.lf\n", special1, special2);
            break;

        case 10:
            special1 = abs(number1), special2 = abs(number2);
            printf("\nAbs of number one: %0.lf\nAbs of number two: %0.lf\n", special1, special2);
            break;

        case 11:
            special1 = log(number1), special2 = log(number2);
            printf("\nLog of number one: %lf\nLog of number two: %lf\n", special1, special2);
            break;

        case 12:
            special1 = sin(number1), special2 = sin(number2);
            printf("\nSin of number one: %lf\nSin of number two: %lf\n", special1, special2);
            break;

        case 13:
            special1 = cos(number1), special2 = cos(number2);
            printf("\nCos of number one: %lf\nCos of number two: %lf\n", special1, special2);
            break;

        case 14:
            special1 = tan(number1), special2 = tan(number2);
            printf("\nTan of number one: %lf\nTan of number two: %lf\n", special1, special2);
            break;

        default:
            status = 0;
            break;
        }
    }
}