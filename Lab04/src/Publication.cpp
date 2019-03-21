#include "Publication.h"
#include "Book.h"
#include "Magazine.h"

Publication* Publication::Create(std::string type, int n, std::string format){
	if(type == "Book"){
			return new Book();
		}

		if(type == "Magazine"){
			return new Magazine();
		}

	return nullptr;
}