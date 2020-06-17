#include <stdio.h>
#include <stdlib.h>

int main(void){
	unsigned int  num;
	scanf("%d", &num);

	if (num != 2 && num != 3){
		for(int j = 2; j <= num; j +=2) printf("%d ", j);
		for(int i = 1; i <= num; i += 2) printf("%d ", i);
	}	
	else printf("NO SOLUTION");


	return 0;
}
