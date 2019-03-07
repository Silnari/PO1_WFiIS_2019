#pragma once
#include <string>
#include "Page.h"


//klasa reprezentujaca strone tytulowa
class TitlePage{
public:

	//domyslny konstruktor
	TitlePage() = default;

	//setter Ttytulu
	void SetSubTitle(std::string title){
		_subTitle = title;
	}

	//setter autora
	void SetAuthor(std::string author){
		_author = author;
	}

	//getter autora
	std::string getAuthor(){
		return _author;
	}

	//getter podtytulu
	std::string getSubTitle(){
		return _subTitle;
	}

private:
	std::string _author;
	std::string _subTitle;
};