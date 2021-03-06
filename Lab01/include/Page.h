#pragma once
#include <string>

class Page
{
public:
	Page(std::string header, std::string text): _header(header), _text(text) {}


	std::string getHeader() {
		return _header;
	}

	std::string getText() {
		return _text;
	}

	void SetHeader(std::string header) {
		_header = header;
	}


private:
	std::string _header;
	std::string _text;
};

