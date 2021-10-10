#include <stdio.h>

double plus(double numOne, double numTwo){
    return (numOne + numTwo);
}
double minus(double numOne, double numTwo){
    return (numOne - numTwo);
}
double multiply(double numOne, double numTwo){
    return (numOne * numTwo);
}
double division(double numOne, double numTwo){
    return (numOne / numTwo);
}
int main() {
    double numOne;
    double numTwo;
    char operator;
    printf("Enter the first number: ");
    scanf("%lf", &numOne);
    printf("Enter the second number: ");
    scanf("%lf", &numTwo);
    printf("Enter operator: ");
    scanf(" %c", &operator);
    if(operator == '+'){
        printf("%f", plus(numOne, numTwo));
    }else if(operator == '-'){
        printf("%f" , minus(numOne, numTwo));
    }else if(operator == '*'){
        printf("%f", multiply(numOne, numTwo));
    }else if (operator == '/'){
        printf("%f", division(numOne, numTwo));
    }else{
        printf("Invalid operator");
    }
    return 0;
}
