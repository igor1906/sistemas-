#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <unistd.h>
#include <sys/types.h>

main(){
	
	for(int cont = 0 ; cont < 4 ; cont +=1){
		
		if(fork() == 0){
			
			printf("\n FILHO %i \n",cont);
		}
		else if (fork != 0){
			printf("\n PAI %i \n",cont);
		}
		
	}
}
