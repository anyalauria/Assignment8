#include <stdio.h>
#include <stdlib.h> 
#include <math.h> 


int main(){

	float  sum = 0; 
        float  mean = 0; 
        float    x = 0; 
	

	int i = 0; 
        FILE *libby = fopen("libby.txt", "r");

	
		do{
			fscanf(libby, "%f", &x);
				sum += x; 
				i ++;

				}while(i<4);

	mean = sum/i;
	

	float numbz[4]; 
        int y; 
	float www[4];
	float meanother;
	float sumother;
	float standev;
	
        for (y = 0; y < 4; y++){
	fscanf(libby, "%f", &numbz[y]); 
        www[y] = (numbz[y] -= mean) * (numbz[y] -= mean);
        
	sumother += www[y]; 
        
	}

	meanother = sumother/4; 
	  
	standev = sqrt(meanother); 
        

	
fclose(libby); 

printf("The original sum is: %f\n", sum);
printf("The original mean is: %f\n", mean);
printf("The standard deviation is: %f\n", standev); 

return 0; 

}

