#include <stdio.h>
int main (int argc, char* argv[]){
	printf("Cantidad de parametros recibidos: %d\n", argc-1);
	return 0;
}
//Si lo ejecuto ./parametros hola
//Cantidad de parametros recibidos: 1
//Si ejecuto: ./parametros cada palabra es un argumento distinto
//Cantidad de parametros recibidos: 6
