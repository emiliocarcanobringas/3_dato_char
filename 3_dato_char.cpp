/*Tipos de datos b�sicos de C++
Este es un programa que nos muestra el uso de la
constante de tipo char o charater (caracter) en el
ejemplo usamos letras*/

#include<iostream>//Librer�a est�ndar de entrada o salida de datos
# include <locale.h> //Librer�a est�ndar de localizaci�n (regionalizaci�n)

using namespace std;//Damos acceso al espacio de nombres

int main(){ //Inicio del programa
setlocale(LC_CTYPE, "Spanish"); //Llamamos a la librer�a est�ndar y colocamos el valor de manejo de caracteres 

	char letra = '�';//definiendo la constante cout<<letra;//imprime la constante
		
		return 0;//Fin del programa
}

/*Este c�digo fue escrito por Emilio Carca�o Bringas */
