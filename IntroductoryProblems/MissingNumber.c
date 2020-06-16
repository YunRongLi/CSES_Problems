#include <stdio.h>
#include <stdlib.h>

int longdouble_to_int(long double input){
	int output;
	char temp[50];

	sprintf(temp, "%Lf", input);
	temp[49] = 0x00;

	sscanf(temp, "%d", &output);

	return output;
}

int main(void){
	int contain_size, num;
	long double sum = 0.0;
	scanf("%d", &contain_size);
	for(long double i = 1; i <= contain_size; i++){
		sum += i/contain_size;
	}

//	printf("Init Sum:%f\n", sum);
	int times = contain_size;	
	while(1){
		if (scanf("%d", &num) == 0) break;
		long double fnum = (long double)num;
		sum -= fnum/contain_size;
		times--;
//		printf("Sum:%f, Times:%d\n", sum, times);
		if (times == 1) break;
	}	

	printf("%d\n", longdouble_to_int(sum*contain_size));
	

	return 0;
}
