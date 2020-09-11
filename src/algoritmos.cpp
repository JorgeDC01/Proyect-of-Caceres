//============================================================================
// Name        : algoritmos.cpp
// Author      : Profesores de la asignatura EDI
// Version     : 2019/20
// Copyright   : Your copyright notice
// Description : Implementación de los algoritmos del proyecto
//============================================================================


#include "pruebaBar.h"
#include "pruebaVia.h"
#include "pruebaBarrio.h"
#include "pruebaAlgoritmos.h"
#include "algoritmos.h"


using namespace std;

// MAIN function
int main () {

	//moduloPruebasBar ();
	//moduloPruebasVia ();
	//conjuntoPruebasBarrio ();
	//pruebasAlgoritmosParte1();
	//pruebasAlgoritmosParte2();

	Algoritmos *a = new Algoritmos();
	delete a;

	return 0;
}


// ******************** PRIVATE OPERATIONS ********************


void Algoritmos::cargarDatos() {

	Barrio *b;
	ifstream flujo_entrada;
	string campo1, campo2, campo3, campo4, campo5, campo6, campo7, campo8, campo9, campo10;
	flujo_entrada.open("Barrio.csv");
	if (flujo_entrada.is_open()) {
		getline(flujo_entrada, campo1); // leo la cabecera
		while (!flujo_entrada.eof()) {
			getline(flujo_entrada, campo1, ';');
			if (!flujo_entrada.eof()){
				getline(flujo_entrada, campo2, ';');
				getline(flujo_entrada, campo3, ';');
				getline(flujo_entrada, campo4, ';');
				getline(flujo_entrada, campo5);

				b = new Barrio(campo1, atof(campo2.c_str()), atof(campo3.c_str()), atoi(campo4.c_str()),
						campo5);
				// Método de insercion por orden de barrios
				insertarOrdenBarrios(b);
			}
		}

	} else
		cout << "ERROR: fichero Barrio.csv no encontrado" << endl	;
	flujo_entrada.close();

	Via *v;
	ifstream flujo_entrada2;
	flujo_entrada2.open("Via.csv");
	if (flujo_entrada2.is_open()) {
		getline(flujo_entrada2, campo1); // leo la cabecera
		while (!flujo_entrada2.eof()) {
			getline(flujo_entrada2, campo1, ';');
			if (!flujo_entrada2.eof()){
				getline(flujo_entrada2, campo2, ';');
				getline(flujo_entrada2, campo3, ';');
				getline(flujo_entrada2, campo4, ';');
				getline(flujo_entrada2, campo5);

				v = new Via(campo1,campo2, atof(campo3.c_str()), atoi(campo4.c_str()), atoi(campo5.c_str()));

				// Método de insercion por orden de vias
				insertarVias(v);
			}
		}

	} else
		cout << "ERROR: fichero Via.csv no encontrado" << endl	;
	flujo_entrada2.close();


	Bar * bar;
	ifstream flujo_entrada3;
	flujo_entrada3.open("Bar.csv");
	if (flujo_entrada3.is_open()) {
		getline(flujo_entrada3, campo1); // leo la cabecera
		while (!flujo_entrada3.eof()) {
			getline(flujo_entrada3, campo1, ';');
			if (!flujo_entrada3.eof()){
				getline(flujo_entrada3, campo2, ';');
				getline(flujo_entrada3, campo3, ';');
				getline(flujo_entrada3, campo4, ';');
				getline(flujo_entrada3, campo5, ';');
				getline(flujo_entrada3, campo6, ';');
				getline(flujo_entrada3, campo7, ';');
				getline(flujo_entrada3, campo8, ';');
				getline(flujo_entrada3, campo9, ';');
				getline(flujo_entrada3, campo10);


				bar = new Bar(campo1, atoi(campo2.c_str()),campo3,campo4,campo5,atoi(campo6.c_str()),atoi(campo7.c_str()),atoi(campo8.c_str()),atof(campo9.c_str()),atof(campo10.c_str()));

				// Método de insercion por orden de bares
				insertarOrdenBares (bar); //Insertar en lista
				insertarBar (bar); //Insertar en árbol
			}
		}
	} else
		cout << "ERROR: fichero Bar.csv no encontrado" << endl	;
	flujo_entrada3.close();
	b = NULL;
	v = NULL;
	bar = NULL;
}


void Algoritmos :: run () {
	char respuesta;
	string nombreBarrio;
	Via *aux;
	Cola <Bar*> *auxCola = new Cola <Bar*>();
	ListaPI <Bar*> *listaBaresCapacidad = new ListaPI<Bar*>;
	ListaPI <Bar*> *ComidaBares = new ListaPI<Bar*>();
	bool salir = false;
	string tipoVia = "";
	string nombreVia = "";
	string nombreBar = "";
	Bar* bar = nullptr;
	string raizBares;
	int cont;
	string tipoComida;
	int capacidad;


	cout << endl;
	cout << "--------------Menú del programa--------------" << endl;
	cout << "1. Mostrar las vias de un determinado barrio de Cáceres" << endl;
	cout << "2. Mostrar vía más larga de Cáceres" << endl;
	cout << "3. Mostrar los bares de Cáceres que sirven un determinado tipo de comida"<< endl;
	cout << "4. Crear fichero de texto de los bares en orden alfabético inverso" << endl;
	cout << "5. Crear un fichero de texto con los bares de una determinada via dado su nombre completo" << endl;
	cout << "6. Mostrar bar y nombre de la vía en la que se encuentra" << endl;
	cout << "7. Mostrar los bares que empiezan por una raiz determinada en orden por capacidad" << endl;
	cout << "8. Mostrar bares que sirven un tipo de comida y capacidad superior a una dada" << endl;
	cout << "9. Mostrar en barrio que más bares tiene y crear un fichero de texto con ellos" << endl;
	cout << "f.Salir del programa" << endl;
	cout << endl;

	while(!salir){

		cout << "Introduce un número del 1 al 9 para elegir en el menú: " << endl;
		cin >> respuesta;

		switch(respuesta){

		case '1':{
			cout << endl;
			cout << "--------------| Algoritmo 1 |--------------" << endl;
			if(!CjtoBarrios->estaVacia()){
				cout << "Introduce el nombre del barrio a mostrar..." << endl;
				cin >> nombreBarrio;
				Algoritmo1(nombreBarrio);
			}
			else
				cout << "$Error en la carga de datos..." << endl;
			cout << endl;
		}
		break;

		case '2':{
			cout << "--------------| Algoritmo 2 |--------------" << endl;
			if(!CjtoBarrios->estaVacia()){
				Algoritmo2(aux);
				cout << "La vía más larga del conjunto de todos los barrios es: " << endl;
				aux->mostrarVia();
			}
			else
				cout << "$Error en la carga de datos..." << endl;
			cout << endl;
		}
		break;

		case '3':{
			cout << endl;
			cout << "--------------| Algoritmo 3 |--------------" << endl;
			if(!CjtoBares->estaVacia()){
				cout << "Introduce el tipo de comida de los bares que deseas mostrar: " << endl;
				cin >> tipoComida;
				cout << endl;
				cout << "TIPO:  " <<  tipoComida << endl;
				Algoritmo3(tipoComida, auxCola, cont);
				mostrarColaBares(auxCola);
				cout << "Número de bares: " << cont << endl;
			}
			else
				cout << "$Error en la carga de datos..." << endl;
			cout << endl;
		}
		break;

		case '4':{
			cout << endl;
			cout << "--------------| Algoritmo 4 |--------------" << endl;
			if (!arbolBares -> empty ()) {
				UnoAlgoritmo ();
				cout << "Fichero de texto creado con los bares en orden alfabético inverso" << endl;
			}
			else
				cout << "$Error en la carga de datos..." << endl;
			cout << endl;
		}
		break;

		case '5':{
			cout << endl;
			cout << "--------------| Algoritmo 5 |--------------" << endl;
			cout << "Introduce el tipo de Vía:" << endl;
			cin >> tipoVia;
			cout << "Introduce el nombre de Vía:" << endl;
			cin >> nombreVia;

			if (!arbolBares -> empty ()) {
				DosAlgoritmo (tipoVia, nombreVia);
				cout << "Fichero generado con los bares de un tipo y nombre de la Vía" << endl;
			}
			else
				cout << "$Error en la carga de datos..." << endl;
			cout << endl;
		}
		break;

		case '6':{
			cout << endl;
			cout << "--------------| Algoritmo 6 |--------------" << endl;
			cout << "Introduce el nombre del bar a buscar:" << endl;
			cin >> nombreBar;

			if(!arbolBares->empty()){
				if(TresAlgoritmo(nombreBar,bar,nombreVia)){
					bar->mostrarBar();
					cout << "Via en la que se encuentra el bar " << bar->getNombreBar() << ": " << nombreVia << endl;
				}
				else
					cout << "El bar no pudo ser encontrado..." << endl;
			}
			else
				cout<< "$Error en la carga de datos..." << endl;
		}
		break;
		case '7':{
			cout << endl;
			cout << "--------------| Algoritmo 7 |--------------" << endl;
			cout << "Introduce la raiz de los bares a buscar: " << endl;
			cin >> raizBares;
			cont = 0;
			if(!arbolBares->empty()){
				CuatroAlgoritmo(raizBares,listaBaresCapacidad);
				cout << "Bares que empiezan por la raiz " << raizBares << endl;
				cont = mostrarListaBares(listaBaresCapacidad);
				cout << "Numero de bares: " << cont << endl;
				cout << endl;
			}
			else
				cout << "$Error en la carga de datos" << endl;
			break;

		case '8':{
			cout << endl;
			cout << "--------------| Algoritmo 8 |--------------" << endl;
			cout << "Introduce el tipo de comida: " << endl;
			cin >> tipoComida;
			cout << "Introduce la capacidad mínima de los bares:" << endl;
			cin >> capacidad;
			if(!arbolBares->empty()){
				SeisAlgoritmo(tipoComida,capacidad,ComidaBares);
				cout << "Tipo de comida: " << tipoComida << "," << "Capacidad: > " << capacidad << endl;
				cont = mostrarListaBares(ComidaBares);
				cout << "Numero de bares: " << cont << endl;
				cout << endl;
			}
			else
				cout << "$Error en la carga de datos..." << endl;
		}
		break;

		case '9':{
			cout << endl;
			cout << "--------------| Algoritmo 9 |--------------" << endl;
			if(!arbolBares->empty()){
				Barrio *barrio;
				SieteAlgoritmo(barrio);
				cout << "El barrio que más bares tiene es: " << barrio->getNombreBarrio() << endl;
				cout << "Fichero de texto creado con los bares del barrio que más bares tiene" << endl;
			}
			else
				cout << "$Error en la carga de datos..." << endl;
			cout << endl;
		}
		break;
		case 'f':{
			cout << "Fin del programa." << endl;
			salir  = true;
		}
		break;
		default:
			cout << "Error en el menú" << endl;
			cout << endl;
		}
		}
	}
	delete auxCola;
	delete listaBaresCapacidad;
	delete ComidaBares;
}



void Algoritmos :: root (BSTree <KeyValue <string, Bar*>>* abb, Bar *&b) {
	KeyValue <string, Bar*> pair = abb->root();
	b = pair.value();
}


// ******************** PRIVATE INTERFACE ********************

void Algoritmos :: numeroBaresdeBarrio (Barrio *b, BSTree <KeyValue <string, Bar*>>* abb, int &cont) {

	Bar *aux;
	Via *auxVia;
	if(!abb->empty()){

		root(abb,aux);
		if(b->buscarVia(aux->getCodigoViaBar(),auxVia)){
			cont++;
		}
		if(abb->left() != NULL)
			numeroBaresdeBarrio(b,abb->left(),cont);
		if(abb->right() != NULL)
			numeroBaresdeBarrio(b,abb->right(),cont);
	}
}


bool Algoritmos :: buscarBarArbol (BSTree <KeyValue <string, Bar* >>* abb, string nombreBar, KeyValue <string, Bar*> &pair) {
	bool enc = false;
	string nombreExtra;
	pair = abb -> root ();
	nombreExtra = pair.key ();
	if ((nombreExtra == nombreBar) && (!enc)) {
		enc = true;
	}
	else {
		if ((nombreExtra > nombreBar) && ((abb -> left ()) != nullptr) && (!enc)) {
			enc = buscarBarArbol ((abb -> left ()), nombreBar, pair);
		}
		if ((nombreExtra < nombreBar) && ((abb -> right ()) != nullptr) && (!enc)) {
			enc = buscarBarArbol ((abb -> right ()), nombreBar, pair);
		}
	}

	return enc;
}


bool Algoritmos :: buscarBarLista (ListaPI <Bar*>* lBares, string nombreBar, Bar* &b) {
	bool enc = false;
	if (!lBares -> estaVacia ()) {
		lBares -> moverInicio ();
		while ((!lBares -> finLista ()) && (!enc)) {
			lBares -> consultar (b);
			if ((b -> getNombreBar ()) == nombreBar) {
				enc = true;
			}
			else {
				lBares -> avanzar ();
			}
		}
	}
	return enc;
}


int Algoritmos::mostrarArbolBares(BSTree<KeyValue<string, Bar*>> *abb) {
	int cont = 0;
	Bar *b;
	if (!abb->empty()){
		if(abb->left() != NULL)
			cont = cont +mostrarArbolBares(abb->left());
		root(abb, b);
		b->mostrarBar();

		cont ++;
		if(abb->right() != NULL)
			cont = cont + mostrarArbolBares(abb->right());
	}
	return cont;
}


int Algoritmos :: mostrarListaBares (ListaPI <Bar*>* lBares) {
	int numBares = 0;
	Bar* barAux = nullptr;
	if (!lBares -> estaVacia ()) {
		lBares -> moverInicio ();
		while (!lBares -> finLista ()) {
			lBares -> consultar (barAux);
			barAux ->mostrarBar();
			numBares++;
			lBares -> avanzar ();
		}
	}
	return numBares;
}


void Algoritmos :: UnoAlgoritmo (BSTree <KeyValue <string, Bar*>>* abb, ofstream &escritura) {
	Pila <BSTree <KeyValue <string, Bar* >>* > *pilaAux = new Pila <BSTree <KeyValue <string, Bar*> >* > (); //Pila que contiene punteros a árboles.
	BSTree <KeyValue <string, Bar*>> *auxTree = abb; //Puntero auxiliar a un árbol que apunta a la raíz del árbol.
	Bar* barAux = nullptr; //Bar auxiliar para la recogida de datos

	while ((!pilaAux -> vacia ()) || (auxTree != NULL)) {
		if (auxTree != nullptr) {
			pilaAux -> apilar (auxTree);
			auxTree = auxTree -> right ();
		}
		else {
			pilaAux -> cima (auxTree);
			pilaAux -> desapilar ();
			root (auxTree, barAux);
			escritura << barAux -> getNombreBar () << ", " << barAux -> getCapacidadPersonas () << ", " << barAux -> getSirveComida () << ", "  << barAux -> getTipoComida () << endl;
			auxTree = auxTree -> left ();
		}
	}
	delete pilaAux;
}


void Algoritmos :: DosAlgoritmo (BSTree <KeyValue <string, Bar*> >* abb, ofstream &escritura, Via* v, int &cont) {
	Bar* barAux = nullptr; //Puntero a bar auxiliar, para recoger los datos de los nodos del árbol de forma temporal.

	if(!abb->empty()){

		if (abb->left()!= nullptr) {
			DosAlgoritmo (abb->left (),escritura,v, cont);
		}
		root (abb, barAux);
		if (barAux->getCodigoViaBar() == v->getCodigoVia()) {
			cont++;
			escritura << barAux -> getNombreBar () << ", " << barAux -> getCapacidadPersonas () << ", " << barAux -> getSirveComida () << ", " << barAux -> getTipoComida () <<endl;
		}

		if ((abb -> right ()) != nullptr) {
			DosAlgoritmo ((abb -> right ()), escritura, v, cont);
		}
	}
}


bool Algoritmos :: TresAlgoritmo (BSTree <KeyValue<string,Bar*>>* abb, string nombreBar, Bar* &bar) {
	bool enc = false;

	if (!abb -> empty ()) {
		root (abb, bar);
	}
	if(bar -> getNombreBar () == nombreBar){
		enc = true;
	}
	else if(nombreBar < bar->getNombreBar() && (abb -> left () != nullptr)){
		enc = TresAlgoritmo(abb->left(), nombreBar, bar);
	}
	else if(nombreBar > bar -> getNombreBar () && (abb -> right () != nullptr)) {
		enc = TresAlgoritmo ((abb -> right ()), nombreBar, bar);
	}
	return enc;
}


void Algoritmos :: CuatroAlgoritmo (BSTree <KeyValue <string, Bar*> >* abb, string raiz,ListaPI <Bar*>* &lBares) {

	Bar *auxBar;
	if(!abb->empty()){

		root(abb,auxBar);
		if(auxBar->getNombreBar().find(raiz) == 0){

			//insertar en orden en lista
			insertarListaCapacidad(lBares,auxBar->getCapacidadPersonas(),auxBar);
			if(abb->left() != NULL){
				root(abb->left(),auxBar);
				if(auxBar->getNombreBar().find(raiz) == 0)
					CuatroAlgoritmo(abb->left(),raiz,lBares);
			}
			if(abb->right() != NULL){
				root(abb->right(),auxBar);
				if(auxBar->getNombreBar().find(raiz) == 0)
					CuatroAlgoritmo(abb->right(),raiz,lBares);
			}
		}
		else{
			if(abb->left() != NULL)
				CuatroAlgoritmo(abb->left(),raiz,lBares);
			if(abb->right() != NULL)
				CuatroAlgoritmo(abb->right(),raiz,lBares);
		}
	}
}


void Algoritmos :: CincoAlgoritmo (BSTree <KeyValue <string, Bar*> >* abb, ListaPI <Bar*>* lBares, ifstream &lectura) {
	string nombreBar, capacidad, sirveComida, tipoComida, telefono, codPostal, codViaBar, portal, apertura, cierre; //Valores para almacenar los distintos datos del fichero.
	int n, i;
	Bar* barExtra = nullptr;
	KeyValue <string, Bar*> pair;

	getline (lectura, nombreBar);
	while (!lectura.eof ()) {
		getline (lectura, nombreBar, '#');

		if (nombreBar == "A") {
			getline (lectura, nombreBar);
			n = atoi (nombreBar.c_str ());
			for (i = 0; i < n; i++) {
				getline (lectura, nombreBar, ';');
				getline (lectura, capacidad, ';');
				getline (lectura, sirveComida, ';');
				getline (lectura, tipoComida, ';');
				getline (lectura, telefono, ';');
				getline (lectura, codPostal, ';');
				getline (lectura, codViaBar, ';');
				getline (lectura, portal, ';');
				getline (lectura, apertura, ';');
				getline (lectura, cierre);

				barExtra = new Bar(nombreBar, atoi (capacidad.c_str ()), sirveComida, tipoComida, telefono, atoi (codPostal.c_str ()), atoi (codViaBar.c_str ()), atoi (portal.c_str ()),atof (apertura.c_str ()), atof (cierre.c_str ()));

				insertarOrdenBares (barExtra); //Inserción en orden en la lista.
				insertarBar (barExtra); //Inserción en orden en el árbol.
			}
		}

		if (nombreBar == "M") {
			getline (lectura, nombreBar);
			n = atoi (nombreBar.c_str ());
			for (i = 0; i < n; i++) {
				getline (lectura, nombreBar, ';');
				getline (lectura, capacidad, ';');
				getline (lectura, sirveComida, ';');
				getline (lectura, tipoComida, ';');
				getline (lectura, telefono, ';');
				getline (lectura, codPostal, ';');
				getline (lectura, codViaBar, ';');
				getline (lectura, portal, ';');
				getline (lectura, apertura, ';');
				getline (lectura, cierre);

				if (buscarBarArbol (abb, nombreBar, pair)) {
					barExtra = pair.value ();
					barExtra -> setCapacidadPersonas (atoi (capacidad.c_str ()));
					barExtra -> setSirveComida (sirveComida);
					barExtra -> setTipoComida (tipoComida);
					barExtra -> setTelefono (telefono);
					barExtra -> setCodigoPostal (atoi (codPostal.c_str ()));
					barExtra -> setCodigoViaBar (atoi (codViaBar.c_str ()));
					barExtra -> setPortal (atoi (portal.c_str ()));
					barExtra -> setApertura (atof (apertura.c_str ()));
					barExtra -> setCierre (atof (cierre.c_str ()));
				}
			}
		}

		if (nombreBar == "B") {
			getline (lectura, nombreBar);
			n = atoi (nombreBar.c_str ());
			for (i = 0; i < n; i++) {
				getline (lectura, nombreBar);
				if (buscarBarLista (lBares, nombreBar, barExtra)) {
					lBares -> borrar (); //Borra de la lista el nodo que contiene el bar indicado.
					abb -> remove (pair);
					delete barExtra;
				}
			}
		}
	}
}


void Algoritmos :: SeisAlgoritmo (BSTree <KeyValue <string, Bar*> >* abb, string tipoComida, int capacidad, ListaPI <Bar*>* &listaBares) {
	Bar* aux = nullptr; //Puntero a bar auxiliar, para obtener la información de los nodos del árbol de forma temporal.
	if (!abb -> empty ()) {
		if (abb -> left () != nullptr) {
			SeisAlgoritmo (abb -> left (), tipoComida, capacidad, listaBares);
		}

		root (abb, aux);
		if (aux -> getTipoComida () == tipoComida && aux -> getCapacidadPersonas () > capacidad) {
			listaBares -> insertar (aux); //Se inserta el bar que sirva el tipo de comida indicado y cuya capacidad sea mayor a la dada.
			listaBares -> avanzar ();
		}

		if (abb -> right () != nullptr) {
			SeisAlgoritmo (abb -> right (), tipoComida, capacidad, listaBares);
		}
	}
}


void Algoritmos :: SieteAlgoritmo (BSTree <KeyValue <string, Bar*> >* abb, Barrio* b, ofstream &salida) {
	Bar* auxBar = nullptr; //Puntero a bar auxiliar que almacena la información de un bar de forma temporal.
	Via* viaAux = nullptr; //Puntero a via

	if (!abb -> empty ()) {

		if (abb->left() != nullptr) {
			SieteAlgoritmo (abb->left(), b, salida);
		}
		root (abb, auxBar);
		if (b->buscarVia(auxBar->getCodigoViaBar(), viaAux)) {
			salida << auxBar->getNombreBar() << " - " << "pax " << auxBar->getCapacidadPersonas() << " - " << auxBar->getSirveComida() << " - " << auxBar->getTipoComida() << endl;
		}

		if ((abb -> right ()) != nullptr) {
			SieteAlgoritmo (abb -> right(), b, salida);
		}
	}
}


// ******************** PUBLIC INTERFACE ********************

Algoritmos :: Algoritmos () {

	cout << "Programming Project v1.00 (EDI)." << endl;
	cout << "           Authores:  JORGE DEL CASTILLO GÓMEZ, RAUL HORMIGO CERÓN." << endl;
	cout << "           Date:	   June 2nd, 2020." << endl;

	// reserva de memoria para los atributos

	CjtoBarrios = new ListaPI <Barrio*>;
	CjtoBares = new ListaPI <Bar*>;
	arbolBares = new BSTree <KeyValue<string,Bar*>>;
	cargarDatos();
	run();
}


void Algoritmos :: insertarOrdenBarrios (Barrio *b) {

	bool enc = false;
	Barrio *aux;

	CjtoBarrios->moverInicio();
	while(!CjtoBarrios->finLista() && !enc){
		CjtoBarrios->consultar(aux);

		if(aux->getNombreBarrio() > b->getNombreBarrio()){
			enc = true;
		}
		else
			CjtoBarrios->avanzar();
	}
	CjtoBarrios->insertar(b);
}


void Algoritmos :: insertarVias (Via *v) {

	Barrio *aux;
	bool enc = false;

	CjtoBarrios->moverInicio();
	while(!CjtoBarrios->finLista() && !enc){
		CjtoBarrios->consultar(aux);
		if(v->getBarrio() == aux->getCodigoBarrio()){

			// Si encuentro el barrio por el que pasa la via, insertarVia
			aux->insertarOrdenVias(v);
			enc = true;
		}
		CjtoBarrios->avanzar();
	}
}


void Algoritmos::insertarOrdenBares(Bar *bar) {

	Bar *b;
	bool enc = false;

	CjtoBares->moverInicio();
	while(!CjtoBares->finLista() && !enc){
		CjtoBares->consultar(b);
		if(b->getNombreBar() > bar->getNombreBar()) {
			enc = true;
		}
		else {
			CjtoBares->avanzar();
		}
	}
	CjtoBares->insertar(bar);
}


void Algoritmos::mostrarColaBares(Cola<Bar*> *cola) {
	// mostramos los bares de la cola y los eliminamos.
	Bar *aux;
	while(!cola->vacia()){
		cola->primero(aux);
		aux->mostrarBar();
		cola->desencolar();
	}
}


void Algoritmos::mostrarBarrios () {

	Barrio *aux;

	CjtoBarrios -> moverInicio ();
	while(!CjtoBarrios->finLista()){
		CjtoBarrios->consultar(aux);

		aux->mostrarBarrio();

		CjtoBarrios->avanzar();
	}
}


void Algoritmos :: mostrarListaBares () {

	int numBares = 0;
	if (!CjtoBares -> estaVacia ()) {
		numBares = mostrarListaBares (CjtoBares);
	}
	cout << "El número de bares en la lista es: " << numBares << endl;
}


bool Algoritmos :: busquedaBarrio (string nombreBarrio, Barrio *&b) {

	Barrio *aux;
	bool enc = false;

	CjtoBarrios->moverInicio();
	while(!CjtoBarrios->finLista() && !enc){
		CjtoBarrios->consultar(aux);
		if(aux->getNombreBarrio() == nombreBarrio)
			enc = true;
		else
			CjtoBarrios->avanzar();
	}
	if(enc)
		b = aux;
	return enc;
}


void Algoritmos :: Algoritmo1 (string nombreBarrio) {

	bool enc = false;
	Barrio *aux;

	CjtoBarrios->moverInicio();
	while(!CjtoBarrios->finLista() && !enc){
		CjtoBarrios->consultar(aux);
		if(aux->getNombreBarrio() == nombreBarrio){
			enc = true;
		}
		else
			CjtoBarrios->avanzar();
	}

	if(enc){
		// mostrar vias
		aux->mostrarBarrio();
	}
	cout << "Fin del mostrar Barrio " << aux->getNombreBarrio() << "." << endl;
}


void Algoritmos :: Algoritmo2 (Via *&v) {

	Via*auxVia;
	Barrio *b;
	Barrio *auxBarrio;

	if(!CjtoBarrios->estaVacia()){
		CjtoBarrios->moverInicio();
		CjtoBarrios->consultar(b);
		b->viaMasLarga(v);

		CjtoBarrios->avanzar();

		while(!CjtoBarrios->finLista()){

			CjtoBarrios->consultar(auxBarrio);
			auxBarrio->viaMasLarga(auxVia);

			if(auxVia->getLongitudVia() >= v->getLongitudVia()){

				b = auxBarrio;
				v = auxVia;
			}
			CjtoBarrios->avanzar();
		}
	}
}


void Algoritmos :: Algoritmo3 (string tipoComida, Cola <Bar*> *&cola, int &numeroBares) {

	numeroBares = 0;
	Bar *aux;
	CjtoBares->moverInicio();
	while(!CjtoBares->finLista()){
		CjtoBares->consultar(aux);
		if(aux->getTipoComida() == tipoComida){
			cola->encolar(aux);
			numeroBares++;
		}
		CjtoBares->avanzar();
	}
}


void Algoritmos :: insertarBar (Bar* b) {
	KeyValue <string, Bar*> pair (b -> getNombreBar (), b);
	arbolBares -> insert (pair);
}


int Algoritmos::numeroBaresdeBarrio(Barrio *b) {

	int contador = 0;
	if(!arbolBares->empty()){
		numeroBaresdeBarrio(b,arbolBares,contador);
	}
	return contador;
}


void Algoritmos :: insertarListaCapacidad (ListaPI<Bar*>* &lBares, int capacidad,Bar *auxBar) {

	Bar *auxiliar;
	bool enc = false;

	if(lBares->estaVacia()){
		lBares->insertar(auxBar);
	}
	else{
		lBares->moverInicio();
		while(!lBares->finLista() && !enc){
			lBares->consultar(auxiliar);
			if(capacidad > auxiliar->getCapacidadPersonas()){
				enc = true;
			}
			else
				lBares->avanzar();
		}
		lBares->insertar(auxBar);
	}
}


void Algoritmos :: mostrarArbolBares () {
	int cont= 0;
	if (!arbolBares->empty())
		cont = mostrarArbolBares(arbolBares);
	cout <<"Número de bares en el árbol: "<< cont<< endl;
}


void Algoritmos :: UnoAlgoritmo () {
	ofstream escritura;
	escritura.open ("BaresInverso.txt", ios :: out);
	if (!arbolBares -> empty ()) {
		UnoAlgoritmo (arbolBares, escritura);
	}
	escritura.close ();
}


bool Algoritmos :: DosAlgoritmo (string tipoVia, string nombreVia) {

	Barrio* barrioAux = nullptr; //Puntero a barrio auxiliar, para recoger los datos de los nodos de la lista de barrios.
	Via* viaAux = nullptr;       //Puntero a vía auxiliar, que contiene los datos de la vía indicada.
	string nombreFichero =  "Bares" + tipoVia + nombreVia + ".txt";
	int cont = 0;
	bool enc = false;
	ofstream escritura;

	if(!arbolBares->empty()){

		if (!CjtoBarrios -> estaVacia ()) {
			CjtoBarrios -> moverInicio ();
			while (!CjtoBarrios -> finLista () && !enc) {
				CjtoBarrios -> consultar (barrioAux);
				enc = barrioAux->buscarVia(tipoVia, nombreVia, viaAux); //viaAux apunta a la primera vía indicada por el nombre y el tipo.
				CjtoBarrios -> avanzar ();
			}
			if(enc==true){
				escritura.open(nombreFichero);
				if(escritura.is_open()){
					DosAlgoritmo (arbolBares, escritura, viaAux, cont);
					escritura << "Numero de bares que pasan por dicha via: " << cont << endl;
				}
			}
		}
		escritura.close ();
	}
	return enc;
}


bool Algoritmos :: TresAlgoritmo (string nombreBar, Bar* &bar, string &nombreVia) {

	Barrio *aux = nullptr;
	Via *auxVia = nullptr;
	bool encBar = false;
	bool encVia = false;

	if (!arbolBares -> empty ()) {
		encBar = TresAlgoritmo (arbolBares, nombreBar, bar);

		if (encBar && !CjtoBarrios->estaVacia()) {

			CjtoBarrios -> moverInicio ();

			while (!CjtoBarrios->finLista () && !encVia) {
				CjtoBarrios -> consultar (aux);
				encVia = aux->buscarVia(bar->getCodigoViaBar (), auxVia);
				CjtoBarrios->avanzar();
			}

			if (encVia) {
				nombreVia = auxVia->getTipoVia() + " " + auxVia->getNombreVia();
			}
		}
	}
	return encBar;
}


void Algoritmos :: CuatroAlgoritmo (string raiz, ListaPI <Bar*>* &listaBares) {

	if(!arbolBares->empty()){
		CuatroAlgoritmo(arbolBares,raiz,listaBares);
	}
}


void Algoritmos :: CincoAlgoritmo () {
	if (!arbolBares -> empty () && !CjtoBares -> estaVacia ()) {
		ifstream flujo_lectura;
		flujo_lectura.open ("actualizaciones.txt");
		if (flujo_lectura.is_open ()) {
			CincoAlgoritmo (arbolBares, CjtoBares, flujo_lectura);
		}
		else {
			cout << "El fichero de texto 'actualizaciones.txt' no se ha encontrado." << endl;
		}
		flujo_lectura.close ();
	}
}


void Algoritmos :: SeisAlgoritmo (string tipoComida, int capacidad, ListaPI <Bar*>* &listaBares) {
	if (!arbolBares -> empty ()) {
		SeisAlgoritmo (arbolBares, tipoComida, capacidad, listaBares);
	}
}


void Algoritmos :: SieteAlgoritmo (Barrio *&b) {
	Barrio* actual = nullptr; //Puntero a barrio auxiliar, que apuntará al barrio que más vías tiene.
	Barrio* auxBarrio = nullptr;
	int contador = 0;

	if (!arbolBares -> empty()) {
		ofstream escritura;
		escritura.open ("MayorBaresBarrio.txt");

		if (!CjtoBarrios->estaVacia() && escritura.is_open()) {
			CjtoBarrios -> moverInicio ();
			CjtoBarrios -> consultar (actual);
			contador = numeroBaresdeBarrio(actual);
			CjtoBarrios -> avanzar ();

			while (!CjtoBarrios -> finLista ()) {
				CjtoBarrios -> consultar (auxBarrio);
				if (numeroBaresdeBarrio(auxBarrio) > contador) {
					actual = auxBarrio; //aux apunta al barrio que más vías tiene.
					contador = numeroBaresdeBarrio(auxBarrio);
				}
				CjtoBarrios -> avanzar ();
			}
		}
		b = actual;
		SieteAlgoritmo (arbolBares, actual, escritura);
		escritura << "Numero de bares: " << contador << endl;
		escritura.close ();
	}
}


Algoritmos :: ~ Algoritmos() {   // liberar memoria

	Barrio *auxBarrio;
	Bar *auxBar;

	CjtoBarrios->moverInicio();
	while(!CjtoBarrios->finLista()){
		CjtoBarrios->consultar(auxBarrio);
		delete auxBarrio;
		CjtoBarrios->borrar();
	}
	delete CjtoBarrios;

	while (!arbolBares -> empty ()) {
		root (arbolBares, auxBar);
		arbolBares -> remove (arbolBares -> root ());
		delete auxBar;
	}
	delete arbolBares;

	CjtoBares -> moverInicio ();
	while (!CjtoBares -> finLista ()) {
		CjtoBares -> borrar ();
	}
	delete CjtoBares;
}

void Algoritmos::mostrarListaGenerica(ListaPI<Bar*> *lBar) {
}
