/*
 * Bar.h
 *
 *  Created on: 15 Mar 2020
 *      Author: raul
 */

#ifndef BAR_H_
#define BAR_H_

#include <iostream>
#include <string>
using namespace std;

class Bar {
private:
	string nombreBar;
	int capacidadPersonas;
	string sirveComida;
	string tipoComida;
	string telefono;
	int codigoPostal;
	int codigoViaBar;
	int portal;
	float apertura;
	float cierre;

public:

	/*
	 * Constructor por defecto
	 * PRE = {}
	 * POST = {Crea e inicializa la instancia de la clase Bar}
	 * Complejidad: O(1).
	 */

	Bar (); //Constructor por defecto de la clase 'Bar'.

	/*
	 * Constructor por defecto
	 * PRE = {}
	 * POST = {Crea e inicializa la instancia de la clase Bar}
	 * Complejidad: O(1).
	 */

	Bar (string nombreBar, int capacidadPersonas, string sirveComida, string tipoComida, string telefono, int codigoPostal, int codigoViaBar, int portal, float apertura, float cierre); //Constructor parametrizado de la clase 'Bar'.

	/*
	 * Constructor por copia
	 * PRE = {}
	 * POST = {Crea e inicializa la instancia de la clase Bar copiando el estado del Bar introducido como parámetro de entrada y salida.
	 * Parámetro: Instancia Bar que queremos copiar en la nueva instancia}
	 * Complejidad: O(1).
	 */

	Bar (const Bar &other);  //Constructor por copia de la clase 'Bar'.

	/*
	 * Método modificador del atributo NombreBar
	 * PRE = {Instancia "Bar" creada}
	 * Parámetro: nombre del Bar que va a sustituir al  actual del Bar
	 * POST = {Modifica el nombre del Bar.}
	 * Complejidad: O(1).
	 */

	void setNombreBar         (string nombreBar);
	/*
	 * Método modificador del atributo CapacidadPersonas
	 * PRE = {Instancia "Bar" creada}
	 * Parámetro: Capacidad de personas(int) del Bar que va a sustituir al  actual del Bar
	 * POST = {Modifica la capacidad de personas del Bar.}
	 * Complejidad: O(1).
	 */

	void setCapacidadPersonas (int capacidadPersonas);

	/*
	 * Método modificador del atributo SirveComida
	 * PRE = {Instancia "Bar" creada}
	 * Parámetro: sirveComida (string) del Bar que va a sustituir al sirveComida actual del Bar. SI sirve comida "SI. Al contrario, "NO".
	 * POST = {Modifica si sirve comida o no el Bar.}
	 * Complejidad: O(1).
	 */

	void setSirveComida       (string sirveComida);

	/*
	 * Método modificador del atributo tipoComida
	 * PRE = {Instancia "Bar" creada}
	 * Parámetro: Tipo de la comida del Bar(string) que va a sustituir al valor actual del Bar
	 * POST = {Modifica el tipo de comida del Bar.}
	 * Complejidad: O(1).
	 */

	void setTipoComida        (string tipoComida);

	/*
	 * Método modificador del atributo teléfono
	 * PRE = {Instancia "Bar" creada}
	 * Parámetro: teléfono(string) del Bar que va a sustituir al teléfono actual del Bar
	 * POST = {Modifica el teléfono del Bar.}
	 * Complejidad: O(1).
	 */

	void setTelefono          (string telefono);

	/*
	 * Método modificador del atributo codigoPostal
	 * PRE = {Instancia "Bar" creada}
	 * Parámetro: Codigo postal (int) del Bar que va a sustituir al codigo Postal actual del Bar
	 * POST = {Modifica el codigo postal del Bar.}
	 * Complejidad: O(1).
	 */

	void setCodigoPostal      (int codigoPostal);

	/*
	 * Método modificador del atributo codigoViaBar
	 * PRE = {Instancia "Bar" creada}
	 * Parámetro: codigo de la vía (string) del Bar que va a sustituir al actual del Bar
	 * POST = {Modifica el codigo de la vía donde se encuentra el Bar.}
	 * Complejidad: O(1).
	 */

	void setCodigoViaBar      (int codigoVia);

	/*
	 * Método modificador del atributo Portal
	 * PRE = {Instancia "Bar" creada}
	 * Parámetro: portal(int) del Bar que va a sustituir al actual.
	 * POST = {Modifica el portal del Bar.}
	 * Complejidad: O(1).
	 */

	void setPortal            (int portal);

	/*
	 * Método modificador del atributo Apertura
	 * PRE = {Instancia "Bar" creada}
	 * Parámetro: Apertura(float) del Bar que va a sustituir al actual del Bar
	 * POST = {Modifica la Apertura del Bar.}
	 * Complejidad: O(1).
	 */

	void setApertura          (float apetura);

	/*
	 * Método modificador del atributo Cierre
	 * PRE = {Instancia "Bar" creada}
	 * Parámetro: Cierre (float) del Bar que va a sustituir al actual del Bar
	 * POST = {Modifica el cierre del Bar.}
	 * Complejidad: O(1).
	 */

	void setCierre            (float cierre);

	/*Método que devuelve el nombre del Bar
	 * PRE = {Instancia "Bar" creada}
	 * POST = {Devuelve el valor del atributo NombreBar}
	 * Complejidad: O(1).
	 */

	string getNombreBar       ();

	/*Método que devuelve la capacidad de personas del Bar
	 * PRE = {Instancia "Bar" creada}
	 * POST = {Devuelve el valor del atributo CapacidadPersonas}
	 * Complejidad: O(1).
	 */

	int getCapacidadPersonas  ();

	/*Método que devuelve si sirve comida un Bar
	 * PRE = {Instancia "Bar" creada}
	 * POST = {Devuelve el valor del atributo SirveComida}
	 * Complejidad: O(1).
	 */


	string getSirveComida     ();

	/*Método que devuelve el tipo de comida de un Bar
	 * PRE = {Instancia "Bar" creada}
	 * POST = {Devuelve el valor del atributo TipoComida}
	 * Complejidad: O(1).
	 */
	string getTipoComida      ();

	/*Método que devuelve el telefono del Bar
	 * PRE = {Instancia "Bar" creada}
	 * POST = {Devuelve el valor del atributo Teléfono}
	 * Complejidad: O(1).
	 */
	string getTelefono           ();

	/*Método que devuelve el código postal del Bar
	 * PRE = {Instancia "Bar" creada}
	 * POST = {Devuelve el valor del atributo códigoPostal}
	 * Complejidad: O(1).
	 */
	int getCodigoPostal       ();

	/*Método que devuelve el código de la vía donde se encuentra el Bar
	 * PRE = {Instancia "Bar" creada}
	 * POST = {Devuelve el valor del atributo codigoViaBar}
	 * Complejidad: O(1).
	 */
	int getCodigoViaBar       ();

	/*Método que devuelveel portal donde se encuentra el Bar
	 * PRE = {Instancia "Bar" creada}
	 * POST = {Devuelve el valor del atributo portal}
	 * Complejidad: O(1).
	 */
	int getPortal             ();

	/*Método que devuelve la apertura del Bar
	 * PRE = {Instancia "Bar" creada}
	 * POST = {Devuelve el valor del atributo apretura}
	 * Complejidad: O(1).
	 */

	float getApertura         ();

	/*Método que devuelve el cierre del Bar
	 * PRE = {Instancia "Bar" creada}
	 * POST = {Devuelve el valor del atributo cierre}
	 * Complejidad: O(1).
	 */
	float getCierre           ();


	/*Destructor por defecto: elimina la instancia "Bar"
	 * PRE = {Instancia Bar creada}
	 * POST = {}
	 * Complejidad: O(1).
	 */


	void mostrarBar ();                 //Método para mostrar la información contenida en un bar.

	~ Bar (); //Destructor de la clase 'Bar'.
};


#endif /* BAR_H_ */
