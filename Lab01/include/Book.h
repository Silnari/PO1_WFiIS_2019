#pragma once
#include "B5Page.h"
#include <iostream>
#include "Page.h"
#include <string>
#include <vector>

class Book
{
public:
	Book(std::string header): _header(header) {}

	void AddPage(Page* page);

	void Print();

	void SetHeader(std::string header);

private:
	std::vector<Page> _book;
	std::vector<Page*> _ebook;
	std::string _header;
};

