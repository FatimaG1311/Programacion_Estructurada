/**
 * @file Promedio.cpp
 * @brief Definición del programa Promedio para el cálculo del promedio de un rango de números.
 * @date 2026-06-14
 * @author Fátima Guadalupe Castañeda Robledo
 * @copyright Copyright (c) 2026
 */
#include <iostream>
using namespace std;

/**
 * @brief Función principal del programa.
 * * El programa solicita al usuario que ingrese un número inicial y un número final, y luego calcula el promedio de todos los números enteros entre esos dos números (inclusive).
 * * Se utiliza una estructura de control if para verificar si el número inicial es mayor que el número final. Si es así, se intercambian los valores para asegurarse de que el programa funcione correctamente independientemente del orden en que se ingresen los números.
 * * Se utiliza un bucle while para iterar a través de los números entre el número inicial y el número final, sumando cada número a una variable de suma y contando cuántos números se han sumado.
 * * Después de la iteración, se verifica si se han sumado números (es decir, si el contador es mayor que 0) para evitar una división por cero al calcular el promedio. Si se han sumado números, se calcula el promedio dividiendo la suma total por el contador.
 * * Finalmente, se muestra el resultado del promedio al usuario.
 */
int main() {
    /**
     * @brief Ingreso de datos por parte del usuario.
     * * Se muestra un mensaje solicitando al usuario que ingrese un número inicial y un número final para calcular el promedio de los números entre ellos.
     * * Se utiliza la función cin para almacenar los valores ingresados por el usuario en las variables num1 y num2, que representan el número inicial y el número final, respectivamente.
     * * @param num1 almacena el número inicial ingresado por el usuario.
     * * @param num2 almacena el número final ingresado por el usuario.
     */
    int num1, num2;
    cout << "Ingrese el numero inicial: ";      // Pide al usuario que ingrese 2 numeros
    cin >> num1;
    cout << "Ingrese el numero final: ";
    cin >> num2;

    /**
     * @brief Verificación y corrección del orden de los números.
     * * Se verifica si el número inicial es mayor que el número final. 
     * * Si es así, se intercambian los valores para asegurarse de que el programa funcione correctamente independientemente del orden en que se ingresen los números.
     */
    if (num1 > num2) {           // Revisa si no se agregaron los numeros correctamente
        swap(num1, num2);        // Si ese es el caso, se intercambian los valores de las variables
    }

    /**
     * @brief Cálculo de la suma y el contador.
     * * Se inicializan las variables suma y cont para almacenar la suma de los números y el contador de los números sumados, respectivamente.
     * * Se utiliza un bucle while para recorrer los números entre num1 y num2, sumándolos y contándolos.
     */
    int suma = 0, cont = 0, i = num1;
    while (i <= num2) {
        suma += i;              // Suma el numero actual
        cont += 1;              // Cuenta el numero sumado
        i++;                    // Avanza al siguiente numero
    }

    /**
     * @brief Cálculo del promedio.
     * * Se inicializa la variable prom para almacenar el promedio de los números.
     * * Se verifica si el contador (cont) es mayor que cero para evitar la división por cero.
     * * Si el contador es mayor que cero, se calcula el promedio dividiendo la suma entre el contador.
     */
    float prom;
    if (cont > 0) {            // Revisa si existe algun valor en la variable contador (cont)
        prom = (float)suma / cont;     // Si ese es el caso, entonces calcula el promedio
    }
    cout << "El promedio de los numeros entre " << num1 << " y " << num2 << " es: " << prom;
    return 0;
}