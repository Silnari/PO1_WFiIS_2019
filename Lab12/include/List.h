#pragma once

#include <typeinfo>
#include "Node.h"

/*
 * This is a class representing list of nodes
 */
class List{
public:
	/*
 	 * This is a constructor and destructor of a List class
	 */
	List(): _node(nullptr) {}
	~List(){
		delete _node;
	}

	/*
 	 * Returns head of a list
 	 */
	INode* head(){
		return _node;
	}

	/*
 	 * Adds new node to the list
 	 * @param val - new value of type T to be added
 	 * T - type of a node
 	 */
	template<typename T>
	void add(T val){
		if(!_node) _node = new Node<T>(val);
		else{
			INode* next = _node;
			_node = new Node<T>(val);
			_node->setNext(next);
		}
	}

	/*
 	 * Gets value of node
 	 * @param node - function returns value of given node
 	 * T - type of a node
 	 */
	template<typename T>
	static T get(INode* node){
		return dynamic_cast<Node<T>*>(node)->getVal();
	}
private:
	INode* _node;
};
