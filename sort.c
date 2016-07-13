//Anya Lauria 
//Sorts an array of integers in an ascending, and then descending order 

#include <stdio.h>
#include <string.h> 
#include <time.h>
#include <stdlib.h>
int main (){ 


int x; 
printf("Enter the size of your array\n");//User is entering number of elements
scanf("%d", &x); 
int ascd[x]; //Array 
int c; 
int d;
int kk = 0;
int temp;
int turtle; 

for(c = 0; c<x; c++){//Randomly generating elements
	srand(time(0)); 
	ascd[kk] = (rand() %100) + 1;
}

for(c = 0; c<x; c++){ //Ascending order
	for(d = 0; d<(x-c-1); d++){
		if(ascd[d] > ascd[d+1]){
				temp = ascd[d]; 
				ascd[d] = ascd[d+1]; 
				ascd[d+1] = temp; 
				}

                            }

		       }


printf("The ascending order is\n\n"); 
         for(c = 0; c<x; c++){
	 printf("%d\n", ascd[c]);
	 }


printf("\n\nThe descending order is\n\n"); 
         for(turtle = 0; turtle<x; turtle++){
         printf("%d\n", ascd[x-turtle-1]);
         }	 
	 

	 
	 
}
	 

	





