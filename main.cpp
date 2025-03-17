#include <iostream>
#include "list.h"
#include "tasks.h"

int main()
{
	List list{1, "LIST TESTING"};
	std::cout << "list id: " << list.id << ". list name: " << list.name << std::endl;
	std::cout << "Length of list: " << list.vector.size() << std::endl;

	std::cout << "Length of capacity: " << list.vector.capacity() << '\n' << std::endl;

	Task test{1, 2, 3, "description", "createdAt", "UpdatedAt"};

	std::cout << "Task id: " << test.id << std::endl;

	list.vector.insert(&test);

	return 0;
}