#include<stdio.h>
#include<math.h>

int main(){
    float firstNum;
    float secondNum;
    float result;
    char operate;

    printf("==========\n");
    printf("CALCULATOR\n");
    printf("==========\n");
    printf("Enter calculation to find the result ! :\n");
    printf("Example : 1 + 1\n");
    scanf("%f %c %f", &firstNum, &operate, &secondNum);

    
    switch(operate){
        case '+' :
            result = firstNum+secondNum;
            break;   
        case '-' :
            result = firstNum-secondNum;
            break;   
        case '*' :
            result = firstNum*secondNum;
            break;   
        case '/' :
            result = firstNum/secondNum;
            break;   
        case '^' :
            result = firstNum*secondNum;
            break;   
    }
    printf("%.10g %c %.10g = %.10g\n", firstNum, operate, secondNum, result);
    printf("Thank you for using this calculator!\n");
    printf("====================================\n");
    

    
    return 0;
}
