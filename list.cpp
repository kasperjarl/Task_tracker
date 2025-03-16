#include <iostream>
#include <string>


class Task {
	int id; // task id
	int status; // thinking about making it 1: to-do, 2: in-progress, 3: done
	int priority; // 1: low, 2: medium, 3: high? 
	std::string description; // task description
	std::string createdAt; // what if I want to sort by date?
	std::string updtatedAt; // what if I want to sort by date?
};


// Where the fuck do I store the tasks?
// I guess you store them inside a list?

class List {
	int id; // list id
	/* insert an array???? where we can store the tasks */
	std::string name; // name of list
	
};