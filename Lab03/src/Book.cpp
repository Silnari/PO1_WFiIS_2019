#include "Book.h"
#include <iostream>

Book::Book(std::string header, int n, std::string format): _header(header), _n(n), _format(format) {
	if(format == "B5"){
		for(int i = 0; i < _n; i++){
			_ebook.emplace_back(new B5Page(i + 1));
			}
		}

		if(format == "A4"){
			for(int i = 0; i < _n; i++){
				_ebook.emplace_back(new A4Page(i + 1));
			}
		}

		_titlePage = new TitlePage();
}

std::ostream &operator<<(std::ostream &ostrm, const Book &book){

	ostrm << "[Book::Title]       " << book._header   << std::endl;

	ostrm << "[Book::Autor]       " << book._titlePage->getAuthor() << std::endl;
	
	for(int i = 0; i < (int)book._ebook.size(); i++){
		ostrm << *book._ebook[i];
	}

	return ostrm;
}