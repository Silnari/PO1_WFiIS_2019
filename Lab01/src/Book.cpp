#include "Book.h"
#include <iostream>


void Book::AddPage(B5Page* page){
	for(B5Page* p: _ebook){
		if(p == page){
			std::cout << "[WARNING]:: Trying to add already existing page!" << std::endl;
			return;
		}
	}

	_book.emplace_back(*page);
	_ebook.emplace_back(page);
}

void Book::Print(){
	std::cout << std::endl;
	std::cout << "[Book::autor]       Anonym" << std::endl;
	std::cout << "[Page(0)::text]     Title: " << _header << std::endl;
	for(int i = 0; i < (int)_ebook.size(); i++){
		std::cout << "[Page(" << i << ")::header]   " << _book[i].getHeader() << std::endl;
		std::cout << "[Page(" << i << ")::text]     " << _book[i].getText() << std::endl;
	}
}

void Book::SetHeader(std::string header){
	for (int i = 0; i < (int)_book.size(); i++)
			_book[i].SetHeader(header);
}
