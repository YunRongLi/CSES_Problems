#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define  ll long long

void solveNumber(unsigned ll row, unsigned ll col){
	unsigned ll square_num, result_num, root;

	if (row == 1 && col == 1) result_num = 1;

	if (row > col) {
		square_num = row * row;
		root = row;
	}
	else {
		square_num = col * col;
		root = col;
	}

	if (square_num % 2 == 0){
		result_num = square_num - (col-1) - (root - row); 
	}
	else{
		result_num = square_num - (row-1) - (root - col);
	}

	printf("%llu\n", result_num);
}

int main(void){
	unsigned ll t, row, column, spiral_number = 0;

	scanf("%llu", &t);		
	while(t){
		if (scanf("%llu %llu", &row, &column) > 0){			
			solveNumber(row, column);
		}
		t--;
	}
	return 0;
}
