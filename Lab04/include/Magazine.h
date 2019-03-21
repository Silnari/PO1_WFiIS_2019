#pragma once
#include "Publication.h"

/*
*	@class Magazine
*	@brief klasa reprezentujaca magazyn
*/
class Magazine:public Publication{
public:
	/*
	*	@constructor Magazine
	*	@brief domyslny konstruktor
	*/
	Magazine() = default;

	/*
	*	@fn DOI()
	*	@brief zwraca digital object identifier
	*/
	virtual std::string DOI() override {
		return "M" + _number;
	}
};
