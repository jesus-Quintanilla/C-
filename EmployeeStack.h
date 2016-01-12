#ifndef H_HW
#define H_HW

#include<iostream>
#include "Employee.h"
class EmployeeStack{

public:
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
	EmployeeStack();
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
	
	EmployeeStack(int max);
	
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
	EmployeeStack(const EmployeeStack& rhs);

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
	void Clear();

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
	int size();

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
	int maxStorage();


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
	bool push(Employee e);


	//****************************************************
	// Function(s): pop
	//
	// Purpose: relese EmpolyeeStack Object from top of stack
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
	bool pop();

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
	bool Top(Employee &e);

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
	EmployeeStack & operator=(EmployeeStack& rhs);


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
	friend std::ostream& operator<<(std::ostream& os, const EmployeeStack& emp);



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
	// Description:  Big O runtime: O(1) call delete once
	//               
	//
	//****************************************************
	~EmployeeStack();


private:
	const int DEFAULT = 4;
	int currentStackSize = DEFAULT;
	Employee *stack;
	int logicalSize;



};



#endif
