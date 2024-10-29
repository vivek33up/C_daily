#include <stdio.h>

int main() {
    int num, modifiedNum = 0, digit, place = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        digit = num % 10;
        if (digit == 0) {
            digit = 1;
        } else if (digit == 1) {
            digit = 0;
        }
        modifiedNum = modifiedNum + digit * place;  
        num /= 10;  
        place *= 10; 
    }
    printf("Modified number: %d\n", modifiedNum);
    
    return 0;
}
