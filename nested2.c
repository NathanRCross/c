#include <stdio.h>
int main(){
	char asc = '0'; // set asc to 0
	int r,c;
	int v = 32;
	for (r = 0;r < 12; r++){
		for (c = 0; c < 8; c++){
			asc = (char)v; // convert int to char
			printf (" %c ",asc);
			v++;
		}	
		printf("\n");
	}
	printf("\n\n v = %d \n",v);
	return 0;
}		
