#pragma once

#include "Gps.h"

/**
 * This is a class representing Factory
 */
class Factory{
public:

	/*
	 *	Creates prototype of an object
	 *	@param object - obejct to be set as prototype
	 *	@param chane - if true, change prototype
	 *	@return prototype
	 */
	template<typename T>
	T prototype(const T &object, bool change = true){
		static T proto = object;

		if(change) proto = object;

		return proto;
	}

	/*
	 *	Returns prototype
	 */
	template<typename T>
	T produce(){
		return prototype<T>(T(), false);
	}

};