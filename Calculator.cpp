/**
 * @file Calculator.cpp
 * @brief Definición del programa Calculator para la gestión de operaciones matemáticas.
 * @date 2026-06-14
 * @author Fátima Guadalupe Castañeda Robledo
 * @copyright Copyright (c) 2026
 */
#include <stdio.h>

/**
 * @brief Se definen las variables de los dos numeros y la opcion como int (entero).
 * * Se definen las variables de los dos numeros y la opcion como int (entero).
 * * Se define la variable del resultado final (variable Total) como float (decimal) para que pueda mostrar decimales en caso de ser necesario.
 */
int Num1, Num2, Op;
float Total;
int main() {
	/**
	 * @brief Ingreso de datos por parte del usuario.
	 * * Se muestra un mensaje solicitando al usuario que ingrese dos números para realizar las operaciones (Num1 y Num2).
	 * * Se utiliza la función scanf para almacenar los valores ingresados por el usuario en las variables correspondientes.
	 */
	printf("Ingrese un numero: ");
	scanf("%d", &Num1);
	printf("Ingrese otro numero: ");
	scanf("%d", &Num2);

	/**
	 * @brief Menu de operaciones.
	 * * Se muestra un menú con las operaciones disponibles (Suma, Resta, Multiplicación y División) y se le pide al usuario seleccionar la operación que desea realizar ingresando el número correspondiente (1, 2, 3 o 4).
	 * * Se utiliza la función scanf para almacenar el valor ingresado por el usuario en la variable Op, que se utilizará posteriormente para determinar qué operación realizar.
	 */
    printf("----- OPERACIONES ----- \n");
	printf("1 = Suma \n");
	printf("2 = Resta \n");
	printf("3 = Multiplicacion \n");
	printf("4 = Division \n");
	/**
	 * @brief Selección de la operación a realizar.
	 * * Se muestra un mensaje solicitando al usuario que seleccione la operación que desea realizar.
	 * * Se utiliza la función scanf para almacenar el valor ingresado por el usuario en la variable Op, que se utilizará posteriormente para determinar qué operación realizar.
	 */
	printf("Seleccione la operacion que desea realizar: ");
	scanf("%d", &Op);
    
	switch (Op) {
		/**
		 * @brief Case 1: Realiza la operación 1 (Suma).
		 * * @param Total es la variable donde se almacena el resultado de la operación.
		 * * @param Num1 es la variable donde se almacena el primer número ingresado por el usuario.
		 * * @param Num2 es la variable donde se almacena el segundo número ingresado por el usuario.
		 * * Imprimir el resultado (Total).
		 * * Break: Se utiliza para salir del switch después de ejecutar el caso correspondiente, evitando que se ejecuten los casos siguientes de manera accidental.
		 */
		case 1:
			Total = Num1 + Num2;
			printf("Resultado: %.2f", Total);
			break;
		/**
		 * @brief Case 2: Realiza la operación 2 (Resta).
		 * * @param Total es la variable donde se almacena el resultado de la operación.
		 * * @param Num1 es la variable donde se almacena el primer número ingresado por el usuario.
		 * * @param Num2 es la variable donde se almacena el segundo número ingresado por el usuario.
		 * * Imprimir el resultado (Total).
		 * * Break: Se utiliza para salir del switch después de ejecutar el caso correspondiente, evitando que se ejecuten los casos siguientes de manera accidental.
		 */
		case 2:
			Total = Num1 - Num2;
			printf("Resultado: %.2f", Total);
			break;
		/**
		 * @brief Case 3: Realiza la operación 3 (Multiplicación).
		 * * @param Total es la variable donde se almacena el resultado de la operación.
		 * * @param Num1 es la variable donde se almacena el primer número ingresado por el usuario.
		 * * @param Num2 es la variable donde se almacena el segundo número ingresado por el usuario.
		 * * Imprimir el resultado (Total).
		 * * Break: Se utiliza para salir del switch después de ejecutar el caso correspondiente, evitando que se ejecuten los casos siguientes de manera accidental.
		 */
		case 3:
			Total = Num1 * Num2;
			printf("Resultado: %.2f", Total);
			break;
		/**
		 * @brief Case 4: Realiza la operación 4 (División).
		 * * @param Total es la variable donde se almacena el resultado de la operación.
		 * * @param Num1 es la variable donde se almacena el primer número ingresado por el usuario.
		 * * @param Num2 es la variable donde se almacena el segundo número ingresado por el usuario.
		 * * Imprimir el resultado (Total).
		 * * Break: Se utiliza para salir del switch después de ejecutar el caso correspondiente, evitando que se ejecuten los casos siguientes de manera accidental.
		 */
		case 4:
			/**
			 * @brief El caso de la división requiere una validación adicional para evitar errores de división por cero.
			 * * @param Num2 es la variable donde se almacena el segundo número ingresado por el usuario.
			 * * If: Antes de realizar la división, se debe revisar si el segundo número (Num2) es igual a 0, ya que no se puede dividir por cero. 
			 * * Si ese es el caso, se muestra un mensaje de error. 
			 * * Else: Si el segundo número no es 0, se continúa con la operación y se muestra el resultado.
			 */
            if (Num2 == 0) {
                printf("ERROR: No se puede dividir por cero.");
            } 
            else { 
                Total = Num1 / Num2;
                printf("Resultado: %.2f", Total);
            }
			break;
		/**
		 * @brief Default: En caso de ingresar un valor incorrecto (variable Op).
		 * * Se muestra un mensaje de error indicando que el valor ingresado es incorrecto y se solicita al usuario ingresar un número del 1 al 4 para seleccionar una operación válida.
		 * * Break: Se utiliza para salir del switch después de ejecutar el caso correspondiente, evitando que se ejecuten los casos siguientes de manera accidental.
		 */
		default:
			printf("VALOR INCORRECTO. Ingrese un numero del 1 al 4.");
			break;
	}
}