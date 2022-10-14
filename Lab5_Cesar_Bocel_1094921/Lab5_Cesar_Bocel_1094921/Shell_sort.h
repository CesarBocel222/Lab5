#pragma once
#include "Pokedex.h"
ref class Shell_sort
{
public:
	
	static void Shell(array<Pokedex^>^ pokemones, int size) {
		int brecha = (size / 2);
		Pokedex^ buffer;
		while (brecha >0){
			for (int  i = brecha; i < size; i++)
			{
				buffer = pokemones[i];
				int indice = i;
				while (indice >= brecha && pokemones[indice-brecha]->NationalN > buffer->NationalN)
				{
					pokemones[indice] = pokemones[indice - brecha];
					indice -= brecha;
				}
				pokemones[indice] = buffer;
			}
			brecha = brecha / 2;
		}
	}
};

