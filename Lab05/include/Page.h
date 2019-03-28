#pragma once
#include <string>

/*
*	@class A4Page
*	@brief klasa reprezentujaca strone 
*/
class Page
{
public:
	/*
	*	@constructor Page
	*	@brief przypisuje posiadanym wartoscia podane argumeny
	*/
	Page(int index, std::string header, std::string text): _index(index), _header(header), _text(text) {}

	/*
	*	@destructor ~Page()
	*	@brief virtualny destruktor klasy Page
	*/
	virtual ~Page(){

	}

	/*
	*	@fn SetHeader()
	*	@brief ustawia naglowek na naglowek podany w argumencie
	*/
	virtual void SetHeader(std::string header) {
		_header = header;
	}

	/*
	*	@fn Text()
	*	@brief zwraca tekst strony
	*/
	virtual std::string Text() const{
		return _text;
	}

	/*
	*	@fn Text()
	*	@brief ustawia text na text podany w argumencie
	*/
	virtual void Text(std::string text){
		_text = text;
	}

	/*
	*	@fn getIndex()
	*	@brief zwraca numer strony
	*/
	virtual int getIndex() const {
		return _index;
	}

	/*
	*	@fn operator<<()
	*	@brief nadpisuje operator wyjscia, pelni role wypisywania strony
	*/
	friend std::ostream &operator<<(std::ostream &ostrm, const Page page){
		if(page.Text() != "empty")
			ostrm << "[Page(" << page.getIndex() << ")::text]     " << page.Text() << std::endl;

		return ostrm;
	}

private:
	int _index;
	std::string _header;
	std::string _text;
};

