#pragma once
#include <string>

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
	Publication(){
		_number = "/00.0000/000";
	}
	
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
	*	@fn DOI()
	*	@brief virtualna funkcja zwracajaca digital object identifier
	*/
	virtual std::string DOI() = 0;

protected:
	std::string _number;
};
