#pragma once
#include "B5Page.h"
#include <iostream>
#include "Page.h"
#include <string>
#include <vector>
#include "TitlePage.h"
#include "A4Page.h"

/*
*	@class Book
*	@brief klasa reprezentujaca ksiazke w ktorej sa strony 
*/
class Book
{
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
	std::string Format(){
		return _format;
	}

	/*
	*	@fn size()
	*	@brief zwraca ilosc stron w ksiazce (n + 1 bo jeszcze strona tytulowa)
	*/
	int size(){
		return  _n + 1;
	}

	/*
	*	@fn TitlePagePtr()
	*	@brief zwraca wskaznik do strony tytulowej
	*/
	TitlePage* TitlePagePtr(){
		return _titlePage;
	}

	/*
	*	@fn operator[]()
	*	@brief zwraca element na n-tej pozycji w ksiazce
	*/
	Page* operator[](int n){
		return _ebook[n - 1];
	}

	/*
	*	@fn operator<<()
	*	@brief nadpisuje operator wyjscia, pelni role wypisywania ksiazki
	*/
	friend std::ostream &operator<<(std::ostream &ostrm, const Book &book);

private:
	TitlePage *_titlePage;
	std::vector<Page> _book;
	std::vector<Page*> _ebook;
	std::string _header;
	int _n;
	std::string _format;
};


