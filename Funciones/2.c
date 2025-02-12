/*
 * 2. Escribir una función en C, saludar() que imprima un saludo en pantalla. La función debe aceptar un argumento
de tipo string e imprimir Hola, <arg>. Por ejemplo, la llamada a saludar("Juan") imprime Hola, Juan.

 * */

 #include <stdio.h>
 #include <stdlib.h>

int saludar(int argc, char *argv[]) {
	char *nombre = atoi(argv[1]);

	printf("Hola, %s\n", nombre);
	
}

int main() {
	saludar();
	return 0;
}

