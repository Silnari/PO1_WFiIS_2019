#pragma once
#include <string>
#include "Page.h"


/*
*	@class A4Page
*	@brief klasa reprezentujaca strone tytulowa
*/
class TitlePage{
public:
	/*
	*	@fn SetAuthor()
	*	@brief usuwa podanego w argumencie autora
	*/
	void SetAuthor(std::string author){
		_author = author;
	}

	/*
	*	@fn SetTitle()
	*	@brief usuwa podany w argumencie tytul
	*/
	void SetTitle(std::string title){
		_subTitle = title;
	}

	/*
	*	@fn GetTitle()
	*	@brief zwraca podtytul ksiazki
	*/
	std::string GetTitle() const{
		return _subTitle;
	}

	/*
	*	@fn getAuthor()
	*	@brief zwraca autora ksiazki
	*/
	std::string getAuthor(){
		return _author;
	}
private:
	std::string _author;
	std::string _subTitle;
};