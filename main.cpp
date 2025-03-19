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

	std::cout << "Task" << " has adrr: " << &test << std::endl;
	std::cout << "Task id: " << test.id << " has adrr: " << &test.id << std::endl;
	std::cout << "Task status: " << test.status << " has adrr: " << &test.status << std::endl;
	std::cout << "Task priority: " << test.priority << " has adrr: " << &test.priority << std::endl;
	std::cout << "Task status: " << test.description << " has adrr: " << &test.description << std::endl;
	std::cout << "Task status: " << test.createdAt << " has adrr: " << &test.createdAt << std::endl;
	std::cout << "Task status: " << test.updatedAt << " has adrr: " << &test.updatedAt << std::endl;
	
	

	list.vector.push_back((unsigned long long) &test);

	std::cout << "Looking inside list and finds task: " << list.vector[0] << std::endl;
	
	// next: learn about References, Pointers and smart pointers


	return 0;
}