#pragma once

#include <iostream>
#include <string>

class Pomieszczenie {
public:
	Pomieszczenie(std::string name): _name(name) {
		std::cout << "Tworze pomieszcznie: " << _name << std::endl;
	}

	void zetrzyj_kurze() const {
		std::cout << "Scieram kurze w pomieszczeniu: " << _name << std::endl;
	}

	void umyj_podloge() const {
		std::cout << "Myje podloge w pomieszczeniu: " << _name << std::endl;
	}

	void odkurz() const {
		std::cout << "Odkurzam w pomieszczeniu: " << _name << std::endl;
	}

	template<typename T>
	void wstaw(T value) {
		std::cout << "Wstawiam " << value << " do pomieszczenia: " << _name << std::endl;
	}

	std::string getName() const {
		return _name;
	}

private:
	std::string _name;
};
