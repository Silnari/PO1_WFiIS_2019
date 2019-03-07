#pragma once
#include <string>
#include <iostream>
#include "Page.h"

//klasa reprezentujaca strone formatu B5
class B5Page: public Page
{
public:
	//konstruktor korzystajacy z klasy pochodnej Page
	B5Page(std::string header = "empty", std::string text = "empty") : Page(header, text) {}
};

