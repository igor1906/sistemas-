#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(){

	pid_t pide;
	pide = fork();

	if(pide < 0){
		printf ("3RR0R\n");
	}

	else if (pide == 0){
		execlp ("ls", "ls", NULL);
	}
	else{
		wait (NULL);
		printf ("\t\tPrograma Executado\n");
	}

	
}
