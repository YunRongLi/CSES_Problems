#include <stdio.h>
 
void sovle(unsigned long long n){
	printf("%llu ", n);
	while(n != 1 && n > 0){
		if ((n % 2) == 0){
			n /= 2;
		}
		else {
			n = n * 3 + 1;
		}
		printf("%llu ", n);
	}
}
 
int main(int argc, char** argv){
	unsigned long long n = 0;			

	int result = scanf("%llu", &n);
	if (result > 0)
		sovle(n);

	return 0;
}
