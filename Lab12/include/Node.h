#pragma once

/*
 * This is a class representing interface of a node
 */
class INode{
public:
	/*
 	 * This is a constructor and virtual destructor of a INode class
	 */
	INode(): _next(nullptr){}
	
	virtual ~INode(){
		delete _next;
	}

	/*
 	 * Returns next node
 	 */
	INode* next(){
		return _next;
	}

	/*
 	 * Setter of next node
 	 * @param next - node to be set as next
 	 */
	void setNext(INode* next){
		_next = next;
	}

	/*
 	 * Checks if types are the same
 	 * T - type to be checked
 	 * @return 0 if type T is diffrerent than *this, and 1 if types are the same
 	 */
	template<typename T>
	int isType();

private:
	INode* _next;
};

/*
 * This is a tenplate class representing signle node
 * T - type of a node
 */
template<typename T>
class Node: public INode{
public:
	/*
 	 * This is a constructor of a Node class
	 */
	Node(T val): _val(val){}

	/*
 	 * Returns value of a node
 	 */
	T getVal() const {
		return _val;
	}

private:
	T _val;
};

template<typename T>
int INode::isType(){
	return typeid(*this) == typeid(Node<T>);
}