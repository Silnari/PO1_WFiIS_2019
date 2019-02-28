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

	void setHeader(std::string header) {
		_header = header;
	}
	
	void SetHeader(std::string header) {
		setHeader(header);
	}

private:
	std::string _header;
	std::string _text;
};

