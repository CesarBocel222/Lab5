#pragma once
using namespace System;
ref class Pokedex
{
public:

	int NationalN;
	String^ Nombre;
	int Generacion;

	Pokedex(int _NationalN, String^ _Nombre, int _Generacion) {
		NationalN = _NationalN;
		Nombre = _Nombre;
		Generacion = _Generacion;
	}
};

