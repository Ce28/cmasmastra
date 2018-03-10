//Tipos de variables y definicion
int entero = 0;
float decimal = 0.0;
char cadena[40] = "Hola"; //Cadena de caracteres
int sueldos[5];         //Vector de 5 casillas este puede ser de cualqioer tipo.

//Importar librerias de funciones y objetos contenidos eb otros archivos
#include<iostream>

//Imprimir en pantalla cmd
cout << "Esto aparecera en la pantalla.";   //Aparece lo que esta entre comillas
cout << "\n"                                //Efectua un salto de linea en el cmd
cout << entero;                             //Muestra el valor de la variable

//Asignar un valor introducido por teclado
cin >> entero;      //Se asigna a la variable entero.

//Asignar un valor por operacion
entero = decimal * 5;

//Detener la ejecucion en la pantalla cmd (pausar) hasta que presione algo.
cin.get();      //Esto porque el primero toma la tecla ENTER
cin.get();      //Este pausa la ejecucion permitinedo ver los resultados

//Operadores relacionales
//  >   MAYOR
//  <   MENOR
//  >=  MAYOR O IGUAL
//  <=  MENOR O IGUAL
//  ==  IGUAL
//  !=  DISTINTO

//Operadores matematicos
//  +   MAS
//  -   MENOS
//  *   PRODUCTO
//  /   DIVISION
//  %   RESTO DE UNA DIVISION

//Operadores logicos
//  &&  Y
//  ||  O

//Estructura condicional simple
if (entero < 5)
{
    //Se ejecuta si es verdadera la condicion
}

//Estructura condicional compuesta
if (entero < 5)
{
    //Se ejecuta si es verdadera la condicion
}
else
{
    //Se ejecuta si es falsa la condicion
}

//Estrucura condicional anidada
if (entero < 5)
{
    //Se ejecuta si es verdadera la condicion
}
else
{
    //Se ejecuta si es falsa la condicion
    if (decimal < 5)
    {
        //Se ejecuta si es verdadera la condicion
    }
}

//Estructura repetitiva while
int x = 0;      //Contador aumento o decremento constante
                //Acumulador es cuando una variable incrementa no continuamente
while (x < 11)
{
    //Todas las instrucciones que se repiten
    x = x + 1;    
}

//Estructura repetitiva for
for (int i = 1; i >= 10; i++)
{
    //Instrucciones que se ejecutaran
}

//Estructura repetitiva dowhile
do
{
    //Instrucciones que se ejecutaran
}while(entero != 0);

//Cadena de caracteres
char cadena1[20] = "Mi Cadena";
        //ó
char cadena1[20];
cin.getline(cadena1, 40);   //De esta forma asignamos una cadena desde el teclado

//Comparar cadenas
int strcmp(cadena1, cadena2);   
//retorna 0 si son iguales
//mayor a 0 si la primera(cadena1) es mayor alfabeticamente
//y menor en caso contrario

//Clases y metodos de la clase (ejemplo)
#include <iostream>
using namespace std;
class Persona {
private:
    char nombre[40];        //Atributos
    int edad;
public:
    void inicializar();     //Metodos
    void imprimir();
};

void Persona::inicializar()
{
    //Cosas que realizara el metodo de persona en el metodo inicializar.
}

void Persona::imprimir()
{    
    //Cosas que realizara el metodo de persona en el metodo imprimir.
}

void main()
{
        Persona persona1;           //Objeto de la clase
        persona1.inicializar();     //Llamada al metodo de la clase
        persona1.imprimir();        //Llamada al metodo de la clase
}

//Metodos con parametros (ejemplo)
#include <iostream>
using namespace std;
class Persona {
private:
    char nombre[40];        //Atributos
    int edad;
public:
    void inicializar(char nom[40]);     //Metodos con parametro
    void imprimir();
};

void Persona::inicializar(char nom[40])
{
    //Cosas que realizara el metodo de persona en el metodo inicializar.
}

void Persona::imprimir()
{    
    //Cosas que realizara el metodo de persona en el metodo imprimir.
}

void main()
{        
        char nombre[40] = "Elizabeth";
        Persona persona1;           //Objeto de la clase
        persona1.inicializar(nombre);     //Llamada al metodo de la clase
        persona1.imprimir();        //Llamada al metodo de la clase
}

//Metodos que retornan datos (ejemplo)
#include <iostream>
using namespace std;
class Persona {
private:
    char nombre[40];        //Atributos
    int edad;
public:
    void inicializar(char nom[40]);     //Metodos con parametro
    char* imprimir();
};

void Persona::inicializar(char nom[40])
{
    //Cosas que realizara el metodo de persona en el metodo inicializar.
}

void Persona::imprimir()
{    
    //Cosas que realizara el metodo de persona en el metodo imprimir.
}

void main()
{        
        char nombre[40] = "Elizabeth";
        char imp[40];
        Persona persona1;           //Objeto de la clase
        persona1.inicializar(nombre);     //Llamada al metodo de la clase
        imp = persona1.imprimir();        //Llamada al metodo de la clase
        cout << imp;
}
