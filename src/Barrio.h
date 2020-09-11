/*st
 * Barrio.h
 *
 *  Created on: 16 mar. 2020
 *      Author: jorge1807
 */

#ifndef BARRIO_H_
#define BARRIO_H_

#include <iostream>
#include <string>
#include "Via.h"
#include "listapi.h"
using namespace std;

class Barrio {
private:
	string nombreBarrio;
	float   area;
	float   perimetro;
	int     codigoBarrio;
	string  distrito;
	ListaPI <Via*> *CjtoVias;


public:

	/*
	 * Constructor por defecto
	 * PRE = {}
	 * POST = {Crea e inicializa la instancia de la clase Barrio}
	 * Complejidad: O(1).
	 */
	Barrio ();

	/*
	 * Constructor parametrizado
	 * PRE = {}
	 * POST = {Crea e inicializa la instancia de la clase cuyo estado el de los parámetros de entrada que se copian en los atributos}
	 * Complejidad: O(1).
	 */
	Barrio (string nombre, float area, float perimetro, int codigo, string distrito);

	/*
	 * Constructor por copia
	 * PRE = {}
	 * POST = {Crea e inicializa la instancia de la clase copiando el estado de otro Barrio como parámetro de entrada y salida }
	 * Complejidad: O(1).
	 */
	Barrio (const Barrio *&other); //Constructor por copia de la clase 'Barrio'.

	/*Método que devuelve el nombre del barrio
	 * PRE = {Instancia "Barrio" creada}
	 * POST = {Devuelve el valor del atributo nombreBarrio}
	 * Complejidad: O(1).
	 */

	const string& getNombreBarrio() const;

	/*Método que devuelve el area del barrio
	 * PRE = {Instancia "Barrio" creada}
	 * POST = {Devuelve el valor del atributo area}
	 * Complejidad: O(1).
	 */

	float getArea() const;

	/*Método que devuelve el perímetro del barrio
	 * PRE = {Instancia "Barrio" creada}
	 * POST = {Devuelve el valor del atributo perimetro}
	 * Complejidad: O(1).
	 */

	float getPerimetro() const;

	/*Método que devuelve el codigo del barrio
	 * PRE = {Instancia "Barrio" creada}
	 * POST = {Devuelve el valor del atributo codigoBarrio}
	 * Complejidad: O(1).
	 */

	int getCodigoBarrio() const;

	/*Método que devuelve el distrito del barrio
	 * PRE = {Instancia "Barrio" creada}
	 * POST = {Devuelve el valor del atributo districto}
	 * Complejidad: O(1).
	 */

	const string& getDistrito() const;
	/*
	 * Método modificador del atributo nombreBarrio
	 * PRE = {Instancia "Barrio" creada}
	 * Parámetro: Nombre de del barrio que va a sustituir al nombre actual del barrio
	 * POST = {Modifica el nombreVia del Barrio.}
	 * Complejidad: O(1).
	 */

	void setNombreBarrio (const string &nombreBarrio);
	/*
	 * Método modificador del atributo area
	 * PRE = {Instancia "Barrio" creada}
	 * Parámetro: Área del barrio que va a sustituir al área actual del barrio
	 * POST = {Modifica el area del Barrio}
	 * Complejidad: O(1).
	 */
	void setArea (float area);

	/*
	 * Método modificador del atributo perimetro
	 * PRE = {Instancia "Barrio" creada}
	 * Parámetro: Perímetro  del barrio que va a sustituir el perímetro actual del barrio
	 * POST = {Modifica el perímetro del Barrio.}
	 * Complejidad: O(1).
	 */
	void setPerimetro (float perimetro);

	/*
	 * Método modificador del atributo codigoBarrio
	 * PRE = {Instancia "Barrio" creada}
	 * Parámetro: Código del barrio que va a sustituir al código actual del barrio
	 * POST = {Modifica el codigoBarrio del Barrio}
	 * Complejidad: O(1).
	 */
	void setCodigoBarrio (int codigoBarrio);

	/*
	 * Método modificador del atributo distrito
	 * PRE = {Instancia "Barrio" creada}
	 * Parámetro: Distrito de del barrio que va a sustituir al distrito actual del barrio
	 * POST = {Modifica el distrito del Barrio}
	 * Complejidad: O(1).
	 */
	void setDistrito (const string &distrito);

	/*
	 * Método que muestra el estado del Barrio (valores de los atributos del barrio y sus vías.)
	 * PRE = {Instancia "Barrio" creada}
	 * POST = {}
	 * Complejidad: O(n)
	 */

	void mostrarBarrio ();

	/*Método que inserta una vía por orden alfabético en la lista de vías que pasan por el Barrio
	 * PRE = {Instancia "via" creada}
	 * Parámetro: Parámetro de entrada que es un puntero a la Vía que se quiere insertar en el Barrio por orden alfabético
	 * POST = {}
	 * Complejidad: O(n).
	 */

	void insertarOrdenVias (Via *v);

	/*Método que encuentra y devuelve la vía con mayor longitud que pasa por el Barrio.
	 * PRE = {Instancia "via" creada}
	 * Parámetro: Parámetro de entrada y salida que es un puntero a la Vía con mayor longitud.
	 * POST = {}
	 * Complejidad: O(n).
	 */

	void viaMasLarga (Via *&v);

	/*Método que trata de buscar una vía por su código.
	 * PRE = {Instancia "via" creada}
	 * Parámetro: Parámetro de entrada y salida un puntero a la vía que se pretende buscar.
	 * POST = {Devuelve true si la Vía ha sido encontrada y false en caso contrario.}
	 * Complejidad: O(n).
	 */

	bool buscarVia (int codigo, Via *&v);


	/*
	 * PRE = {Instancia "vía" creada, parámetro de salida declarado y parámetros de entrada no vacíos.}
	 * POST = {El parámetro de salida es un puntero a una vía con el tipo y el nombre de la vía indicados.}
	 * Descripción: Devuelve por referencia la vía que tenga el tipo y el nombre indicados.
	 * Complejidad: O(n).
	 */

	bool buscarVia (string tipoVia, string nombreVia, Via* &v);



	/*Destructor por defecto: elimina la instancia "Barrio"
	 * PRE = {Instancia Barrio creada}
	 * POST = {}
	 * Complejidad: O(1).
	 */

	~ Barrio ();
};

#endif /* BARRIO_H_ */
