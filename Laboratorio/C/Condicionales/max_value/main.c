#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int x = 300;
	int y = 400;
	int Valor_maximo;
	
	Valor_maximo = (x > y) ? x : y;
	printf("El valor maximo es:%d.",Valor_maximo);
	
	return 0;
}
