#pragma once
#include <string>

//klasa reprezentujaca strone
class Page
{
public:
	//konstruktor ustawiajacy parametry
	Page(std::string header, std::string text): _header(header), _text(text) {}

	//getter Headera
	std::string getHeader() const{
		return _header;
	}

	//getter Textu
	std::string getText() const{
		return _text;
	}

	//setter Headera
	void SetHeader(std::string header) {
		_header = header;
	}


private:
	std::string _header;
	std::string _text;
};

