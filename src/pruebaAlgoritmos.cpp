/*
 * pruebaAlgoritmos.cpp
 *
 *  Created on: 1 abr. 2020
 *      Author: jorge1807
 */


#include "pruebaAlgoritmos.h"


void pruebasAlgoritmosParte1 () {
	cout << endl;
	cout << "Inicio prueba insertarOrdenBarrios de la Clase Algoritmos (supervisada)... " << endl;
		// prueba Constructor por defecto
	Algoritmos *a = new Algoritmos();
	Barrio *B1 = new Barrio("Argentina",113516.77,1426.21,12,"Centro");
	Barrio *B2 = new Barrio("Campus Universitario",1504384.69,6002.54,46,"Norte");

		// prueba insertarOrdenBarrios
	a->insertarOrdenBarrios(B1);
	a->insertarOrdenBarrios(B2);
	cout << endl;
	a->mostrarBarrios();
	cout << "Fin prueba insertarOrdenBarrios..." << endl;

	cout << endl;

	cout << "Inicio prueba insertarVias de la Clase Algoritmos (supervisada)... " << endl;

	Via *V1 = new Via("Calle", "Via prueba 1", 1234.5,70,12);
	Via *V2 = new Via("Avda", "Via prueba 2", 43231.5,60,12);

	a->insertarVias(V1);
	a->insertarVias(V2);
	a -> mostrarBarrios ();
	cout << "Fin prueba insertarVias" << endl;

	cout << endl;

	cout << "Inicio prueba Algoritmo1 de la Clase Algoritmos (supervisada)... " << endl;

		// prueba Algoritmo1 (muestra las vias de un barrio concreto)
	a->Algoritmo1("Argentina");
	cout << "Fin prueba Algoritmo1" << endl;


	cout << "                " << endl;
	cout << "Inicio prueba Algoritmo2 de la Clase Algoritmos (supervisada)... " << endl;

		// prueba Algoritmo2 (muestra la vía con mayor longitud)
	Via *v = NULL; //Vía más larga.
	a->Algoritmo2(v);
	v -> mostrarVia ();
	cout << "Fin prueba Algoritmo2" << endl;


	cout << "                " << endl;
	cout << "Inicio prueba insertarOrdenBares y mostrarBares de la Clase Algoritmos (supervisada)... " << endl;

	Bar *b1 = new Bar("La Chicha",40,"SI","TAPAS","636384972",10003,3546,9,8.00,24.00);
	Bar *b2 = new Bar("Camelot Cafés y Tapas",40,"SI","TAPAS","+34 617519391",10003,3446,26,8.00,24.00);

		// prueba insertarOrdenBares
	a->insertarOrdenBares(b1);
	a->insertarOrdenBares(b2);
		// prueba mostrarBares

	a->mostrarListaBares();
	cout << "Fin prueba mostrarBares" << endl;


	cout << "                " << endl;
	cout << "Inicio prueba Algoritmo3 (supervisada)..." << endl;

	int numeroBares = 0;
	Cola <Bar*> *cola  = new Cola <Bar*>();

		// prueba Algoritmo3 (devuelve como parámetro de entrada-salida una cola con los bares de un Tipo de comida en concreto).
	a->Algoritmo3("TAPAS",cola,numeroBares);
	a->mostrarColaBares(cola);

	delete cola;
		// prueba destructor por defecto de Algoritmos
	cout << "Fin prueba Algoritmo3..." << endl;
	cout << endl;


	cout << "Inicio prueba insertarBar y root y mostrar de la Clase Algoritmos(supervisada)..." << endl;

	Bar *b3 = new Bar("BarUno",40,"SI","TAPAS","636384972",10003,70,9,8.00,24.00);
	Bar *b4 = new Bar("BarDos",40,"SI","TAPAS","+34 617519391",10003,70,26,8.00,24.00);
	Bar *b5 = new Bar("BarTres",50,"NO","","+34 617604471",10003,60,10,19.00,3.00);
	Bar *b6 = new Bar("BarCuatro",30,"NO","","+34 618402756",10003,60,2,17.00,3.00);
	a->insertarBar(b3);
	a->insertarBar(b4);
	a->insertarBar(b5);
	a->insertarBar(b6);

	a->mostrarArbolBares();
	cout << "Fin prueba insertarBar y root de la Clase Algoritmos" << endl;
	cout << endl;


	cout << "Inicio prueba numeroBaresdeBarrio de la Clase Algoritmos(automática)..." << endl;
	if(a->numeroBaresdeBarrio(B1) != 4)
		cout << "Error al calcular el numero de bares del Barrio " << B1->getNombreBarrio() << endl;
	cout << "Fin prueba numeroBaresdeBarrio de la Clase Algoritmos" << endl;
	cout << endl;


	cout << "Inicio prueba insertarListaCapacidad de la Clase Algoritmos(supervisada)..." << endl;
	ListaPI <Bar*> *lBar  = new ListaPI <Bar*>();
	Bar *aux;
	a->insertarListaCapacidad(lBar,b3->getCapacidadPersonas(),b3);
	a->insertarListaCapacidad(lBar,b4->getCapacidadPersonas(),b4);
	a->insertarListaCapacidad(lBar,b5->getCapacidadPersonas(),b5);
	a->insertarListaCapacidad(lBar,b6->getCapacidadPersonas(),b6);

	if (!lBar -> estaVacia ()) {
		lBar -> moverInicio ();
		while (!lBar -> finLista ()) {
			lBar -> consultar (aux);
			cout << aux -> getNombreBar () << ", " << aux -> getTipoComida () << ", " << aux -> getCapacidadPersonas () << endl;
			lBar -> avanzar ();
		}
	}
	delete lBar;
	cout << "Fin prueba insertarListaCapacidad de la Clase Algoritmos" << endl;
	cout << endl;

	delete a;
}
