#ifndef FUNCIONESGENERALES_H
#define FUNCIONESGENERALES_H

#include <iostream>
#include <funcionesGenerales.h>
#include <fstream>
#include <string>

using namespace std;

void menuGeneral(const string& fileName);


int opcionesMenuGeneral(const string& mensaje1, const string& mensaje2, const string opcionesValidas[], int size);
bool menuSalida();
void mensajeSalida();
void limpiarPantalla();
int inicioSesion();
int menuGestionDeRed();
int menuGestionEstaciones();

#endif // FUNCIONESGENERALES_H
