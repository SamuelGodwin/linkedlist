#ifndef NODE_H
#define NODE_H

#include <iostream>
using std::cout;
using std::cerr;
using std::endl;

// TODO code for the Node class goes here:
// (Note the 'NodeIterator' class will report lots of errors until Node exists

template<typename T>
class Node {

public:

    T data; // the data type is template argument
    Node<T>* next;
    Node<T>* previous;

    // constructor
    Node(T dataIn)
    : data(dataIn),
	  // sets the pointers to null as a sensible default
	  previous(nullptr),
	  next(nullptr) {}

    // in cases we either have an object or nothing at all (like the next and previous variables)
    // then that's what you need pointers for
    
    // linked list... each node in list points to next node in the list
    // and the very last node in the list points to null

};



template<typename T>
class NodeIterator {

private:

    Node<T>* current;

public:
    

    NodeIterator(Node<T>* currentIn)
        : current(currentIn) {        
    }

    T & operator*() {
        return current->data; // same as return *ptr?
    }

    // TODO: complete the code for NodeIterator here
    
    // We can increment the iterator, using ++, which makes it point to the next node in the list
    NodeIterator & operator++() {
    	current = current->next;
    	return *this;
    }

    // We can see if two iterators are the same, using the == operator. Two iterators are the same if they point to the same Node.
    // if value pointed to by current in first == value pointed to by current in second, they are the same
    bool operator==(const NodeIterator<T> & other) {

    	if (other.current == current) {
    		return true; // Am I doing this right?
    	}
    	return false;
    }


    // We can see if two iterators are different, using the != operator
    bool operator!=(const NodeIterator<T> & other) {

    	if (other.current != current) {
    		return true;
    	}
    	return false;
    }

};

// do not edit below this line

#endif
