#pragma once
ref class Pokedex
{
public:
	int NationalN;
	System::String^ Nombre;
	int Generacion;

	Pokedex(int _NationalN, System::String^ _Nombre, int _Generacion) {
		NationalN = _NationalN;
		Nombre = _Nombre;
		Generacion = _Generacion;
	}
};

