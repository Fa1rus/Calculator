#include<stdio.h>
#include<math.h>

// Function declarations
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);


int main(){
    float x, y, result;
    int choice;  //lessier variable

    do{ 
    //Menu Display
    printf("\n===== Simple Calculator =====\n");
    printf("1. Add(+)\n");
    printf("2. Subtract(-)\n");
    printf("3. Multiply(x)\n");
    printf("4. Divide(÷)");
    printf("0. Exit\n");
    printf("Choose your operation (0-4): ");
    scanf("%d", &choice);
    
    //If user put 0 program will end
    if (choice==0)
    {
        printf("Thank for using Simple calculator!\n");
        break;
    }
    // input numbers
    printf("Enter your first number: ");
    scanf("%f", &x);
    printf("Enter your second number: ");
    scanf("%f", &y);

    // Operation (Which choice user iput)
    switch (choice)
    {
    case 1:
        result = add(x, y);
        printf("%.2f + %.2f = %.2f\n", x, y, result);
        break;
    case 2:
        result = subtract(x,y);
        printf("%.2f - %.2f = %.2f\n", x, y, result);
        break;
    case 3:
        result = multiply(x,y);
        printf("%.2f * %.2f = %.2f\n", x, y, result);
        break;
    case 4:
        result = divide(x,y);
        if (y != 0){
            printf("%.2f / %.2f = %.2f\n",x,y,result);
        }
        break;
    default:
        printf("⚠️Invalid operator input!\n");
    }

    } while (1);     

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
