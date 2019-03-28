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

Book& Book::operator++(){
	_n++;
	if(_format == "B5")
		_ebook.emplace_back(new B5Page(_n));
	if(_format == "A4")
		_ebook.emplace_back(new A4Page(_n));
	return *this;
}

const Book& Book::operator=(const Book& book){
	if(this != &book){
		if(_format != book.Format())
			std::cout<<"[ERROR]:: Trying to assign different formats!"<<std::endl;
		else
			_n = book._n;
	}
	return *this;
}