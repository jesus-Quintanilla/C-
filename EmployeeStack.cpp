#include "EmployeeStack.h"

//****************************************************
// Function(s): defualt constructor
//
// Purpose: Constructs EmpolyeeStack Object with default size
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
EmployeeStack::EmployeeStack(){
	stack = new Employee[currentStackSize]; 
	logicalSize = -1;



}
//****************************************************
// Function(s): int constructor
//
// Purpose: Constructs EmpolyeeStack Object with given max
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

EmployeeStack::EmployeeStack(int max){
	stack = new Employee[max];
	logicalSize = -1;
	currentStackSize = max;
}



//****************************************************
// Function(s): copy constructor
//
// Purpose: Constructs EmpolyeeStack Object with given other stack
//
// Update Information
// ------------------
//
// Name: Jesus Quintanilla
// Date: 11/18/2015
// Description:  Big O runtime: O(n) since it needs to copy N amount of employees
//               
//
//****************************************************
EmployeeStack::EmployeeStack(const EmployeeStack& rhs){
	if (rhs.currentStackSize > currentStackSize){
	  
		Employee *temp = new Employee[rhs.currentStackSize];
		delete [] stack;
		temp = stack;
	}
	
	for (int i = 0; i < rhs.logicalSize; i++){
		stack[i] = rhs.stack[i];

	}



}


//****************************************************
// Function(s): clear
//
// Purpose: relese EmpolyeeStack Object 
//
// Update Information
// ------------------
//
// Name: Jesus Quintanilla
// Date: 11/18/2015
// Description:  Big O runtime: O(1) set logical size to zero so it can be used to ovewrite the elemennts already in the stack
//               
//
//****************************************************
void EmployeeStack::Clear() {
	logicalSize = -1;
}

//****************************************************
// Function(s): size
//
// Purpose: relese EmpolyeeStack Object 
//
// Update Information
// ------------------
//
// Name: Jesus Quintanilla
// Date: 11/18/2015
// Description:  Big O runtime: O(1) just return logicalSize which is calculted every time push/pop gets called 
//               
//
//****************************************************
int EmployeeStack::size(){
	return logicalSize + 1;
}


//****************************************************
// Function(s): maxStorage
//
// Purpose: relese EmpolyeeStack Object 
//
// Update Information
// ------------------
//
// Name: Jesus Quintanilla
// Date: 11/18/2015
// Description:  Big O runtime: O(1) just return currentstacksize 
//               
//
//****************************************************
int EmployeeStack::maxStorage(){

	return currentStackSize;
}



//****************************************************
// Function(s): push
//
// Purpose: relese EmpolyeeStack Object 
//
// Update Information
// ------------------
//
// Name: Jesus Quintanilla
// Date: 11/18/2015
// Description:  Big O runtime: O(1) just pushing an employee into stack 
//               
//
//****************************************************
bool EmployeeStack::push(Employee e){
	if ((logicalSize + 1) > currentStackSize){
		return false;
	}
	logicalSize++;
	stack[logicalSize] = e;
	
	return true;
}

//****************************************************
// Function(s): pop
//
// Purpose: relese EmpolyeeStack Object 
//
// Update Information
// ------------------
//
// Name: Jesus Quintanilla
// Date: 11/18/2015
// Description:  Big O runtime: O(1) just poping an employee from stack 
//               
//
//****************************************************
bool EmployeeStack::pop(){
	if ((logicalSize - 1) < 0){
		return false;
	}
	


	logicalSize--;

	return true;
}


//****************************************************
// Function(s): top
//
// Purpose: gets the first element of the stack  
//
// Update Information
// ------------------
//
// Name: Jesus Quintanilla
// Date: 11/18/2015
// Description:  Big O runtime: O(1) just poping an employee from stack 
//               
//
//****************************************************
bool EmployeeStack::Top(Employee &e){
	if (logicalSize < 0){

		return false;
	}

	e = stack[logicalSize];

	return true;

}


//****************************************************
// Function(s): opterator overload =
//
// Purpose: gets the first element of the stack  
//
// Update Information
// ------------------
//
// Name: Jesus Quintanilla
// Date: 11/18/2015
// Description:  Big O runtime: O(N) makes deep copy of all elemnts 
//               
//
//****************************************************
EmployeeStack & EmployeeStack::operator=(EmployeeStack& rhs){
	currentStackSize = rhs.currentStackSize;
	logicalSize = rhs.logicalSize;
	for (int i = 0; i < currentStackSize; i++){

		stack[i] = rhs.stack[i];
	}

	return *this;
}

//****************************************************
// Function(s): opterator overload <<
//
// Purpose: gets the first element of the stack  
//
// Update Information
// ------------------
//
// Name: Jesus Quintanilla
// Date: 11/18/2015
// Description:  Big O runtime: O(N) depends on size of stack; 
//               
//
//****************************************************
std::ostream& operator<<(std::ostream& os, const EmployeeStack& emp){

	for (int i=emp.logicalSize;i >=0;i--){

		os << "Stack[ " << i << "] = " << emp.stack[i];
	}

	
	return os;

}


//****************************************************
// Function(s): destructor
//
// Purpose: relese EmpolyeeStack Object 
//
// Update Information
// ------------------
//
// Name: Jesus Quintanilla
// Date: 11/18/2015
// Description:  Big O runtime: O(1) logical leght is one
//               
//
//****************************************************
EmployeeStack::~EmployeeStack(){
	
	delete [] stack;

}
