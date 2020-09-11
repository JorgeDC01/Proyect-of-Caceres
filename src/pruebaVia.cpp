/*
 * pruebaVia.cpp
 *
 *  Created on: 16 mar. 2020
 *      Author: jorge1807
 */

#include "pruebaVia.h"


void pruebaConstructorDVia () {
	cout << "Inicio del módulo de pruebas del constructor por defecto de la clase 'Via' (supervisada)." << endl;
	Via *v = new Via();
	v -> mostrarVia ();
	delete v;
	cout << "Fin del módulo de pruebas del constructor por defecto de la clase 'Via' (supervisada)." << endl;
	cout << endl;
}


void pruebaConstructorPVia () {
	cout << "Inicio del módulo de pruebas del constructor parametrizado de la clase 'Via' (supervisada)." << endl;
	Via *v = new Via ("Avda", "calle", 230.3, 112, 10);
	v -> mostrarVia ();
	delete v;
	cout << "Fin del módulo de pruebas del constructor parametrizado de la clase 'Via'." << endl;
	cout << endl;
}



void pruebaSetsGets () {
	cout << "Inicio del módulo de pruebas de todos los métodos selectores y modificadores (supervisada y automática)." << endl;
	Via *v = new Via("Avda","Moraleja",500.2,78,22);
	v -> mostrarVia ();

	cout << "Prueba de los métodos selectores:" << endl;
	string tipo = v -> getTipoVia ();
	string nombre = v -> getNombreVia ();
	float longitud = v -> getLongitudVia ();
	int codigo = v -> getCodigoVia ();
	int barrioVia = v -> getBarrio ();

	cout << "TipoVia: " << tipo << endl;
	cout << "NombreVia: " << nombre << endl;
	cout << "LongitudVia: " << longitud  << endl;
	cout << "CodigoVia: " << codigo << endl;
	cout << "BarrioVia: " << barrioVia << endl;


	cout << "Prueba de los métodos modificadores:" << endl;
	v -> setTipoVia ("Ronda");
	v -> setNombreVia ("De La Pizarra");
	v -> setLongitudVia (520.73);
	v -> setCodigoVia (3010);
	v -> setBarrioVia (27);
	v -> mostrarVia ();
	delete v;
	cout << "Fin del módulo de pruebas de todos los métodos selectores y modificadores (supervisada y automática)." << endl;
	cout << endl;
}


void moduloPruebasVia () {
	cout << "INICIO DE LAS PRUEBAS DE LA CLASE 'Via'." << endl;
	pruebaConstructorDVia ();
	pruebaConstructorPVia ();
	pruebaSetsGets ();
	cout << "FIN DE LAS PRUEBAS DE LA CLASE 'Via'." << endl;
	cout << endl;
}
