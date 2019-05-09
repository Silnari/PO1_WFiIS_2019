#pragma once

#include <iostream>

#include "Pomieszczenie.h"

template<void (Pomieszczenie::*T)() const>
void Lokaj (Pomieszczenie &pomieszczenie) {
	(pomieszczenie.*T)();
}

template<void (Pomieszczenie::*T)() const>
void Lokaj (const Pomieszczenie &pomieszczenie) {
	std::cout << "Pomieszczenie " << pomieszczenie.getName() << " jest zamknięte." << std::endl;
}

template<int>
void Lokaj (Pomieszczenie &pomieszczenie) {
	std::cout << "Nic nie robie." << std::endl;
}
