#pragma once

#include <iostream>

class ObiektMiotajacy;

class typ1{
public:
	void PrzedstawSie(){
		std::cout << "Nazywam sie 1 (adres obiektu: " << this << ")" << std::endl;
	}
};

class typ4 : public typ1{
public:
	typ4(ObiektMiotajacy* toFree = NULL){
		_toFree = toFree;
	}

	void PrzedstawSie(){
		std::cout << "Nazywam sie 4 (adres obiektu: " << this << ")" << std::endl;
	}

	~typ4(){
		delete _toFree;
	}

	private:
	ObiektMiotajacy* _toFree;
};