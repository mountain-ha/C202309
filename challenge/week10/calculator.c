#include <stdio.h>

void summation(double* a, double* b, double *result) {
     *result = *a + *b;
    
}

void subtraction(double* a, double* b, double *result) {
    *result = *a - *b;
    
}

void multification(double* a, double* b, double *result) {
    *result = *a * *b;
    
}

void division(double* a, double* b, double *result) {
     *result = *a / *b;
    
}


int main() {
    double a = 0;
    double b= 0;
    printf("두 정수를 입력해주세요\n");
    scanf_s("%lf %lf", &a, &b);
    double result;
    summation(&a, &b, &result);
    printf("%.0lf + %.0lf = %.2lf \n", a, b, result);

    subtraction(&a, &b, &result);
    printf("%.0lf - %.0lf %.2lf \n", a, b, result);

    multification(&a, &b, &result);
    printf("%.0lf * %.0lf %.2lf \n", a, b, result);

    division(&a, &b, &result);
    printf("%.0lf / %.0lf = %.2lf \n", a, b, result);

    return 0;
}