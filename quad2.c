#include <stdio.h>
#include <math.h>
float disc(float a, float b,float c);
float main(){
    float a,b,c,d,x1,x2;
    float a1,b1,a2,b2;
    
    printf("\t Type in 3 values for a,b and c. Type Enter after each input.\n");
    printf("\t The discriminate of values will be calculated and displayed.\n");
    printf("\t Input a:");
    scanf("%f", &a );
    printf("\t Input b:");
    scanf("%f", &b );
    printf("\t Input c:");
    scanf("%f", &c );
    d = disc(a,b,c);
    printf("\n\t a = %f b = %f c = %f",a,b,c);
    printf("\n\t The discriminate is %f ",d);
    if(d < 0){
		printf("\t Imaginary Roots\n");
		d = d * -1;
		a1 = (-1 * b)/(2 * a);
		b1 = sqrt(d) / (2*a);
		
		a2 = (-1 * b)/(2 * a);
		b2 = -1 * sqrt(d) / (2*a);
		
		printf("\t Imaginary Roots %f + %f i\n",a1,b1);
		printf("\t Imaginary Roots %f + %f i\n",a2,b2);
	}else{
		printf ("\t Real Roots\n");
		x1 = (-1*b + sqrt(d))/(2*a);
		x2 = (-1*b - sqrt(d))/(2*a);
		printf("\t Roots %f and %f\n",x1,x2);
		
	}
	
  }
  
 float disc(float a, float b, float c){
	 float d = b*b - 4 * a * c;
	 return d;

} 			
 
    
	
