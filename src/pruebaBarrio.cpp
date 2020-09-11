/*
 * pruebaBarrio.cpp
 *
 *  Created on: 30 Mar 2020
 *      Author: raul
 */


#include "pruebaBarrio.h"

using namespace std;


void pruebaConstructorDBarrio () {
	cout << "Inicio del módulo de pruebas del constructor por defecto de la clase 'Barrio' (supervisada)." << endl;
	Barrio *b = new Barrio ();
	b -> mostrarBarrio ();
	delete b;
	cout << "Fin del módulo de pruebas del constructor por defecto de la clase 'Barrio' (supervisada)." << endl;
	cout << endl;
}


void pruebaConstructorPBarrio () {
	cout << "Inicio del módulo de pruebas del constructor parametrizado de la clase 'Barrio' (supervisada)." << endl;
	Barrio *b = new Barrio ("Argentina", 113516.77, 1426.21, 12, "Centro");
	b -> mostrarBarrio ();
	delete b;
	cout << "Fin del módulo de pruebas del constructor parametrizado de la clase 'Barrio' (supervisada)." << endl;
	cout << endl;
}



void pruebaGetNombreBarrio () {
	cout << "Inicio del módulo de pruebas del método 'getNombreBarrio' de la clase 'Barrio' (supervisada)." << endl;
	Barrio *b = new Barrio ("Argentina", 113516.77, 1426.21, 12, "Centro");
	string nombre = b -> getNombreBarrio ();
	cout << nombre << endl;
	delete b;
	cout << "Fin del módulo de pruebas del método 'getNombreBarrio' de la clase 'Barrio' (supervisada)." << endl;
	cout << endl;
}


void pruebaGetArea () {
	cout << "Inicio del módulo de pruebas del método 'getArea' de la clase 'Barrio' (supervisada)." << endl;
	Barrio *b = new Barrio ("Argentina", 113516.77, 1426.21, 12, "Centro");
	float area = b -> getArea ();
	cout << area << endl;
	delete b;
	cout << "Fin del módulo de pruebas del método 'getArea' de la clase 'Barrio' (supervisada)." << endl;
	cout << endl;
}


void pruebaGetPerimetro () {
	cout << "Inicio del módulo de pruebas del método 'getPerimetro' de la clase 'Barrio' (supervisada)." << endl;
	Barrio *b = new Barrio ("Argentina", 113516.77, 1426.21, 12, "Centro");
	float perimetro = b -> getPerimetro ();
	cout << perimetro << endl;
	delete b;
	cout << "Fin del módulo de pruebas del método 'getPerimetro' de la clase 'Barrio' (supervisada)." << endl;
	cout << endl;
}


void pruebaGetCodigoBarrio () {
	cout << "Inicio del módulo de pruebas del método 'getCodigoBarrio' de la clase 'Barrio' (supervisada)." << endl;
	Barrio *b = new Barrio ("Argentina", 113516.77, 1426.21, 12, "Centro");
	int codigo = b -> getCodigoBarrio ();
	cout << codigo << endl;
	delete b;
	cout << "Fin del módulo de pruebas del método 'getCodigoBarrio' de la clase 'Barrio' (supervisada)." << endl;
	cout << endl;
}


void pruebaGetDistrito () {
	cout << "Inicio del módulo de pruebas del método 'getDistrito' de la clase 'Barrio' (supervisada)." << endl;
	Barrio *b = new Barrio ("Argentina", 113516.77, 1426.21, 12, "Centro");
	string distrito = b -> getDistrito ();
	cout << distrito << endl;
	delete b;
	cout << "Fin del módulo de pruebas del método 'getDistrito de la clase 'Barrio' (supervisada)." << endl;
	cout << endl;
}


void pruebaSetNombreBarrio () {
	cout << "Inicio del módulo de pruebas del método 'setNombreBarrio' de la clase 'Barrio'." << endl;
	Barrio *b = new Barrio ();
	b -> setNombreBarrio ("Argentina");
	if (b -> getNombreBarrio () != "Argentina") {
		cout << "Error en el método 'setNombreBarrio." << endl;
	}
	delete b;
	cout << "Fin del módulo de pruebas del método 'setNombreBarrio' de la clase 'Barrio'." << endl;
	cout << endl;
}


void pruebaSetArea () {
	cout << "Inicio del módulo de pruebas del método 'setArea' de la clase 'Barrio'." << endl;
	Barrio *b = new Barrio ();
	b -> setArea (6.6);
	if ((b -> getArea () - 6.6) > 0.0001) {
		cout << "Error en el método 'setArea'." << endl;
	}
	delete b;
	cout << "Fin del módulo de pruebas del método 'setArea' de la clase 'Barrio'." << endl;
	cout << endl;
}


void pruebaSetPerimetro () {
	cout << "Inicio del módulo de pruebas del método 'setPerimetro' de la clase 'Barrio'." << endl;
	Barrio *b = new Barrio ();
	b -> setPerimetro (9.9);
	if ((b -> getPerimetro () - 9.9) > 0.0001) {
		cout << "Error en el método 'setPerimetro'." << endl;
	}
	delete b;
	cout << "Fin del módulo de pruebas del método 'setPerimetro' de la clase 'Barrio'." << endl;
	cout << endl;
}


void pruebaSetCodigoBarrio () {
	cout << "Inicio del módulo de pruebas del método 'setCodigoBarrio' de la clase 'Barrio'." << endl;
	Barrio *b = new Barrio ();
	b -> setCodigoBarrio (7);
	if (b -> getCodigoBarrio () != 7) {
		cout << "Error en el método 'setCodigoBarrio'." << endl;
	}
	delete b;
	cout << "Fin del módulo de pruebas del método 'setCodigoBarrio' de la clase 'Barrio'." << endl;
	cout << endl;
}


void pruebaSetDistrito () {
	cout << "Incio del módulo de pruebas del método 'setDistrito' de la clase 'Barrio'." << endl;
	Barrio *b = new Barrio ();
	b -> setDistrito ("Hola");
	if (b -> getDistrito () != "Hola") {
		cout << "Error en el método 'setDistrito'." << endl;
	}
	delete b;
	cout << "Fin del módulo de pruebas del método 'setDistrito' de la clase 'Barrio'." << endl;
	cout << endl;
}


void pruebaMostrarBarrio () {
	cout << "Inicio del módulo de pruebas del método 'mostrarBarrio' de la clase 'Barrio' (supervisada)." << endl;
	Barrio *b = new Barrio ("Argentina", 113516.77, 1426.21, 12, "Centro");
	b -> mostrarBarrio ();
	delete b;
	cout << "Fin del módulo de pruebas del método 'mostrarBarrio' de la clase 'Barrio' (supervisada)." << endl;
	cout << endl;
}


void pruebaInsertarOrdenVias () {
	cout << "Inicio del módulo de pruebas del método 'insertarOrdenVias' de la clase 'Barrio' (supervisada)." << endl;
	Via *v1 = new Via ("Avda", "De España", 1100.52, 3048, 35);
	Via *v2 = new Via ("Calle", "Huesca", 79.93, 1006, 21);
	Via *v3 = new Via ("Calle", "Clemente Sanchez Ramos", 121.05, 132, 35);
	Barrio *b = new Barrio ();
	b -> insertarOrdenVias (v1);
	b -> insertarOrdenVias (v2);
	b -> insertarOrdenVias (v3);
	b -> mostrarBarrio ();
	delete b;
	cout << "Fin del módulo de pruebas del método 'insertarOrdenVias' de la clase 'Barrio' (supervisada)." << endl;
	cout << endl;
}


void pruebaViaMasLarga () {
	cout << "Inicio del módulo de pruebas del método 'viaMasLarga' de la clase 'Barrio' (supervisada)." << endl;
	Via *v1 = new Via ("Avda", "De España", 1100.52, 3048, 35);
	Via *v2 = new Via ("Calle", "Huesca", 79.93, 1006, 21);
	Via *v3 = new Via ("Calle", "Clemente Sanchez Ramos", 121.05, 132, 35);
	Barrio *b = new Barrio ();
	Via *aux = NULL; // Via auxiliar más larga.
	b -> insertarOrdenVias (v1);
	b -> insertarOrdenVias (v2);
	b -> insertarOrdenVias (v3);
	b -> mostrarBarrio ();
	b -> viaMasLarga (aux);
	aux -> mostrarVia ();
	delete b;
	cout << "Fin del módulo de pruebas del método 'viaMasLarga' de la clase 'Barrio' (supervisada)." << endl;
	cout << endl;
}


void conjuntoPruebasBarrio () {
	pruebaConstructorDBarrio ();
	pruebaConstructorPBarrio ();
	pruebaGetNombreBarrio ();
	pruebaGetArea ();
	pruebaGetPerimetro ();
	pruebaGetCodigoBarrio ();
	pruebaGetDistrito ();
	pruebaSetNombreBarrio ();
	pruebaSetArea ();
	pruebaSetPerimetro ();
	pruebaSetCodigoBarrio ();
	pruebaSetDistrito ();
	pruebaMostrarBarrio ();
	pruebaInsertarOrdenVias ();
	pruebaViaMasLarga ();
}
