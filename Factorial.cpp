/**
 * @file Factorial.cpp
 * @brief Definición del programa Factorial para el cálculo del factorial de un número.
 * @date 2026-06-14
 * @author Fátima Guadalupe Castañeda Robledo
 * @copyright Copyright (c) 2026
 */
#include <iostream>
using namespace std;

/**
 * @brief Función principal del programa.
 * * El programa solicita al usuario que ingrese un número entero positivo y calcula su factorial utilizando un bucle while.
 * * Se utiliza una variable de tipo long long para almacenar el resultado del factorial, ya que el factorial de números grandes puede exceder el rango de un entero normal.
 * * El programa también incluye una validación para asegurarse de que el número ingresado sea positivo, ya que el factorial no está definido para números negativos.
 * * Si el número ingresado es negativo, se muestra un mensaje de error indicando que el factorial no está definido para números negativos. 
 * * Si el número es positivo, se calcula el factorial y se muestra el resultado al usuario.
 */
int main() {
    int num;
    long long factorial = 1;
    cout << "Introduce un numero entero positivo: "; 
    cin >> num;

    /**
     * @brief Cálculo del factorial.
     * * Se utiliza una estructura de control if-else para verificar si el número ingresado es negativo o no.
     * * Si el número es negativo, se muestra un mensaje de error indicando que el factorial no está definido para números negativos.
     * * Si el número es positivo, se utiliza un bucle while para calcular el factorial. El bucle se ejecuta mientras el contador (i) sea mayor que 1, multiplicando el valor actual del factorial por el contador y luego decrementando el contador en cada iteración.
     * * Finalmente, se muestra el resultado del factorial al usuario.
     * * El uso de long long para la variable factorial permite manejar resultados de factoriales de números más grandes, aunque es importante tener en cuenta que el factorial de números muy grandes puede exceder incluso el rango de long long.
     * @note El programa asume que el usuario ingresará un número entero. Si se ingresa un valor no entero, el comportamiento del programa no está definido y podría resultar en un error de entrada.
     */
    if (num < 0) {  
        cout << "El factorial no esta definido para numeros negativos." << endl; 
    } 
    else { 
        int i = num; 
        while (i > 1) {
            factorial *= i;  
            i--;
        }
        cout << "El factorial de " << num << " es: " << factorial << endl; 
    }
    return 0;
}