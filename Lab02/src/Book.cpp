#include "Book.h"
#include <iostream>





std::ostream &operator<<(std::ostream &ostrm, const Book &book)
{
	ostrm << std::endl
		<< "[Book::Title]       " << book._header << "(" << book._titlePage->getSubTitle() <<")" << std::endl;
	ostrm << "[Book::Autor]       " << book._titlePage->getAuthor() << std::endl;
	
	for(int i = 0; i < (int)book._ebook.size(); i++){
		if(book._ebook[i]->getHeader()!="empty")
			ostrm << "[Page(" << i  << ")::header]   " << book._ebook[i]->getHeader() << std::endl;
		ostrm << "[Page(" << i  << ")::text]     " << book._ebook[i]->getText() << std::endl;
	}

	return ostrm;
}