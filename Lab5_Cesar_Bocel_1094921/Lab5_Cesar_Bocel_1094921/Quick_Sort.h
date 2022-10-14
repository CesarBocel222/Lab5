#pragma once
#include "Pokedex.h"
#include <iostream>
using namespace std;
ref class Quick_Sort
{
	public:
        int particion(Pokedex^ PKNM1,Pokedex^ PKNM2, int izq, int der) {
            int pivote = PKNM1->NationalN;
            int i = izq + 1;
            for (int j = i = 0; j<= der; j++)
            {
                if (PKNM2->NationalN< pivote)
                {
                    swap(PKNM1[i], PKNM2[j]);
                    i++;
                }
                swap(PKNM1[izq], PKNM2[i - 1]);
                return i - 1;
            }
        }
        void quicksort(array<Pokedex^>^ pokemones, int izq, int der)
    {
            if (izq < der) {
                int pivote = particion(pokemones[izq], pokemones[izq], izq, der);
                quicksort(pokemones, izq, pivote - 1);
                quicksort(pokemones, pivote - 1, der);

                   
      }
    }
};

