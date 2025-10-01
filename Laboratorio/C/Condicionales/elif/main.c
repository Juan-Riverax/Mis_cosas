#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int nota = 45;
	
	if(nota >= 50) {
		printf("Excelente nota.\n");
	} else if(nota>=40) {
		printf("Buena nota.\n");
	} else if (nota>=30) {
		printf("Nota aceptable.\n");
	} else {
		printf("Reprobado.\n");
	}
	
	return 0;
}
