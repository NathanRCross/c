#include <stdio.h>
int main(){
	char asc = '0'; // set asc to 0
	int r,c;
	int v = 0;
	for (r = 0;r < 16; r++){
		for (c = 0; c < 16; c++){
			asc = (char)v; // convert int to char
			printf (" %c ",asc);
			v++;
		}	
		printf("\n");
	}
	printf("\n\n v = %d \n",v);
	return 0;
}		
