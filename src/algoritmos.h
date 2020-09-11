//============================================================================
// Name        : algoritmos.h
// Author      : Profesores de la asignatura EDI
// Version     : 2019/20
// Copyright   : Your copyright notice
// Description : clase para realizar algoritmos del proyecto
//============================================================================


#ifndef ALGORITMOS_H_
#define ALGORITMOS_H_

#include <iostream>
#include <fstream>
using namespace std;

#include "listapi.h"
#include "Barrio.h"
#include "Bar.h"
#include "cola.h"
#include "bstree.h"
#include "pila.h"

class Algoritmos {

private:
    
	ListaPI <Barrio*> *CjtoBarrios;
	ListaPI <Bar*> *CjtoBares;

	// Segunda entrega
	BSTree <KeyValue<string,Bar*>> *arbolBares;

	/*
	 * PRE = {Los ficheros deben estar dentro de la carpeta del proyecto.}
	 * POST = {Estructuras de Datos cargadas.}
	 * Descripción: Llena las estructuras con todos los datos de los ficheros.
	 * Complejidad: O(1).
	 */
	void cargarDatos();


	/*
	 * PRE = {Las Estructuras de Datos deben estar cargadas.}
	 * POST = {}
	 * Descripción: Ejecuta todos los algoritmos del proyecto.
	 * Complejidad: O(1).
	 */

	void run ();


	/*
	 * PRE = {(arbolBares -> empty () = false) && (Puntero a bar declarado)}
	 * POST = {Parámetro de salida no vacío.}
	 * Descripción: Devuelve por referencia el puntero al bar de la raíz del árbol indicado.
	 * Complejidad: O(1).
	 */

	void root (BSTree <KeyValue<string,Bar*>> *abb,Bar *&b);

	/*
	 * PRE = {(arbolBares -> empty () = false) && (Puntero a barrio declarado)}
	 * POST = {Numero de bares que tiene un barrio como parametro de entrada y salida (cont)}
	 * Descripción: Devuelve por referencia de entrada y salida el numero de bares que tiene el barrio *b
	 * Complejidad: O(n).
	 */

	void numeroBaresdeBarrio(Barrio *b,BSTree <KeyValue<string,Bar*>> *abb,int &cont);


	/*
	* PRE = {abb -> empty () = false}
	* POST = {b != nullptr}
	* Descripción: devuelve por referencia el puntero al bar indicado por el nombre.
	* Complejidad: 0(log(n)).
	*/

	bool buscarBarArbol (BSTree <KeyValue <string, Bar* >>* abb, string nombreBar, KeyValue <string, Bar*> &pair);


	/*
	* PRE = {lBares -> estaVacia () = false}
	* POST = {Cambia el punto de interés de lugar en la lista y devuelve 'true' si encuentra el bar.}
	* Descripción: Deja el punto de interés apuntando al nodo que contiene el bar indicado por el nombre.
	* Complejidad: O(n).
	*/

	bool buscarBarLista (ListaPI <Bar*>* lBares, string nombreBar, Bar* &b);


	/*
	 * PRE = {(abb -> empty () = false)}
	 * POST = {Devuelve el numero de bares en el arbol}
	 * Descripción:Devuelve el numero de bares que hay en la ED ÁRBOL Y los muestra por pantalla
	 * Complejidad: O(n).
	 */

	int mostrarArbolBares (BSTree<KeyValue<string, Bar*>> *abb);

	/*
	 * PRE = {lBares -> estaVacia () = false}
	 * POST = {}
	 * Descripción: Muestra por pantalla toda la información recogida en la lista de bares.
	 * Complejidad: O(n).
	 */

	int mostrarListaBares (ListaPI <Bar*>* lBares);


	/*
	 * PRE = {arbolBares -> empty () = false && ofstream opened}
	 * POST = {}
	 * Descripción: Genera un fichero de texto llamado "BaresInverso.txt" que contiene el nombre de los bares en orden alfabético inverso.
	 * Complejidad: O(n)
	 */

	void UnoAlgoritmo (BSTree <KeyValue <string, Bar*>>* abb, ofstream &escritura);


	/*
	 * PRE = {(arbolBares -> empty () = false) && (Parámetros de entrada no vacíos)}
	 * POST = {}
	 * Descripción: Se genera un fichero de texto que contiene todos los bares de una determinada vía por el parámetro de entrada.
	 * Complejidad: O(log (n))
	 */

	void DosAlgoritmo (BSTree <KeyValue <string, Bar*> >* abb, ofstream &escritura, Via* v, int &cont);


	/*
	 * PRE = {(abb -> empty () = false)}
	 * POST = {"bar" es un puntero al bar indicado en el nombre. La función devuleve "true" si lo encuentra.}
	 * Descripción: devuelve por referencia, dado el nombre de un bar, un puntero a dicho bar.
	 * Complejidad: O(log (n)).
	 */

	bool TresAlgoritmo (BSTree <KeyValue<string,Bar*>>* abb, string nombreBar, Bar* &bar);


	/*
	 * PRE = {(abb -> empty () = false) && (parámetro de entrada no vacío)}
	 * POST = {}
	 * Descripción: devuelve por entrada/salida una lista de punteros a bares cuyo nombre comienza por una determinada raíz.
	 * Complejidad: O (log (n)).
	 */

	void CuatroAlgoritmo (BSTree <KeyValue <string, Bar*> >* abb, string raiz,ListaPI <Bar*> *&lBares);


	/*
	* PRE = {(arbolBares -> emtpy () = CjtoBares -> estaVacia () = false) && (Parámetro de entrada 'flujo' no vacío)}
	* POST = {(arbolBares -> emtpy () = CjtoBares -> estaVacia () = false)}
	* Descripción: el contenido de las Estructuras de Datos que contienen bares ven modificados sus datos, ya sean añadiendo nuevos, borrándolos o modificando sus atributos.
	* Complejidad: O(n).
	*/

	void CincoAlgoritmo (BSTree <KeyValue <string, Bar*> >* abb, ListaPI <Bar*>* lBares, ifstream &lectura);


	/*
	 * PRE = {(abb -> empty () = false) && (Parámetros de entrada no vacíos.)}
	 * POST = {Lista de punteros a bares de la salida -> estaVacia () = false.}
	 * Descripción: genera una lista de punteros a bares que sirven un determinado tipo de comida y cuya capacidad supera a una dada.
	 * Complejidad: O(n)
	 */

	void SeisAlgoritmo (BSTree <KeyValue <string, Bar*> >* abb, string tipoComida, int capacidad, ListaPI <Bar*>* &listaBares);


	/*
	 * PRE = {(abb -> empty () = false) && (Parámetros de entrada son no vacíos.)}
	 * POST = {}
	 * Descripción: escribe en un fichero de texto los bares que pasan por las vías del barrio que más bares tiene.
	 * Complejidad: O(n).
	 */

	void SieteAlgoritmo (BSTree <KeyValue <string, Bar*> >* abb, Barrio* b, ofstream &salida);

public:

	/*
	 * PRE = {Todas las clases que están por debajo deben estar declaradas.}
	 * POST = {Reserva memoria para los atributos.}
	 * Descripción: Reserva memoria y ejecuta los algoritmos del proyecto.
	 * Complejidad: O(1).
	 */

	Algoritmos();


	/*
	 * PRE = {Todas las clases que trabajan por debajo deben estar instanciadas.}
	 * POST = {la lista de barrios se llena con los datos del fichero.}
	 * Descripción: Los barrios se almacenan en su estructura de datos en orden alfabético.
	 * Complejidad: O(n).
	 */

	void insertarOrdenBarrios (Barrio *b);


	/*
	 * PRE = {Tanto la clase Barrio como la clase Via deben estar instanciadas. (También la clase Lista).}
	 * POST = {Las listas de vías quedan cargadas de datos.}
	 * Descripción: Llena las listas de vías con los datos del fichero 'Via.csv' en orden alfabético
	 * Complejidad: O(n).
	 */

	void insertarVias (Via *b);


	/*
	 * PRE = {La clase Bares y la clase Lista deben estar instanciadas.}
	 * POST = {La lista de bares queda cargada con los datos.}
	 * Descripción: Inserta los bares del fichero 'Bar.csv' en su lista en orden alfabético.
	 * Complejidad: O(n).
	 */

	void insertarOrdenBares (Bar * bar);


	/*
	 * PRE = {cola -> estaVacia () = false}
	 * POST = {Elimina la cola que se pasa como parámetro de entrada}
	 * Descripción: Muestra y elimina la que contiene los bares que se pasa como párametro de entrada.
	 * Complejidad: O(n).
	 */

	void mostrarColaBares (Cola <Bar*> *cola);


	/*
	 * PRE = {CjtoBarrios -> estaVacia () = false}
	 * POST = {}
	 * Descripción: Muestra toda la información de la cola de los barrios.
	 * Complejidad: O(n).
	 */

	void mostrarBarrios();


	/*
	 * PRE = {CjtoBares -> estaVacia () = false}
	 * POST = {}
	 * Descripción: Muestra toda la información de la cola de bares.
	 * Complejidad: O(n).
	 */

	void mostrarListaBares();

	/*
	 * PRE = {nombreBarrio no vacio}
	 * POST = {Devuelve "true" si ha encontrado el barrio con el nombre "nombreBarrio" y devuelve como parámetro de entrada y salida el puntero a dicho
	 *         barrio. "False" si no lo encuentra.}
	 * Descripción: Devuelve el barrio de la lista de barrios como nombre el parámetro de entrada "nombreBarrio".
	 * Complejidad: O(n).
	 */


    bool busquedaBarrio(string nombreBarrio,Barrio *&b);


	/*
	 * PRE = {CjtoBarrios -> estaVacia () = false.}
	 * POST = {}
	 * Descripción: Muestra las vías contenidas en el barrio indicado como parámetro de entrada.
	 * Complejidad: O(n).
	 */

	void Algoritmo1 (string nombreBarrio);


	/*
	 * PRE = {CjtoBarrios -> estaVacia () = false}
	 * POST = {}
	 * Descripción: Muestra la vía más larga de toda la estructura de datos.
	 * Complejidad: O(n).
	 */

	void Algoritmo2 (Via *&v);


	/*
	 * PRE = {CjtoBares -> estaVacia () = false}
	 * POST = {Crea una cola con los bares que ofrecen un tipo de comida.}
	 * Descripción: Devuelve por el parámetro de salida una cola con los bares que ofrecen el tipo de comida indicada como parámetro de entrada.
	 * Complejidad: O(n).
	 */

	void Algoritmo3 (string tipoComida, Cola <Bar*> *&cola, int &numeroBares);


	 // Algoritmo  4 Parte 1:


	/*
	 * PRE = {Parámetro de entrada no vacío}
	 * POST = {}
	 * Descripción: Inserta en el árbol el puntero al bar pasado como parámetro de entrada.
	 * Complejidad: O(1).
	 */

	void insertarBar (Bar* b);

	/*
	 * PRE = {Parámetro de entrada no vacío}
	 * POST = {int = numero de bares de un barrio}
	 * Descripción:Devuelve el número de bares que tiene un barrio accediendo a los codigos de vías de los bares
	 * Complejidad: O(1).
	 */

    int numeroBaresdeBarrio(Barrio *b);


	/*
	 * PRE = {capacidad != 0 && auxBar lBares != empty}
	 * POST = {Devuelve  la lista de bares como parametro de entrada y salida}
	 * Descripción: Devuelve como parametro de entrada y salida una lista de bares ordenados de mayor a menor}
	 * Complejidad: O(n).
	 */

	void insertarListaCapacidad(ListaPI <Bar*>* &lBares, int capacidad,Bar *auxBar);

	/*
	 * PRE = {arbolBares -> empty () = false}
	 * POST = {}
	 * Descripción:Muestra en pantalla los bares en orden alfabético del arbol de bares
	 * Complejidad: O(1).
	 */

	void mostrarArbolBares();


	/*
	 * PRE = {arbolBares -> empty () = false}
	 * POST = {}
	 * Descripción: Genera un fichero de texto llamado "BaresInverso.txt" que contiene el nombre de los bares en orden alfabético inverso.
	 * Complejidad: O(1)
	 */

	void UnoAlgoritmo ();


	/*
	 * PRE = {(arbolBares -> empty () = false) && (Parámetros de entrada no vacíos)}
	 * POST = {}
	 * Descripción: Se genera un fichero de texto que contiene todos los bares de una determinada vía indicada por los parámetros de entrada.
	 * Complejidad: O(nlogn).
	 */

	bool DosAlgoritmo (string tipoVia, string nombreVia);


	/*
	 * PRE = {(arbolBares -> empty () = false) && (El parámetro de entrada es no vacío). El resto de parámetros son de salida.}
	 * POST = {"bar" es un puntero al bar con el nombre indicado, y "nombreVia" contiene el nombre de la vía a la que pertenece dicho bar. La función devuelve "true" si lo encuentra.}
	 * Descripción: Devuelve por referencia, dado el nombre de un bar, sus datos y el nombre de la vía a la que pertenece.
	 * Complejidad: O(n).Si añado la complejidad del privado, sería -> O(n+logn)
	 */

	bool TresAlgoritmo (string nombreBar, Bar *&bar, string &nombreVia);


	/*
	 * PRE = {(arbolBares -> empty () = false) && (parámetro de entrada es no vacío.)}
	 * POST = {Devuelve una lista de punteros a bares ordenados por capacidad cuyo nombre comienza por una determinada raíz como parametro de entrada
	 * y salida.}
	 * Descripción: Devuelve por referencia una lista ordenada por capacidad de punteros a bares cuyo nombre comienza por una determinada raíz.
	 * Complejidad: O(1).
	 */

	void CuatroAlgoritmo (string raiz, ListaPI <Bar*>* &listaBares);


	/*
	* PRE = {(arbolBares -> empty () = false) && (CjtoBares -> estaVacia () = false)}
	* POST = {(arbolBares -> empty () = false) && (CjtoBares -> estaVacia () = false)}
	* Descripción: modifica el contenido de las Estructuras de Datos que contengan bares, ya sea añadir nuevos bares, modificarlos o borrarlos.
	* Complejidad: O(1).
	*/

	void CincoAlgoritmo ();


	/*
	 * PRE = {(arbolBares -> empty () = false) && (Parametros de entrada no vacíos.)}
	 * POST = {listaBares -> estaVacia () = false}
	 * Descripción: genera una lista con punteros a bares que sirven un determinado tipo de comida y cuya capacidad supera a la dada.
	 * Complejidad: O(1).
	 */

	void SeisAlgoritmo (string tipoComida, int capacidad, ListaPI <Bar*>* &listaBares);


	/*
	 * PRE = {arbolBares -> empty () = false}
	 * POST = {Devuelve el barrio que más bares tiene}
	 * Descripción: escribe en un fichero de texto los bares del barrio que tiene más bares y devuelve como parámetro de entrada y salida
	 *              en barrio que más bares tiene
	 * Complejidad: O(n).
	 */

	void SieteAlgoritmo (Barrio *&b);

	/*
	 * PRE = {}
	 * POST = {Toda la memoria reservada se libera}
	 * Descripción: Libera toda la memoria reservada para las estructuras.
	 * Complejidad: O(n).
	 */

	void mostrarListaGenerica(ListaPI<Bar*> *lBar);
	 ~ Algoritmos ();

};

#endif /* ALGORITMOS_H_ */
