
#include <stdio.h>
#include <math.h>
float disc(float a, float b,float c);
float main(){
    float a,b,c,d;
    printf("\n\t ************* ************* ************* ************* *************\n");
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
        printf("\n\t ************* ************* ************* ************* *************\n");
    return 0;
}




float disc (float a, float b, float c){
		float d;
		d = b*b -(4*a*c);
		if (d >= 0){
		return d;
	}
		else {
		printf("\t The discriminate is imaginary");
		return d;	
	}
}

