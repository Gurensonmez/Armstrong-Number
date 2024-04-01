#include<stdio.h>
#include<math.h>

int isArmstrong(int number) {
    int current_digit, sum = 0, num = number, number_of_digits;
    
    while (num > 0) {
        current_digit = num % 10;
        sum = sum + pow(current_digit, 3);
        num = num / 10;
    }
    if (sum == number) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int number = 371, isArmstrongNumber;
 
    if (sum == number){
        printf("%d is an Armstrong Number.", number);
    } else {
        printf("%d is not an Armstrong Number.", number);
    }
    isArmstrongNumber = isArmstrong(number);
     if (isArmstrongNumber == 1) {
        printf("%d is an Armstrong Number.", number);
    } else {
        printf("%d is not an Armstrong Number.", number);
    }
    return 0;
}