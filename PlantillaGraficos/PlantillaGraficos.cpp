// PlantillaGraficos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//


#include <stdio.h> 
#include <stdlib.h> 
#define GLEW_STATIC 
 
#include"include/GL/glew.h"
#include "include/GLFW/glfw3.h"

#include <iostream> 

using namespace std;

//$(ProjectDir)include 
int main()
{
	//Declarar una ventana 
	GLFWwindow* window;


	//Si no se pudo inicializar GLFW 
	//Terminamos Ejecución 
	if (!glfwInit()) {
		exit(EXIT_FAILURE);
	}
	window = glfwCreateWindow(800, 600, "Ventana", NULL, NULL);
	
	//Si no se pudo crear la ventana
	//Terminamos ejecución
	if (!window) {
		glfwTerminate();
		exit(EXIT_FAILURE);
	}
	//Si se pudo inicializar GLFW
	//Inicializams la ventana


	//Establecemos la ventana como contexto
	glfwMakeContextCurrent(window);
	//Clilo de dibujo (Draw loop)
	while (!glfwWindowShouldClose(window)) {
		//Establecer región de dibujo 
		glViewport(0, 0, 800, 600);
		//Establecemos el color de borrado
		//Establecemos el color de borrado
		glClearColor(1, 0.2, 0.5, 1);
		//Borrar
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		// Actualizar los valores y dibujar 
		glfwSwapBuffers(window);
	}
	//Despues del ciclo de dibujo Eliminamos ventana y procesos de glfw
	glfwDestroyWindow(window);
	glfwTerminate();
}
