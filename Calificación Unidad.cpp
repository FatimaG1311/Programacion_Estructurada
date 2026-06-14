/**
 * @file Calificación Unidad.cpp
 * @brief Definición del programa Calificación Unidad para la gestión de calificaciones.
 * @date 2026-06-14
 * @author Fátima Guadalupe Castañeda Robledo
 * @copyright Copyright (c) 2026
 */
#include <stdio.h>
#include <iostream>
using namespace std;

/**
 * @brief Se definen las variables necesarias para calcular la calificación final de un estudiante en una unidad, incluyendo las calificaciones de trabajo en equipo, portafolio, examen y porcentaje de asistencias.
 * * Se definen las variables finales como float (decimal) para almacenar los resultados de los cálculos de porcentaje.
 * * Se definen las variables de entrada como int (entero) para almacenar las calificaciones y el porcentaje de asistencias ingresados por el usuario.
 */
int main() {
    float final_class, final_port, final_exam, cal_final; 
    int unidad, classwork, portafolio, examen, asist; 
    /**
     * @brief Ingreso de datos por parte del usuario.
     * * Se muestra un mensaje solicitando al usuario que ingrese la unidad a evaluar, las calificaciones de trabajo en equipo, portafolio, examen y el porcentaje de asistencias.
     * * @param unidad almacena la unidad a evaluar.
     * * @param classwork almacena la calificación de Trabajo en Equipo.
     * * @param portafolio almacena la calificación de Portafolio.
     * * @param examen almacena la calificación de Examen.
     * * @param asist almacena el porcentaje de Asistencias.
     * * Se utiliza la función cin para almacenar los valores ingresados por el usuario en las variables correspondientes.
     * * * Se especifica que las calificaciones deben ser ingresadas en una escala del 1 al 100, y el porcentaje de asistencias también debe ser ingresado en una escala del 1 al 100.
     */
    cout << "Ingresa la unidad a evaluar: ";
    cin >> unidad;
    cout << "Ingresa la calificacion de Trabajo en Equipo (1-100): ";
    cin >> classwork;
    cout << "Ingresa la calificacion de Portafolio (1-100): ";
    cin >> portafolio;
    cout << "Ingresa la calificacion de Examen (1-100): ";
    cin >> examen;
    cout << "Ingresa el porcentaje de Asistencias (1-100): ";
    cin>> asist;

    /**
     * @brief Conversión de calificaciones a porcentajes y cálculo de la calificación final.
     * * Se convierten las calificaciones ingresadas por el usuario a su porcentaje definido según los criterios establecidos (30% para trabajo en equipo, 30% para portafolio y 40% para examen).
     * * Se calcula la calificación final sumando los porcentajes obtenidos de cada componente (trabajo en equipo, portafolio y examen).
     * * @param final_class almacena el resultado del cálculo del porcentaje de trabajo en equipo
     * * @param final_port almacena el resultado del cálculo del porcentaje de portafolio
     * * @param final_exam almacena el resultado del cálculo del porcentaje de examen
     * * @param cal_final almacena la calificación final del estudiante
     */
    final_class = (classwork * 30) / 100;
    final_port = (portafolio * 30) / 100;  
    final_exam = (examen * 40) / 100; 
    cal_final = final_class + final_port + final_exam;
    
    /**
     * @brief Evaluación de la aprobación del estudiante según sus calificaciones y asistencias.
     * * Se evalúa si las calificaciones de trabajo en equipo, portafolio y examen son mayores o iguales a los umbrales establecidos (15 para trabajo en equipo y portafolio, 20 para examen).  
     */
    if (final_class >= 15 && final_port >= 15 && final_exam >= 20) {
        /**
         * @brief Evaluación de las asistencias del estudiante.
         * * Se evalúa si el porcentaje de asistencias del estudiante es mayor o igual al umbral establecido (80%).
         * * Si el estudiante cumple con el requisito de asistencias, se evalúa si la calificación final es mayor o igual al umbral establecido (70%).
         * * Si el estudiante cumple con ambos requisitos (asistencias y calificación final), se muestra un mensaje indicando que el estudiante aprueba la unidad con su calificación final.
         * * Si el estudiante no cumple con el requisito de calificación final, se muestra un mensaje indicando que el estudiante no aprueba la unidad debido a calificaciones insuficientes.
         * * Si el estudiante no cumple con el requisito de asistencias, se muestra un mensaje indicando que el estudiante no aprueba la unidad debido a bajas asistencias.
         */
        if (asist >= 80) {
            cout << "El estudiante SI aprueba la unidad con una calificacion final de: " << cal_final; 
            return 0;
            if (cal_final >= 70) {   
                cout << "El estudiante SI aprueba la unidad con una calificacion final de: " << cal_final; 
            } 
            else {
                cout << "El estudiante NO aprueba la unidad debido a calificaciones insuficientes.";  
            }
        }
        else {
            cout << "El estudiante NO aprueba la unidad debido a bajas asistencias.";  
        }
    }
    else {
        cout << "El estudiante NO aprueba la unidad debido a calificaciones insuficientes.";     
    }
}