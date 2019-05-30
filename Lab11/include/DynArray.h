#pragma once

#include <iostream>
#include <string>

/*
template class representing dynamic array, 
has its own iterator
*/
template<typename T>
class DynArray{
public:
	// DynArray constructor, initializing an array of given type
	DynArray(int size): _size(size) {
		_data = new T [size];
	}

	// DynArray constructor, initializing an array of given type and copying content passes as argument to it
	DynArray(int size, const T *data): _size(size){
		_data = new T [size];
		for(int i = 0; i < _size; i++){
			_data[i] = data[i];
		}
	}

	//deleting an array
	~DynArray(){
		delete[] _data;
	}

	//getter of size
	int size(){
		return _size;
	}

	//overloaded operator[], returns reference to T object
	T& operator[](int index){
		return _data[index];
	}

	//itarator that lets us iterate over content of our class
	class Iterator{
	public:
		//Iterator constructor, sets pointer to given as parameter pointer
		Iterator(T* p): ptr(p){}

		//comparing two iterators
		bool operator!=(const Iterator& it){
			return ptr != it.ptr;
		}

		//iterates by one
		Iterator& operator++() {
			ptr++;
			return *this;
		}

		//returns reference to currently pointed object
		T& operator*() {
			return *ptr;
		}

		//returns pointer to currently pointed object
		T* operator->() {
			return ptr;
		}

	private:
		T* ptr;
	};

	//returns iterator initialized with start of data
	Iterator begin() {
		return Iterator(_data);
	}

	//returns iterator initialized with end of data
	Iterator end() {
		return Iterator((_data + _size));
	}

private:
	int _size;
	T *_data;

};

// operator<< overload that lets print content of our class into ostream
template <typename T>
std::ostream& operator<<(std::ostream &ostream, DynArray <T>&array){
	ostream << "{";
	for(int i = 0; i < array.size() - 1; i++){
		ostream << "\"" << array[i] << "\", ";
	}
	ostream << "\"" << array[array.size() - 1] << "\"}";
	return ostream;
}