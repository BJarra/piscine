#include<stdio.h>

void ft_print_reverse_alphabet () {
	char letter ='z';
	while (letter >= 'a') {
	      printf("%c", letter);
       	      letter--;
	}
	printf("\n");
}

int main() {
	ft_print_reverse_alphabet ();
	return 0;
}

