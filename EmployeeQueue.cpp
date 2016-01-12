#include "EmployeeQueue.h"
//****************************************************
// Function(s): defualt constructor
//
// Purpose: Constructs EmpolyeeList Object with default vaules
//
// Update Information
// ------------------
//
// Name: Jesus Quintanilla
// Date: 11/18/2015
// Description:  Big O runtime: O(1) only sets one variable lenght
//               
//
//****************************************************
EmployeeQueue::EmployeeQueue(){
	top = NULL;
	rear = NULL;

}

//****************************************************
// Function(s): copy constructor
//
// Purpose: Constructs EmpolyeeList Object with default vaules
//
// Update Information
// ------------------
//
// Name: Jesus Quintanilla
// Date: 11/18/2015
// Description:  Big O runtime: O(n) deep copy of list depends on number of other list
//               
//
//****************************************************
EmployeeQueue::EmployeeQueue(const EmployeeQueue& rhs){
	 size= rhs.size;
	 top = rhs.top;
	 //rear = rhs.rear;
	 Nodel* temp = top;
	 while (temp != NULL){
		 Enqueue(top->info);
		 temp = temp->nextNodel;


	 }


}
//****************************************************
// Function(s): clear
//
// Purpose: Constructs EmpolyeeList Object with default vaules
//
// Update Information
// ------------------
//
// Name: Jesus Quintanilla
// Date: 11/18/2015
// Description:  Big O runtime: O(n) delete number of elements vary
//               
//
//****************************************************
void EmployeeQueue::Clear(){
	Nodel* temp;
	while (top != NULL){
		temp = top;
		top = temp->nextNodel;
		delete temp;

	}

}
//****************************************************
// Function(s): Enqueue
//
// Purpose: Constructs EmpolyeeList Object with default vaules
//
// Update Information
// ------------------
//
// Name: Jesus Quintanilla
// Date: 11/18/2015
// Description:  Big O runtime: O(1) only sets memeber to list
//               
//
//****************************************************
void EmployeeQueue::Enqueue(Employee e){
	Nodel *temp = new Nodel();
	temp->info = e;
	if (top == NULL){
		top = temp;

	}
	temp->nextNodel = rear;
	rear = temp;
	size++;

}
//****************************************************
// Function(s): Dequqeue
//
// Purpose: Constructs EmpolyeeList Object with default vaules
//
// Update Information
// ------------------
//
// Name: Jesus Quintanilla
// Date: 11/18/2015
// Description:  Big O runtime: O(1) only pops from start of line
//               
//
//****************************************************
Employee EmployeeQueue::Dequeue(){
	Employee e(-1,-1);
	if ((top == NULL) && (rear == NULL)){

		return e;
	}
	Nodel* temp = top;
	e = temp->info;
	top = top->nextNodel;
	if (top == NULL){
		rear = NULL;
    }
	delete temp;
	
	size--;
	return e;

}
//****************************************************
// Function(s): operator overloads
//
// Purpose: Constructs EmpolyeeList Object with default vaules
//
// Update Information
// ------------------
//
// Name: Jesus Quintanilla
// Date: 11/18/2015
// Description:  Big O runtime: O(N) dependant upon number of things ln the list
//               
//
//****************************************************
EmployeeQueue & EmployeeQueue::operator=(EmployeeQueue& rhs){


	return *this;
}
std::ostream& operator<<(std::ostream& os, const EmployeeQueue& emp){
	for (int i = 0; i < emp.size; i++){
		os << emp.top->info;
	
	}

	return os;
}
//****************************************************
// Function(s): destructor
//
// Purpose: Constructs EmpolyeeList Object with default vaules
//
// Update Information
// ------------------
//
// Name: Jesus Quintanilla
// Date: 11/18/2015
// Description:  Big O runtime: O(n) must delete all nodes vary in numnber
//               
//
//****************************************************
EmployeeQueue::~EmployeeQueue(){
	Clear();
	top = NULL;
	rear = NULL;


}
