#pragma once
#include <string>
#include <iostream>
#include "Page.h"

class B5Page: public Page
{
public:
	B5Page(std::string header = "empty", std::string text = "empty") : Page(header, text) {}

	void Print() {
		std::cout << "[Page::header]  " << getHeader() << std::endl;
		std::cout << "[Page::text]    " << getText() << std::endl;
	}

	B5Page* Copy() {
		return new B5Page(getHeader() + " (Copy)", getText());
	}
};

