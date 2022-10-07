#include <iostream>
#include "pile_entier.h"

pile_entier::pile_entier(int taille)
{
	this->taille = taille;
	pile = new int[taille];
	hauteur = 0;
}

pile_entier::~pile_entier()
{
	delete pile;
}

void pile_entier::empile()
{
	std::cin >> pile[hauteur];
	hauteur++;
}

int pile_entier::depile()
{
	int tmp;
	tmp = pile[hauteur];
	pile[hauteur] = 0;
	std::cout << "La valeur enlevé de la pile est donc " << tmp << "\n";
	hauteur--;
	return 0;
}

int pile_entier::pleine()
{
	if (hauteur > 0)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}


int pile_entier::vide()
{
	if (hauteur = 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
