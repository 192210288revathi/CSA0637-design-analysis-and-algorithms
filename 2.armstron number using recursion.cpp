#include <stdio.h>
#include <math.h>
 
int isArmstrong(int num);
 
int main() {
int num;
 
printf("Please enter a number: ");
scanf("%d", &num);
 
if (isArmstrong(num)) {
    printf("%d is an Armstrong number.\n", num);
} else {
    printf("%d is not an Armstrong number.\n", num);
}
 
return 0;
}
 
int isArmstrong(int num) {
int yourNum, remainder, n = 0, result = 0;
 
yourNum = num;
 
while ( yourNum != 0) {
    yourNum /= 10;
    ++n;
}
 
yourNum = num;
 
while ( yourNum != 0) {
    remainder = yourNum % 10;
    result += pow(remainder, n);
        yourNum /= 10;
}
 
if (result == num) {
    return 1; 
} else {
    return 0;
}
}
