#include <stdio.h>


int sum(int num1,int num2){
    int result = num1 + num2;
    return result;
}
int main() {

    int result = sum(10,20); 
    printf("The sum is: %d", result);
    
    return 0;
}
