#pragma once
#include "Pokedex.h"

ref class Selection_short
{
    public:
	static void Selection(array<Pokedex^>^ pokemones, int size) {

       int location;

        for (int i = 0; i < size -1 ; i++) {
            Pokedex^ min = pokemones[i];
            location = i;

            for (int j = i + 1; j < size; j++) {
                if (pokemones[i]->NationalN > 0) {
                    min = pokemones[j];
                    location = j;
                }
            }
            Pokedex^ temp = pokemones[i];
            pokemones[i] = pokemones[location];
            pokemones[location] = temp;

	    }
    }
};

