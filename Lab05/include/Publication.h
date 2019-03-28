#pragma once
#include <string>
class Book;
/*
*	@class Publication
*	@brief abstrakcyjna klasa reprezentujaca publikacje
*/
class Publication{
public:
	/*
	*	@construcot Publication
	*	@brief ustawia string _number na "/00.0000/000"
	*/
	Publication() = default;
	
	/*
	*	@destructor Publication
	*	@brief domyslny destruktor
	*/
	virtual ~Publication() = default;

	/*
	*	@fn Create()
	*	@brief funckja tworzaca obiekt zalezny od podanego typu (Book lub Magazine)
	*/
	static Publication* Create(std::string type, int n, std::string format);

	/*
	*	@fn NPages()
	*	@brief wirtualna funkcja zwracajaca liczbe stron
	*/
	virtual int NPages() = 0;

	/*
	*	@fn operator=()
	*	@brief wirtuaalna funkcja przypisujaca wskaznik na wskaznik jesli sa tych samych formatow
	*/
	virtual const Book& operator=(const Book& book) = 0;
};
