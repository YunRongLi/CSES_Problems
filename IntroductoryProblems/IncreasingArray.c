#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void){
	unsigned long long contain = 0;
	unsigned long long *arr = NULL;

	scanf("%llu", &contain);

	arr = (unsigned long long*)malloc(contain*sizeof(unsigned long long));
	for(unsigned long long i = 0; i < contain; i++){	
		scanf("%llu", &arr[i]);
	}

	unsigned long long *previous = &arr[0];
	unsigned long long *next = &arr[1];
	unsigned long long turns = 0;

	unsigned long long i;
	for(i = 1; i < contain;){
		if (*previous > *next){
			turns += *previous - *next;
			*next = *previous;
		}
		else{	
			previous = &arr[i];
			next = &arr[i+1];
			i++;
		}
	}		

	printf("%llu", turns);

	return 0;
}
