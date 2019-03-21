#pragma once
#include <string>
#include <iostream>
#include "Publication.h"

/*
*	@class Book
*	@brief klasa reprezentujaca ksiazke
*/
class Book:public Publication{
public:
	/*
	*	@constructor Book
	*	@brief domyslny konstruktor
	*/
	Book() = default;

	/*
	*	@fn DOI()
	*	@brief zwraca digital object identifier
	*/
	virtual std::string DOI() override {
		return "B" + _number;
	}
};
