#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
	int arg1 = atoi(argv[1]);
	float arg2 = atof(argv[2]);
	char* arg3 = argv[3];
	printf("Argumento 1 = %d\nArgumento 2 = %2.1f\nArgumento 3 = %s\n",arg1,
		arg2,arg3);
	return 0;
}
//Argumento 1 = 184
//Argumento 2 = 35.3
//Argumento 3 = jilguero
