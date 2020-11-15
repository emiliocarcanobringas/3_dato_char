/*Tipos de datos básicos de C++
Este es un programa que nos muestra el uso de la
constante de tipo char o charater (caracter) en el
ejemplo usamos letras*/

#include<iostream>//Librería estándar de entrada o salida de datos
# include <locale.h> //Librería estándar de localización (regionalización)

using namespace std;//Damos acceso al espacio de nombres

int main(){ //Inicio del programa
setlocale(LC_CTYPE, "Spanish"); //Llamamos a la librería estándar y colocamos el valor de manejo de caracteres 

	char letra = 'á';//definiendo la constante cout<<letra;//imprime la constante
		
		return 0;//Fin del programa
}

/*Este código fue escrito por Emilio Carcaño Bringas */
