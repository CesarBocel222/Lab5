#pragma once
#include "Pokedex.h"
ref class Quick_Sort
{
	public:
        
    static int dividir(array<Pokedex^>^ pokemones, int inicio, int fin) {
        int izq;
        int der;
        Pokedex^ pibote;
        Pokedex^ temp;

        pibote = pokemones[inicio];
        izq = inicio;
        der = fin;

        while (izq < der) {
            while (pokemones[der]->NationalN >  pibote->NationalN) {
                der--;
            }

            while ((izq < der) && (pokemones[izq]->NationalN <= pibote->NationalN)) {
                izq++;
            }

            // Si todavia no se cruzan los indices seguimos intercambiando
            if (izq < der) {
                temp = pokemones[izq];
                pokemones[izq] = pokemones[der];
                pokemones[der]= temp;
            }
        }

        //Los indices ya se han cruzado, ponemos el pivote en el lugar que le corresponde
        temp = pokemones[der];
        pokemones[der] = pokemones[inicio];
        pokemones[inicio] = temp;

        //La nueva posición del pivote
        return der;

    }

    static void quicksort(array<Pokedex^>^ pokemones, int inicio, int fin)
    {
        int pivote;
        if (inicio < fin)
        {
            pivote = dividir(pokemones, inicio, fin);
            quicksort(pokemones, inicio, pivote - 1);//ordeno la lista de los menores
            quicksort(pokemones, pivote + 1, fin);//ordeno la lista de los mayores
        }
    }

};

