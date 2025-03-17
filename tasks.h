#pragma once
#include <iostream>
#include <string>
#include <vector>


class Task {
public:
	int id; // task id
	int status; // thinking about making it 1: to-do, 2: in-progress, 3: done
	int priority; // 1: low, 2: medium, 3: high? 
	std::string description; // task description
	std::string createdAt; // what if I want to sort by date?
	std::string updatedAt; // what if I want to sort by date?
};