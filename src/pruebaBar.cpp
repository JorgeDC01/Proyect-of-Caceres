
/*
 * pruebaBar.cpp
 *
 *  Created on: 15 Mar 2020
 *      Author: raul
 */

#include "pruebaBar.h"

void pruebaConstructorDBar () {
	cout << "Inicio del módulo de pruebas del constructor por defecto de la clase 'Bar' (supervisada)." << endl;
	Bar *b = new Bar ();
	b -> mostrarBar ();
	delete b;
	cout << "Fin del módulo de pruebas del constructor por defecto de la clase 'Bar' (supervisada)." << endl;
	cout << endl;
}


void pruebaConstructorPBar () {
	cout << "Inicio del módulo de pruebas del constructor parametrizado de la clase 'Bar' (supervisada)." << endl;
	Bar *b = new Bar ("La Chicha", 40, "SI", "TAPAS", "636384972", 10003, 3546, 9, 8.00, 24.00);
	b -> mostrarBar ();
	delete b;
	cout << "Fin del módulo de pruebas del constructor parametrizado de la clase 'Bar' (supervisada)." << endl;
	cout << endl;
}



void pruebaSetNombreBar () {
	cout << "Inicio del módulo de pruebas del método 'setNombreBar' (supervisada)." << endl;
	Bar *b = new Bar ();
	b -> setNombreBar ("La Chicha");
	b -> mostrarBar ();
	delete b;
	cout << "Fin del módulo de pruebas del método 'setNombreBar' (supervisada)." << endl;
	cout << endl;
}


void pruebaSetCapacidadPersonas () {
	cout << "Inicio del módulo de pruebas del método 'setCapacidadPersonas' (supervisada)." << endl;
	Bar *b = new Bar ();
	b -> setCapacidadPersonas (40);
	b -> mostrarBar ();
	delete b;
	cout << "Fin del módulo de pruebas del método 'setCapacidadPersonas' (supervisadas)." << endl;
	cout << endl;
}


void pruebaSetSirveComida () {
	cout << "Inicio del módulo de pruebas del método 'setSirveComida' (supervisada)." << endl;
	Bar *b = new Bar ();
	b -> setSirveComida ("NO");
	b -> mostrarBar ();
	delete b;
	cout << "Fin del módulo de pruebas de método 'setSirveComida' (supervisada)." << endl;
	cout << endl;
}


void pruebaSetTipoComida () {
	cout << "Inicio del módulo de pruebas del método 'setTipoComida' (supervisada)." << endl;
	Bar *b = new Bar ();
	b -> setTipoComida ("Entrantes");
	b -> mostrarBar ();
	delete b;
	cout << "Fin del módulo de pruebas del método 'setTipoComida' (supervisada)." << endl;
	cout << endl;
}


void pruebaSetTelefono () {
	cout << "Inicio del módulo de pruebas del método 'setTelefono' (supervisada)." << endl;
	Bar *b = new Bar ();
	b -> setTelefono ("+34 627093302");
	b -> mostrarBar ();
	delete b;
	cout << "Fin del módulo de pruebas del método 'setTelefono' (supervisada)." << endl;
	cout << endl;
}


void pruebaSetCodigoPostal () {
	cout << "Inicio del módulo de pruebas del método 'setCodigoPostal' (supervisada)." << endl;
	Bar *b = new Bar ();
	b -> setCodigoPostal (06003);
	b -> mostrarBar ();
	delete b;
	cout << "Fin del módulo de pruebas del método 'setCodigoPostal' (supervisada)." << endl;
	cout << endl;
}


void pruebaSetCodigoViaBar () {
	cout << "Inicio del módulo de pruebas del método 'setCodigoViaBar'. (supervisada)." << endl;
	Bar *b = new Bar ();
	b -> setCodigoViaBar (69);
	b -> mostrarBar ();
	delete b;
	cout << "Fin del módulo de pruebas del método 'setCodigoViaBar' (supervisada)." << endl;
	cout << endl;
}


void pruebaSetPortal () {
	cout << "Inicio del módulo de pruebas del método 'setPortal' (supervisada)." << endl;
	Bar *b = new Bar ();
	b -> setPortal (1);
	b -> mostrarBar ();
	delete b;
	cout << "Fin del módulo de pruebas del método 'setPortal' (supervisada)." << endl;
	cout << endl;
}


void pruebaSetApertura () {
	cout << "Inicio del módulo de pruebas del método 'setApertura' (supervisada)." << endl;
	Bar *b = new Bar ();
	b -> setApertura (12.00);
	b -> mostrarBar ();
	delete b;
	cout << "Fin del módulo de pruebas del método 'setApertura' (supervisada)." << endl;
	cout << endl;
}


void pruebaSetCierre () {
	cout << "Inicio del módulo de pruebas del método 'setCierre' (supervisada)." << endl;
	Bar *b = new Bar ();
	b -> setCierre (12.00);
	b -> mostrarBar ();
	delete b;
	cout << "Fin del módulo de pruebas de método 'setCierre' (supervisada)." << endl;
	cout << endl;
}


void pruebaGetNombreBar () {
	cout << "Inicio del módulo de pruebas del método 'getNombreBar'." << endl;
	Bar *b = new Bar ();
	b -> setNombreBar ("La Chicha");
	if (b -> getNombreBar () != "La Chicha") {
		cout << "Error en el método 'getNombreBar' (1)." << endl;
	}
	if (b -> getNombreBar () == "") {
		cout << "Error en el método 'getNombreBar' (2)." << endl;
	}
	delete b;
	cout << "Fin del módulo de pruebas del método 'getNombreBar'." << endl;
	cout << endl;
}


void pruebaGetCapacidadPersonas () {
	cout << "Inicio del módulo de pruebas del método 'getCapacidadPersonas'." << endl;
	Bar *b = new Bar ();
	b -> setCapacidadPersonas (8);
	if (b -> getCapacidadPersonas () != 8) {
		cout << "Error en el método 'getCapacidadPersonas' (1)." << endl;
	}
	if (b -> getCapacidadPersonas() == 0) {
		cout << "Error en el método 'getCapacidadPersonas' (2)." << endl;
	}
	delete b;
	cout << "Fin del módulo de pruebas del método 'getCapacidadPersonas'." << endl;
	cout << endl;
}


void pruebaGetSirveComida () {
	cout << "Inicio del módulo de pruebas del método 'getSirveComida'." << endl;
	Bar *b = new Bar ();
	b -> setSirveComida ("SI");
	if (b -> getSirveComida () != "SI") {
		cout << "Error en el método 'getSirveComida' (1)." << endl;
	}
	if (b -> getSirveComida () == "AA") {
		cout << "Error en el método 'getSirveComida' (2)." << endl;
	}
	delete b;
	cout << "Fin del módulo de pruebas del método 'getSirveComida'." << endl;
	cout << endl;
}


void pruebaGetTipoComida () {
	cout << "Inicio del módulo de pruebas del método 'getTipoComida'." << endl;
	Bar *b = new Bar ();
	b -> setTipoComida ("Tapas");
	if (b -> getTipoComida () != "Tapas") {
		cout << "Error en el método 'getTipoComida' (1)." << endl;
	}
	if (b -> getTipoComida () == "") {
		cout << "Error en el método 'getTipoComida' (2)." << endl;
	}
	delete b;
	cout << "Fin del módulo de pruebas del método 'getTipoComida'." << endl;
	cout << endl;
}


void pruebaGetTelefono () {
	cout << "Inicio del módulo de pruebas del método 'getTelefono'." << endl;
	Bar *b = new Bar ();
	b -> setTelefono ("+34 664829720");
	if (b -> getTelefono () != "+34 664829720") {
		cout << "Error en el método 'getTelefono' (1)." << endl;
	}
	if (b -> getTelefono () == "w") {
		cout << "Error en el método 'getTelefono' (2)." << endl;
	}
	delete b;
	cout << "Fin del módulo de pruebas del método 'getTelefono." << endl;
	cout << endl;
}


void pruebaGetCodigoPostal () {
	cout << "Inicio del módulo de pruebas del método 'getCodigoPostal'." << endl;
	Bar *b = new Bar ();
	b -> setCodigoPostal (06003);
	if (b -> getCodigoPostal () != 06003) {
		cout << "Error en el método 'getCodigoPostal' (1)." << endl;
	}
	if (b -> getCodigoPostal () == 12345) {
		cout << "Error en el método 'getCodigoPostal' (2)." << endl;
	}
	delete b;
	cout << "Fin del módulo de pruebas del método 'getCodigoPostal."  << endl;
	cout << endl;
}


void pruebaGetCodigoViaBar () {
	cout << "Inicio del módulo de pruebas del método 'getCodigoViaBar'." << endl;
	Bar *b = new Bar ();
	b -> setCodigoViaBar (7);
	if (b -> getCodigoViaBar () != 7) {
		cout << "Error en el método 'getCodigoViaBar' (1)." << endl;
	}
	if (b -> getCodigoViaBar () == 6) {
		cout << "Error en el método 'getCodigoViaBar' (2)." << endl;
	}
	delete b;
	cout << "Fin del módulo de pruebas del método 'getCodigoViaBar'." << endl;
	cout << endl;
}


void pruebaGetPortal () {
	cout << "Inicio del módulo de pruebas del método 'getPortal'." << endl;
	Bar *b = new Bar ();
	b -> setPortal (8);
	if (b -> getPortal () != 8) {
		cout << "Error en el método 'getPortal' (1)." << endl;
	}
	if (b -> getPortal () == 0) {
		cout << "Error en el método 'getPortal (2)." << endl;
	}
	delete b;
	cout << "Fin del módulo de pruebas del método 'getPortal'." << endl;
	cout << endl;
}


void pruebaGetApertura () {
	cout << "Inicio del módulo de pruebas del método 'getApertura'." << endl;
	Bar *b = new Bar ();
	b -> setApertura (7.00);
	if ((b -> getApertura () - 7.00) > 0.001) {
		cout << "Error en el método 'getApertura (1)." << endl;
	}
	if ((b -> getApertura () - 7) > 0.00001) {
		cout << "Error en el método 'getApertura (2)." << endl;
	}
	delete b;
	cout << "Fin del módulo de pruebas del método 'getApertura." << endl;
	cout << endl;
}


void pruebaGetCierre () {
	cout << "Inicio del módulo de pruebas del método 'getCierre'." << endl;
	Bar *b = new Bar ();
	b -> setCierre (15.15);
	if ((b -> getCierre () - 15.15) > 0.001) {
		cout << "Error en el método 'getCierre' (1)." << endl;
	}
	if ((b -> getCierre () - 15.15) > 0.00001) {
		cout << "Error en el método 'getCierre'." << endl;
	}
	delete b;
	cout << "Fin del módulo de pruebas del método 'getCierre'." << endl;
	cout << endl;
}


void pruebaMostrarBar () {
	cout << "Inicio del módulo de pruebas del método 'mostrarBar' (supervisada)." << endl;
	Bar *b = new Bar ("Bar de Paco", 40, "NO", "", "658325681", 76001, 75, 32, 08.00, 20.00);
	b -> mostrarBar ();
	delete b;
	cout << "Fin del módulo de pruebas del método 'mostrarBar' (supervisada)." << endl;
	cout << endl;
}


void moduloPruebasBar () {
	cout << "INICIO DE LAS PRUEBAS DE LA CLASE 'Bar'." << endl;
	pruebaConstructorDBar ();
	pruebaConstructorPBar ();
	pruebaSetNombreBar ();
	pruebaSetCapacidadPersonas ();
	pruebaSetSirveComida ();
	pruebaSetTipoComida ();
	pruebaSetTelefono ();
	pruebaSetCodigoPostal ();
	pruebaSetCodigoViaBar ();
	pruebaSetPortal ();
	pruebaSetApertura ();
	pruebaSetCierre ();
	pruebaGetNombreBar ();
	pruebaGetCapacidadPersonas ();
	pruebaGetSirveComida ();
	pruebaGetTipoComida ();
	pruebaGetTelefono ();
	pruebaGetCodigoPostal ();
	pruebaGetCodigoViaBar ();
	pruebaGetPortal ();
	pruebaGetApertura ();
	pruebaGetCierre ();
	pruebaMostrarBar ();
	cout << "FIN DEL MÓDULO DE PRUEBAS DE LA CLASE 'Bar'." << endl;
	cout << endl;
}
