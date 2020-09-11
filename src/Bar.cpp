/*
 * Bar.cpp
 *
 *  Created on: 15 Mar 2020
 *      Author: raul
 */

#include <iostream>
#include "Bar.h"
using namespace std;


Bar :: Bar () {
	nombreBar = "";
	capacidadPersonas = 0;
	sirveComida = "";
	tipoComida = "";
	telefono = "";
	codigoPostal = 0;
	codigoViaBar = 0;
	portal = 0;
	apertura = 0.0;
	cierre = 0.0;
}


Bar :: Bar (string nombreBar, int capacidadPersonas, string sirveComida, string tipoComida, string telefono, int codigoPostal, int codigoViaBar, int portal, float apertura, float cierre) {
	this -> nombreBar = nombreBar;
	this -> capacidadPersonas = capacidadPersonas;
	this -> sirveComida = sirveComida;
	this -> tipoComida = tipoComida;
	this -> telefono = telefono;
	this -> codigoPostal = codigoPostal;
	this -> codigoViaBar = codigoViaBar;
	this -> portal = portal;
	this -> apertura = apertura;
	this -> cierre = cierre;
}


Bar :: Bar (const Bar &other) {
	this -> nombreBar = other.nombreBar;
	this -> capacidadPersonas = other.capacidadPersonas;
	this -> sirveComida = other.sirveComida;
	this -> tipoComida = other.tipoComida;
	this -> telefono = other.telefono;
	this -> codigoPostal = other.codigoPostal;
	this -> codigoViaBar = other.codigoViaBar;
	this -> portal = other.portal;
	this -> apertura = other.apertura;
	this -> cierre = other.cierre;
}


void Bar :: setNombreBar (string nombreBar) {
	this -> nombreBar = nombreBar;
}


void Bar :: setCapacidadPersonas (int capacidadPersonas) {
	this -> capacidadPersonas = capacidadPersonas;
}


void Bar :: setSirveComida (string sirveComida) {
	this -> sirveComida = sirveComida;
}


void Bar :: setTipoComida (string tipoComida) {
	this -> tipoComida = tipoComida;
}


void Bar :: setTelefono (string telefono) {
	this -> telefono = telefono;
}


void Bar :: setCodigoPostal (int codigoPostal) {
	this -> codigoPostal = codigoPostal;
}


void Bar :: setCodigoViaBar (int codigoViaBar) {
	this -> codigoViaBar = codigoViaBar;
}


void Bar :: setPortal (int portal) {
	this -> portal = portal;
}


void Bar :: setApertura (float apertura) {
	this -> apertura = apertura;
}


void Bar :: setCierre (float cierre) {
	this -> cierre = cierre;
}


string Bar :: getNombreBar () {
	return this -> nombreBar;
}


int Bar :: getCapacidadPersonas () {
	return this -> capacidadPersonas;
}


string Bar :: getSirveComida () {
	return this -> sirveComida;
}


string Bar :: getTipoComida () {
	return this -> tipoComida;
}


string Bar :: getTelefono () {
	return this -> telefono;
}


int Bar :: getCodigoPostal () {
	return this -> codigoPostal;
}


int Bar :: getCodigoViaBar () {
	return this -> codigoViaBar;
}


int Bar :: getPortal () {
	return this -> portal;
}


float Bar :: getApertura () {
	return this -> apertura;
}


float Bar :: getCierre () {
	return this -> cierre;
}


void Bar :: mostrarBar () {
	cout << this -> nombreBar << " - " << this -> capacidadPersonas << " - " << this -> sirveComida << " - " << this -> tipoComida << " - " << this -> telefono << this -> codigoPostal << " - " << this -> codigoViaBar << " - " << this -> portal << " - " << this -> apertura << " - " << this -> cierre << endl;
}


Bar :: ~Bar () {}
