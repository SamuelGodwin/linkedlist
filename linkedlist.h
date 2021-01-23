#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "node.h"

#include <initializer_list>
using std::initializer_list;

template<typename T> // Use my Node class
class LinkedList {

private:

	Node<T>* head;
	Node<T>* tail;
	int count;
	int listSize; //?

public:

	// A constructor, that creates an empty list (head and tail are nullptr, 0 elements in the list)
    LinkedList(T dataIn)
	  // sets the pointers to null as a sensible default
	: head(nullptr),
	  tail(nullptr),
	  count(0) {}

    LinkedList(initializer_list list)
	  // sets the pointers to null as a sensible default
	: head(nullptr),
	  tail(nullptr),
	  count(0) {}

    //A push_front function that takes an item and pushes it onto the front of the list,
    // i.e. it becomes the head of the list.
    // (Note this should not take a Node: for a LinkedList, we should be able to pass a T to push_front.)
    void push_front(T item) {
    	listSize++;
    }

    //A front() function, that returns a reference to the data inside the head node
    T front() {

    }

    //A push_back function that takes an item and pushes it onto the back of the list, i.e. it becomes the tail
    void push_back() {
    	listSize++;

    }

    //A back() function, that returns a reference to the data inside the tail node
    T back() {

    }

    //A size() function that returns the count of how many elements are in the list
    int size() const {
    	return listSize;
    }

    //A begin() function that returns an iterator pointing to the head of the list
    NodeIterator<T> begin() {

    }

    //An end() function that returns an iterator pointing to nullptr
    // (NB it doesn't point to the tail: it points off the end of the list -- and the Node after the tail is nullptr.)
    NodeIterator<T> end() {

    }

    //A destructor, that deletes every node in the list.

    	//~LinkedList() { delete [] elements; } // this was an example

};



// do not edit below this line

#endif
