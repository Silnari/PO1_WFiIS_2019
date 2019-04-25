#pragma once

#include "typ1.h"

class ObiektMiotajacy{
public:
	void Rzuc(){
		throw new typ4(this);
	}

	~ObiektMiotajacy() = default;
};