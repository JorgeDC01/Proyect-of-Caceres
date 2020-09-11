/*
 * Barrio.cpp
 *
 *  Created on: 16 mar. 2020
 *      Author: jorge1807
 */

#include "Barrio.h"

Barrio :: Barrio () {
	this -> nombreBarrio = "";
	this -> area = 0.0;
	this -> perimetro = 0.0;
	this -> codigoBarrio = 0;
	this -> distrito = "";
	this -> CjtoVias = new ListaPI <Via*>;		// Importante. CjtoVias apunta a una lista, llamando así al constructor de ListaPI (pone a null el PI, inicio y final).
}


Barrio :: ~ Barrio () {
	Via *v;
	CjtoVias->moverInicio();
	while(!CjtoVias->estaVacia()){
		CjtoVias->consultar(v);
		delete v;
		CjtoVias->borrar();
	}
	delete CjtoVias;
}


Barrio :: Barrio (const Barrio *&other) {
	this -> nombreBarrio = other -> nombreBarrio;
	this -> area = other -> area;
	this -> perimetro = other -> perimetro;
	this -> codigoBarrio = other -> codigoBarrio;
	this -> distrito = other -> distrito;
	this -> CjtoVias = other -> CjtoVias;
}


Barrio :: Barrio (string nombre, float area, float perimetro, int codigo, string distrito) {
	this->nombreBarrio = nombre;
	this->area = area;
	this->perimetro = perimetro;
	this->codigoBarrio = codigo;
	this->distrito = distrito;
	this->CjtoVias = new ListaPI <Via*>;
}


float Barrio :: getArea () const {
	return area;
}


void Barrio :: setArea (float area) {
	this->area = area;
}


int Barrio :: getCodigoBarrio () const {
	return codigoBarrio;
}


void Barrio ::setCodigoBarrio (int codigoBarrio) {
	this->codigoBarrio = codigoBarrio;
}


const string& Barrio :: getDistrito () const {
	return distrito;
}


void Barrio :: setDistrito (const string &distrito) {
	this->distrito = distrito;
}


const string& Barrio :: getNombreBarrio () const {
	return nombreBarrio;
}


void Barrio :: setNombreBarrio (const string &nombreBarrio) {
	this -> nombreBarrio = nombreBarrio;
}


float Barrio :: getPerimetro () const {
	return perimetro;
}


void Barrio :: setPerimetro (float perimetro) {
	this -> perimetro = perimetro;
}


void Barrio :: mostrarBarrio () {
	cout << this->getNombreBarrio() << " - " << this->getArea() << " - " << this->getPerimetro() << " - " << this->getCodigoBarrio() << " - " << this->getDistrito() << endl;
	Via *v;
	if (!CjtoVias -> estaVacia ()) {
		CjtoVias -> moverInicio ();
		while (!CjtoVias->finLista()) {
			CjtoVias -> consultar (v);
			v -> mostrarVia ();
			CjtoVias -> avanzar ();
		}
	}
}


void Barrio :: insertarOrdenVias (Via *v) {
	bool enc = false;
	Via *aux;

	CjtoVias -> moverInicio ();

	while (!CjtoVias -> finLista () && !enc) {
		CjtoVias -> consultar (aux);
		if (aux -> getNombreVia () > v -> getNombreVia ()) {
			enc = true;
		}
		else
			CjtoVias -> avanzar ();
	}
	CjtoVias -> insertar (v);
}


void Barrio :: viaMasLarga (Via *&v) {
	Via *aux;
	CjtoVias -> moverInicio ();
	CjtoVias -> consultar (v);
	CjtoVias -> avanzar ();
	while (!CjtoVias -> finLista ()) {
		CjtoVias -> consultar (aux);
		if (aux -> getLongitudVia () >= v -> getLongitudVia ()) {
			v = aux;
		}
		CjtoVias -> avanzar ();
	}
}

bool Barrio::buscarVia(int codigo, Via *&v) {

	bool enc = false;

	CjtoVias->moverInicio();
	if(!CjtoVias->estaVacia()){
		while (!CjtoVias->finLista () && (!enc)) {
			CjtoVias->consultar(v);
			if(v->getCodigoVia() == codigo){
				enc = true;
			}
			CjtoVias->avanzar();
		}
	}
	return enc;
}


bool Barrio :: buscarVia (string tipoVia, string nombreVia, Via* &v) {
	bool enc = false;
	CjtoVias -> moverInicio ();
	while ((!CjtoVias -> finLista ()) && (!enc)) {
		CjtoVias -> consultar (v);
		if (((v -> getTipoVia ()) == tipoVia) && ((v -> getNombreVia ()) == nombreVia)) {
			enc = true;
		}
		CjtoVias -> avanzar ();
	}
	return enc;
}

