#pragma once
#include <map>
#include <string>

class Node {
public:
	Node();

	~Node();
	void AddWord(std::string word);
	void Enumerate(std::string prefix);

private:
	std::map<char, Node *> child;
	int count;
};
