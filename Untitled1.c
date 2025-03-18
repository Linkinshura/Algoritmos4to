#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int suma (int x, int y) {
	return x + y;
}

int resta (int x, int y) {
	return x - y;
}

int multiplicacion (int x, int y) {
	return x * y;
}

double resto (int x, int y) {
	return x % y;
}

double division (int x, int y) {
	return x / y;
}

double potencia (int x, int y) {
	return pow(x, y);
}


int menu () {
	printf("Elegir la operacion a realizar");
	printf("1. Suma");
	printf("2. Resta");
	printf("3. Multiplicacion");
	printf("4. Resto");
	printf("5. Division");
	printf("6. Potencia");
	printf("0. Salir");
return 0;
}

int main () {
Menu();
double x, y;
int opcion;
printf("Ingrese la opcion a elegir:");
scanf("%d", &opcion);
printf("Ingrese los numeros para utilizar:");
scanf("%2f", &x);
printf("\n");
scanf("%2f", &y);

switch (opcion) {
	case 1:
		suma (x, y);
		break;
	case 2:
		resta(x,y);
		break;
	case 3:
		multiplicacion(x, y);
		break;
	case 4:
		resto(x, y);
		break;
	case 5:
		dividir(x,y);
		break;
	case 6:
		potencia(x,y);
		break;
	default:
		return 1;
		break;
	}
	return 0;
}
