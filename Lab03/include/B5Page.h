#pragma once
#include <string>
#include <iostream>
#include "Page.h"

/*
*	@class A4Page
*	@brief klasa reprezentujaca strone formatu A4
*/
class B5Page: public Page
{
public:
	/*
	*	@constructor A4Page
	*	@brief przekazuje podane argumenty do konstruktora klasy bazowej Page
	*/
	B5Page(int index = 0, std::string header = "empty", std::string text = "empty") : Page(index, header, text) {}
};

