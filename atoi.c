#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

int main (int argc, char *argv[]){

	int x, y, soma;

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	
	soma = x+y;

	   printf ("\t\tSoma: %i\n", soma);


}
