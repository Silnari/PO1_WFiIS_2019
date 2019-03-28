#pragma once
#include "B5Page.h"
#include <iostream>
#include "Page.h"
#include <string>
#include <vector>
#include "TitlePage.h"
#include "A4Page.h"
#include "Publication.h"

//!!! klasy Page, B5Page, A4Page nie zostaly zmienione w zaden sposob, sa takie jak w poprzednich zadaniach!!!

/*
*	@class Book
*	@brief klasa reprezentujaca ksiazke w ktorej sa strony 
*/
class Book: public Publication{
public:
	/*
	*	@constructor Book
	*	@brief przypisuje posiadanym wartoscia podane argumeny
	*	@brief i tworzy puste strony w zaleznosci od podanego formatu i ilosci stron
	*	@brief strona tytulowa przetrzymywana jest osobno
	*/
	Book(std::string header, int n, std::string format);
	
	/*
	*	@destructor ~Book
	*	@brief usuwa wszystkie strony w ksiace
	*/
	~Book(){
		for(int i = 0; i < (int)_ebook.size(); i++)
			delete _ebook[i];
		delete _titlePage;
	}

	/*
	*	@fn Format()
	*	@brief zwraca format stron
	*/
	std::string Format() const{
		return _format;
	}

	/*
	*	@fn TitlePagePtr()
	*	@brief zwraca wskaznik do strony tytulowej
	*/
	TitlePage* TitlePagePtr(){
		return _titlePage;
	}
	/*
	*	@fn NPages()
	*	@brief zwraca liczbe stron
	*/
	int NPages(){
		return _n;
	}

	/*
	*	@fn operator++()
	*	@brief dodaje jedna nowa pusta strone
	*/
	Book& operator++();

	/*
	*	@fn operator=()
	*	@brief przypisuje wskaznik na wskaznik jesli sa tych samych formatow
	*/
	const Book& operator=(const Book& book);


private:
	TitlePage *_titlePage;
	std::vector<Page> _book;
	std::vector<Page*> _ebook;
	std::string _header;
	int _n;
	std::string _format;
};


