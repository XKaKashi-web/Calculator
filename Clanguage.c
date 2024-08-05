#include<stdio.h>
int main() {
double a, b;
char sign;

printf("Enter problem : ");
scanf("%lf %c %lf", &a, &sign, &b);

switch (sign) {
case '+' :
    printf("%.2lf\n", a +b);
    break;


case '-' :
    printf("%.2lf\n", a - b);
    break;

case '*' :
    printf("%.2lf\n", a * b);
    break;

case '/' :
    printf("%.2lf\n", a / b);
    break;

default : 
    printf("Error");
}
}

// By ~ Yash ^_^