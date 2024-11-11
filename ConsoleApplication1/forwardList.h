#pragma once

class Node
{
public:
	int value;
	Node* next;
	Node() {
		this->value = 0;
		next = nullptr;
	}
	Node(int value) {
		this->value = value;
		next = nullptr;
	}
	Node(int value, Node* prev) {
		this->value = value;
		next = nullptr;
	}
	Node(Node* next, int value) {
		this->value = value;
		this->next = next;
	}
};

class forwardList
{
	Node* head;
	Node* tail;
	int size;
public:
	forwardList(const forwardList& obj);
	forwardList() : head(nullptr),tail(nullptr),size(0) {}
	void PushBack(int value);
	void Print();
	void PopFront();
	const Node* find(int value);
	void operator=(const forwardList& obj);
	/*void popBack();*/
	~forwardList();
	void operator=(const forwardList& obj);
};

