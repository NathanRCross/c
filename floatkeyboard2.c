#include <stdio.h>
#include <math.h>
//gcc floatkeyboard2.c -o floatkeyboard2 -lm
main() {
    float a;
    printf("enter in value for a: "); 
    scanf("%f", &a); 
    printf("%f\n", a);
	
	float b;
	printf("enter in value for b: "); 
    scanf("%f", &b); 
    printf("%f\n", b);
    
    float c;
    printf("enter in value for c: "); 
    scanf("%f", &c); 
    printf("%f\n", c);
    
    float sum;
    sum = a+b+c;
    printf("sum of values is ");
    printf("%f\n", sum);
	
	float s;
	s = sqrt(sum);
	printf("the square root of values is ");
	printf("%f\n", s);
}

