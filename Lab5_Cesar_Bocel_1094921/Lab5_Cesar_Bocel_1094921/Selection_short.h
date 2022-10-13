#pragma once
#include "Pokedex.h"
using namespace std;
ref class Selection_short
{
    public:
	static void Selection(array<Pokedex^>^ pokemones, int size ) {

       int location;

        for (int i = 0; i < size - 1; i++) {
            Pokedex^ min = pokemones[i];
            location = i;

            for (int j = i + 1; j < size; j++) {
                if (CompararNumPKNM(pokemones[i], pokemones[j]) > 0) {
                    min = pokemones[j];
                    location = j;
                }
            }
            Pokedex^ temp = pokemones[i];
            pokemones[i] = pokemones[location];
            pokemones[location] = temp;

	    }
    }

    static int CompararNumPKNM(Pokedex^ PKMN1, Pokedex^ PKMN2) {
        if (PKMN1->NationalN > PKMN2->NationalN) {
            return 1;
        }else if (PKMN1->NationalN < PKMN2->NationalN) {
            return -1;
        }
        else {//Orden por nombres
            if (PKMN1->Nombre->CompareTo(PKMN2->Nombre)>0) {
                return 1;
            }
            else if (PKMN1->Nombre->CompareTo(PKMN2->Nombre) < 0) {
                return -1;
            }
            else{
                return 0;
            }
        }
    }
    static int ComparargenPKNM(Pokedex^ PKMN1, Pokedex^ PKMN2) {
        if (PKMN1->Generacion > PKMN2->Generacion) {
            return 1;
        }
        else if (PKMN1->NationalN < PKMN2->NationalN) {
            return -1;
        }
        else {//Orden por nombres
            if (PKMN1->Nombre->CompareTo(PKMN2->Nombre) > 0) {
                return 1;
            }
            else if (PKMN1->Nombre->CompareTo(PKMN2->Nombre) < 0) {
                return -1;
            }
            else {
                return 0;
            }
        }
    }
};

