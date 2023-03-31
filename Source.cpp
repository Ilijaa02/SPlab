#include"DList.h"
#include "LList.h"
#include "Stack.h"

void main()
{
	/*DList* list = new DList();
	
	list->addToHead(6);
	list->addToHead(3);
	list->addToHead(2);
	list->addToHead(7);
	list->addToHead(1);
	list->addToHead(9);
	list->addToHead(4);

	list->printAll();

	delete list;*/





	/*LList* list = new LList();
	
	list->addToHead(6);
	list->addToHead(3);
	list->addToHead(2);
	list->addToHead(7);
	list->addToHead(1);
	list->addToHead(9);
	list->addToHead(4);

	list->printAll();

	delete list;*/





	Stack* stack = new Stack(5);
	
	cout << stack->isEmpty() << endl;

	cout << stack->numberOfElements() << endl;

	stack->push(2);
	stack->push(5);
	stack->push(1);
	stack->push(3);
	stack->push(4);

	cout << stack->numberOfElements() << endl;

	stack->pop();
	stack->pop();

	cout << stack->numberOfElements() << endl;

	cout << stack->getTop();

	delete stack;
}