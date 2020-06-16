#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

unsigned int get_longest_char(void){
	unsigned int longest_char_length = 1, substring_length = 1;
	char current = '\0', previous = '\n';

	current = getchar();
	previous = current;

	while(isupper(current = getchar())){
		if (current == previous){
			substring_length++;
		}
		else{
			substring_length = 1;
			previous = current;
		}
		if (substring_length > longest_char_length)
			longest_char_length = substring_length; 
	}

	return longest_char_length;
}

int main(void){
	unsigned int longest_length = get_longest_char();
	printf("%d", longest_length);	


	return 0;
}
