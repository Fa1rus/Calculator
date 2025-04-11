#include<stdio.h>
#include<math.h>

// Function declarations
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);


int main(){
    float x, y, result;
    char operator;
    char again; // <- to ask if user wants to continue

    do{ 
    printf("Enter your first number: ");
    scanf("%f", &x);
    printf("Enter operator(+, -, *, /): ");
    scanf(" %c", &operator);                // space before %c is important!
    printf("Enter second number: ");
    scanf("%f", &y);

    switch (operator)
    {
    case '+':
        result = add(x, y);
        printf("%.2f + %.2f = %.2f\n", x, y, result);
        break;
    case '-':
        result = subtract(x,y);
        printf("%.2f - %.2f = %.2f\n", x, y, result);
        break;
    case '*':
        result = multiply(x,y);
        printf("%.2f * %.2f = %.2f\n", x, y, result);
        break;
    case '/':
        result = divide(x,y);
        if (y != 0){
            printf("%.2f / %.2f = %.2f\n",x,y,result);
        }
        break;
    default:
        printf("Invalid operator input!\n");
    }
    // ask if user wanna do another calculattion
    printf("Do you want to calculate again?(y/n): ");
    scanf(" %c", &again);
    } while (again == 'y' || again == 'Y');
    {
        printf("Thanks for using the calculator! Bye\n");
    }
    

    return 0;    
}
float add(float a, float b) {
    return a + b;
}
float subtract(float a, float b) {
    return a - b;
}
float multiply(float a, float b) {
    return a * b;
}
float divide(float a, float b) {
    if (b != 0)
        return a / b;
    else {
        printf("Error: Cannot divide by zero!\n");
        return 0; // return 0 just to avoid crash
    }
}
