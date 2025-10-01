#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int Nota = 35;
	
	if(Nota>=50) {
		printf("Excelente.\n");
	} else if(Nota>=40) {
		printf("Bien.\n");
	} else if (Nota>=30) {
		printf("Aceptable.\n");
	} else {
		printf("Reprobado.\n");
	}
	return 0;
}
