#include "Publication.h"
#include "Book.h"

Publication* Publication::Create(std::string type, int n, std::string format){
	return new Book(type,n,format);
}