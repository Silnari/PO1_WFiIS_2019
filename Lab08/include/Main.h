#pragma once

#include "ObiektMiotajacy.h"

#include "typ1.h"
#include "typ2.h"
#include "typ3.h"

void Przetworz(typ1* wyjatek){
	std::cout << "Przetworz - wyjatek typu 1 o adresie: " << wyjatek << std::endl;

	throw;
}

void Przetworz(typ2* wyjatek){
	std::cout << "Przetworz - wyjatek typu 2 o adresie: " << wyjatek << std::endl;

	throw;
}