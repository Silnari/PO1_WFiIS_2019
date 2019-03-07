#pragma once
#include "B5Page.h"
#include <iostream>
#include "Page.h"
#include <string>
#include <vector>
#include "TitlePage.h"

//Klasa Book reprezentujaca ksiazke z stronami i strona tytulowa
class Book
{
public:

	//kosnstruktor dodajacy puste strony i ustawiajacy parametry
	Book(std::string header, int n, std::string format): _header(header), _n(n), _format(format) {
		for(int i = 0; i < _n; i++){
			_ebook.emplace_back(new B5Page());
		}
		_titlePage = new TitlePage();
	}

	//destruktor usuwajacy strony w ksiazce
	~Book(){
		for(int i = 0; i < (int)_ebook.size(); i++)
			delete _ebook[i];
		delete _titlePage;
	}



	//funkcja zwracajaca wielkosc ksiazki
	int size(){
		return  _n + 1;
	}

	//funckja zwracajaca wskaznik do strony tytulowej
	TitlePage* TitlePagePtr(){
		return _titlePage;
	}

	//funckja zwracajaca dana strone
	Page* operator[](int n){
		return _ebook[n - 1];
	}

	//funckja operator<< : przeladowanie operatora <<
	friend std::ostream &operator<<(std::ostream &ostrm, const Book &book);

private:
	TitlePage *_titlePage;
	std::vector<Page> _book;
	std::vector<Page*> _ebook;
	std::string _header;
	int _n;
	std::string _format;
};


