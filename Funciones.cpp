/**
 * @file Funciones.cpp
 * @brief Definición del programa Funciones para el cálculo de funciones especiales.
 * @date 2026-06-14
 * @author Fátima Guadalupe Castañeda Robledo
 * @copyright Copyright (c) 2026
 */
#include <stdio.h>

/**
 * @brief Función principal del programa.
 * * Se definen las variables necesarias para el cálculo de las funciones especiales, incluyendo la variable Op para seleccionar la función a calcular, y las variables x, m, a, b, c, d y result para almacenar los valores de entrada y el resultado de la función.
 * * * Las variables x, m, a, b, c, d y result se definen como float (decimal) para permitir el ingreso de valores con decimales y para almacenar los resultados de las funciones que pueden ser decimales.
 * * * La variable Op se define como int (entero) para permitir la selección de la función a calcular mediante un menú de opciones.
 */
int Op;
float x, m, a, b, c, d, result = 0; 
void main() {
    /**
     * @brief Menu de funciones especiales.
     * * Se muestra un menú con las funciones especiales disponibles (Triangular, Gamma, Trapezoidal y Función S) y se le pide al usuario seleccionar la función que desea calcular ingresando el número correspondiente (1, 2, 3 o 4).
     * * Se utiliza la función scanf para almacenar el valor ingresado por el usuario en la variable Op, que se utilizará posteriormente para determinar qué función calcular.
     * * * El menú se muestra utilizando la función printf, y se especifica que el usuario debe ingresar un número del 1 al 4 para seleccionar la función deseada.
     */
    printf("----- FUNCIONES ----- \n"); 
	printf("1 = Triangular \n");
	printf("2 = Gamma \n");
	printf("3 = Trapezoidal \n");
	printf("4 = Funcion S \n");
	printf("Seleccione la funcion que desea realizar: "); 
	scanf("%d", &Op);

    switch (Op) {
        /**
         * @brief Case 1: Realiza el cálculo de la función Triangular.
         * * Se solicitan al usuario los valores de x, a, m y b necesarios para el cálculo de la función Triangular.
         * * Se utilizan estructuras de control if-else para evaluar las condiciones necesarias para calcular el resultado de la función Triangular, que se almacena en la variable result.
         * * El resultado de la función se muestra al usuario utilizando la función printf, y se especifica que el resultado se muestra con dos decimales utilizando el formato %.2f.
         * * Break: Se utiliza para salir del switch después de ejecutar el caso correspondiente, evitando que se ejecuten los casos siguientes de manera accidental.  
         * * @note El programa asume que el usuario ingresará valores numéricos válidos para x, a, m y b. Si se ingresan valores no numéricos o si se ingresan valores que no cumplen con las condiciones necesarias para el cálculo de la función Triangular, el comportamiento del programa no está definido y podría resultar en un error de entrada o en resultados incorrectos.
         */
        case 1:   // Función Triangular
            printf("Ingrese el valor de x: ");
            scanf("%f", &x);
            printf("Ingrese el valor de a: ");
            scanf("%f", &a);
            printf("Ingrese el valor de m: ");
            scanf("%f", &m);
            printf("Ingrese el valor de b: ");
            scanf("%f", &b);

            if (x <= a || x > b) {         // Condicion #1
                printf("El resultado de la funcion es igual a 0");
            }
            else if (x > a && x <= m) {     // Condicion #2
                result = (x - a) / (m - a);
                printf("El resultado de la funcion es igual a %.2f", result);
            }
            else if (x > m && x <= b) {   // Condicion #3
                result = (b - x) / (b - m);
                printf("El resultado de la funcion es igual a %.2f", result);            
            }
            break;
        /**
         * @brief Case 2: Realiza el cálculo de la función Gamma.
         * * Se solicitan al usuario los valores de x, a y m necesarios para el cálculo de la función Gamma.
         * * Se utilizan estructuras de control if-else para evaluar las condiciones necesarias para calcular el resultado de la función Gamma, que se almacena en la variable result.
         * * El resultado de la función se muestra al usuario utilizando la función printf, y se especifica que el resultado se muestra con dos decimales utilizando el formato %.2f.
         * * Break: Se utiliza para salir del switch después de ejecutar el caso correspondiente, evitando que se ejecuten los casos siguientes de manera accidental.  
         * * @note El programa asume que el usuario ingresará valores numéricos válidos para x, a y m. Si se ingresan valores no numéricos o si se ingresan valores que no cumplen con las condiciones necesarias para el cálculo de la función Gamma, el comportamiento del programa no está definido y podría resultar en un error de entrada o en resultados incorrectos.
         * * @note La función Gamma es una función de membresía utilizada en lógica difusa para representar la pertenencia de un valor a un conjunto difuso. El resultado de la función Gamma puede ser 0, un valor entre 0 y 1, o 1, dependiendo de las condiciones evaluadas en el programa.
         */
        case 2:   // Función Gamma
            printf("Ingrese el valor de x: "); 
            scanf("%f", &x);
            printf("Ingrese el valor de a: ");
            scanf("%f", &a);
            printf("Ingrese el valor de m: ");
            scanf("%f", &m);

            if (x <= a) {         // Condicion #1
                printf("El resultado de la funcion es igual a 0");
            }
            else if (a < x && x < m) {    // Condicion #2
                result = (x - a) / (m - a);
                printf("El resultado de la funcion es igual a %.2f", result);
            }
            else if (x >= m) {   // Condicion #3
                printf("El resultado de la funcion es igual a 1");
            }
            break;
        /**
         * @brief Case 3: Realiza el cálculo de la función Trapezoidal.
         * * Se solicitan al usuario los valores de x, a, b, c y d necesarios para el cálculo de la función Trapezoidal.
         * * Se utilizan estructuras de control if-else para evaluar las condiciones necesarias para calcular el resultado de la función Trapezoidal, que se almacena en la variable result.
         * * El resultado de la función se muestra al usuario utilizando la función printf, y se especifica que el resultado se muestra con dos decimales utilizando el formato %.2f.
         * * * Break: Se utiliza para salir del switch después de ejecutar el caso correspondiente, evitando que se ejecuten los casos siguientes de manera accidental.  
         * * @note El programa asume que el usuario ingresará valores numéricos válidos para x, a, b, c y d. Si se ingresan valores no numéricos o si se ingresan valores que no cumplen con las condiciones necesarias para el cálculo de la función Trapezoidal, el comportamiento del programa no está definido y podría resultar en un error de entrada o en resultados incorrectos.
         * * @note La función Trapezoidal es una función de membresía utilizada en lógica difusa para representar la pertenencia de un valor a un conjunto difuso. El resultado de la función Trapezoidal puede ser 0, un valor entre 0 y 1, o 1, dependiendo de las condiciones evaluadas en el programa.  
         */
        case 3:   // Función Trapezoidal
            printf("Ingrese el valor de x: ");
            scanf("%f", &x);
            printf("Ingrese el valor de a: ");
            scanf("%f", &a);
            printf("Ingrese el valor de b: ");
            scanf("%f", &b);
            printf("Ingrese el valor de c: ");
            scanf("%f", &c);
            printf("Ingrese el valor de d: ");
            scanf("%f", &d);

            if (x <= a || x > d) {      // Condicion #1
                printf("El resultado de la funcion es igual a 0");
            }
            else if (a < x && x <= b) {      // Condicion #2
                result = (x - a) / (b - a);
                printf("El resultado de la funcion es igual a %.2f", result);
            }
            else if (b < x && x <= c) {      // Condicion #3
                printf("El resultado de la funcion es igual a 1");
            }
            else if (c < x && x <= d) {      // Condicion #4
                result = (d - x) / (b - c);
                printf("El resultado de la funcion es igual a %.2f", result);
            }
            break;
        /**
         * @brief Case 4: Realiza el cálculo de la función S.
         * * Se solicitan al usuario los valores de x, a y c necesarios para el cálculo de la función S.
         * * Se utilizan estructuras de control if-else para evaluar las condiciones necesarias para calcular el resultado de la función S, que se almacena en la variable result.
         * * El resultado de la función se muestra al usuario utilizando la función printf, y se especifica que el resultado se muestra con dos decimales utilizando el formato %.2f.
         * * Break: Se utiliza para salir del switch después de ejecutar el caso correspondiente, evitando que se ejecuten los casos siguientes de manera accidental.  
         * * @note El programa asume que el usuario ingresará valores numéricos válidos para x, a y c. Si se ingresan valores no numéricos o si se ingresan valores que no cumplen con las condiciones necesarias para el cálculo de la función S, el comportamiento del programa no está definido y podría resultar en un error de entrada o en resultados incorrectos.
         * * @note La función S es una función de membresía utilizada en lógica difusa para representar la pertenencia de un valor a un conjunto difuso. El resultado de la función S puede ser 0, un valor entre 0 y 1, o 1, dependiendo de las condiciones evaluadas en el programa.  
         */
        case 4:   // Función S 
            printf("Ingrese el valor de x: ");
            scanf("%f", &x);
            printf("Ingrese el valor de a: ");
            scanf("%f", &a);
            printf("Ingrese el valor de c: ");
            scanf("%f", &c);

            if (x < a) {         // Condicion #1
                printf("El resultado de la funcion es igual a 0");
            }
            else if (a <= x && x <= (a + c) / 2) {      // Condicion #2
                result = 2 * ((x - a) * (x - a)) / (c - a);
                printf("El resultado de la funcion es igual a %.2f", result);
            }
            else if (((a + c) / 2) < x && x <= c) {      // Condicion #3
                result = 1 - (2 * ((x - a) * (x - a)) / (c - a));
                printf("El resultado de la funcion es igual a %.2f", result);
            }
            else if (x > c) {      // Condicion #4
                printf("El resultado de la funcion es igual a 1");
            }
            break;
        /**
         * @brief Default: Manejo de entrada incorrecta.
         * * En caso de que el usuario ingrese un valor para Op que no corresponda a ninguna de las opciones del menú (1, 2, 3 o 4), se muestra un mensaje de error indicando que el valor ingresado es incorrecto y se solicita al usuario que ingrese un número del 1 al 4 para seleccionar una función válida.
         * * Break: Se utiliza para salir del switch después de ejecutar el caso correspondiente, evitando que se ejecuten los casos siguientes de manera accidental.  
         * * @note El programa asume que el usuario ingresará un número entero para seleccionar la función a calcular. Si se ingresa un valor no entero o si se ingresa un número que no corresponde a ninguna de las opciones del menú, el comportamiento del programa no está definido y podría resultar en un error de entrada o en la necesidad de reiniciar el programa para ingresar una opción válida.   
         */
        default:
            printf("VALOR INCORRECTO. Ingrese un numero del 1 al 4.");
			break;
    }
}