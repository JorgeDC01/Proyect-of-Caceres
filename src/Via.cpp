/*
 * Via.cpp
 *
 *  Created on: 16 mar. 2020
 *      Author: jorge1807
 */

#include "Via.h"


Via :: Via () {
	this->tipoVia = "";
	this->nombreVia = "";
	this->longitudVia = 0.0;
	this->codigoVia = 0;
	this->barrioVia = 0;
}


Via :: Via (string tipoVia, string nombreVia, float longitudVia, int codigoVia, int barrioVia) {
	this -> tipoVia = tipoVia;
	this -> nombreVia = nombreVia;
	this -> longitudVia = longitudVia;
	this -> codigoVia = codigoVia;
	this -> barrioVia = barrioVia;
}


void Via :: setTipoVia (string tipoVia) {
	this -> tipoVia = tipoVia;
}


void Via :: setNombreVia (string nombreVia) {
	this -> nombreVia = nombreVia;
}


void Via :: setLongitudVia (float longitudVia) {
	this -> longitudVia = longitudVia;
}


void Via :: setCodigoVia (int codigoVia) {
	this -> codigoVia = codigoVia;
}


void Via :: setBarrioVia (int barrioVia) {
	this -> barrioVia = barrioVia;
}


string Via :: getTipoVia () {
	return this -> tipoVia;
}


string Via :: getNombreVia () {
	return this -> nombreVia;
}


float Via :: getLongitudVia () {
	return this -> longitudVia;
}


int Via :: getCodigoVia () {
	return this -> codigoVia;
}


int Via :: getBarrio () {
	return this -> barrioVia;
}


void Via :: mostrarVia () {
	cout << this -> tipoVia << " - " << this -> nombreVia << " - " << this -> longitudVia << " - " << this -> codigoVia << " - " << this -> barrioVia << endl;
}


Via :: ~ Via () {}
