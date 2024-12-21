#include<stdio.h>
#include<stdbool.h>


int main(){
    int num1;
    int num2;
    int result; // gives the final result

    bool show_result = true;
    char operation;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the operator: ");
    scanf(" %c", &operation);

    // switch statements to take care of the different conditions
    switch (operation) {
        case '+':
            result = num1 + num2;
        break;
        case '-':
            result = num1 - num2;
        break;
        case '*':
            result = num1 * num2;
        break;
        case '/':
            result = num1/num2;
        break;
        default:
            printf("Error! Invalid operation\n");
            show_result = false;
        break;
    }

    if (show_result){
        printf("Output: %d\n", result);
    }
    return 0;

}
