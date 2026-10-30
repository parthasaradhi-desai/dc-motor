#include <reg51.h>

sbit IN1 = P1^0;
sbit IN2 = P1^1;
sbit EN  = P1^2;
sbit LED = P1^3;

void main() {
    IN1 = 1;
    IN2 = 0;
    EN  = 1;
    LED = 1;
    while (1);
}