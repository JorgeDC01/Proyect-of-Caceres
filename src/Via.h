/*
 * Via.h
 *
 *  Created on: 16 mar. 2020
 *      Author: jorge1807
 */

#ifndef VIA_H_
#define VIA_H_

#include <iostream>
#include <string>
using namespace std;

class Via {
	string tipoVia;
	string nombreVia;
	float longitudVia;
	int codigoVia;
	int barrioVia;

public:

	/*
	 * Constructor por defecto
	 * PRE = {}
	 * POST = {Crea e inicializa la instancia de la clase}
	 * Complejidad: O(1).
	 */

	Via ();

	/*
	 * Constructor parametrizado
	 * PRE = {}
	 * POST = {Crea e inicializa la instancia de la clase como estado los parámetros de entrada que se copian en los atributos.}
	 * Complejidad: O(1).
	 */

	Via (string tipoVia, string nombreVia, float longitudVia, int codigoVia, int barrioVia);


	/*
	 * Método modificador del atributo TipoVia
	 * PRE = {Instancia "via" creada}
	 * Parámetro: TipoVia que va a sustituir al parámetro actual de la vía
	 * POST = {Modifica el TipoVia de una vía.}
	 * Complejidad: O(1).
	 */

	void setTipoVia     (string tipoVia);

	/*
	 * Método modificador del atributo nombreVia
	 * PRE = {Instancia "via" creada}
	 * Parámetro: Nombre de la via que va a sustituir al nombre actual de la vía
	 * POST = {Modifica el nombreVIa de una vía.}
	 * Complejidad: O(1).
	 */

	void setNombreVia   (string nombreVia);

	/*
	 * Método modificador del atributo longitudVia
	 * PRE = {Instancia "via" creada}
	 * Parámetro: Longitud de la vía que va a sustituir a la longitud actual de la vía
	 * POST = {Modifica la longitudVia de la  vía.}
	 * Complejidad: O(1).
	 */

	void setLongitudVia (float longitudVia);

	/*
	 * Método modificador del atributo CodigoVia
	 * PRE = {Instancia "via" creada}
	 * Parámetro: Codigo de la via que va a sustituir al codigo actual de la vía
	 * POST = {Modifica el TipoVia de una vía.}
	 * Complejidad: O(1).
	 */

	void setCodigoVia   (int codigoVia);

	/*
	 * Método modificador del atributo BarrioVia
	 * PRE = {Instancia "via" creada}
	 * Parámetro: BarrioVia que va a sustituir al barrio actual de la vía
	 * POST = {Modifica el BarrioVia de una vía.}
	 * Complejidad: O(1).
	 */

	void setBarrioVia   (int barrioVia);

	/*Método que devuelve el valor del atributo TipoVia
	 * PRE = {Instancia "via" creada}
	 * POST = {Devuelve el TipoVia actual que tiene la via}
	 * Complejidad: O(1).
	 */

	string getTipoVia    ();

	/*Método que devuelve el valor del atributo nombreVia
	 * PRE = {Instancia "via" creada}
	 * POST = {Devuelve el nombre actual que tiene la via}
	 * Complejidad: O(1).
	 */

	string getNombreVia  ();

	/*Método que devuelve el valor del atributo longitudVia
	 * PRE = {Instancia "via" creada}
	 * POST = {Devuelve la longitud actual que tiene la via}
	 * Complejidad: O(1).
	 */

	float getLongitudVia ();

	/*Método que devuelve el valor del atributo codigoVia
	 * PRE = {Instancia "via" creada}
	 * POST = {Devuelve el codigo actual que tiene la via}
	 * Complejidad: O(1).
	 */

	int getCodigoVia     ();

	/*Método que devuelve el codigo del barrio al que pertenece la via
	 * PRE = {Instancia "via" creada}
	 * POST = {Devuelve el codigo del barrio actual que tiene la via}
	 * Complejidad: O(1).
	 */

	int getBarrio        ();

	/*Método que muestra por pantalla el estado de la Vía (valores que toman sus atributos)
	 * PRE = {Instancia "via" creada}
	 * POST = {}
	 * Complejidad: O(1).
	 */

	void mostrarVia ();

	/*Destructor por defecto: elimina la instancia "via"
	 * PRE = {Instancia Via creada}
	 * POST = {}
	 * Complejidad: O(1).
	 */

	~ Via ();

};

#endif /* VIA_H_ */
