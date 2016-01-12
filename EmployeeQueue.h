#ifndef H_HW
#define H_HW

#include<iostream>
#include"Employee.h"
class EmployeeQueue{

public:
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
	EmployeeQueue();
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
	EmployeeQueue(const EmployeeQueue& rhs);
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
	void Clear();
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
	void Enqueue(Employee e);
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
	Employee Dequeue();
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
	EmployeeQueue & operator=(EmployeeQueue& rhs);
	friend std::ostream& operator<<(std::ostream& os, const EmployeeQueue& emp);
	
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
	~EmployeeQueue();

private:
	int size;
	struct Nodel
	{
		Employee info;
		Nodel *nextNodel;
	};

	Nodel* top,* rear;



};



#endif
