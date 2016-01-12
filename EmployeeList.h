#ifndef H_HW
#define H_HW

#include <iostream>
#include <fstream>
#include "Employee.h"

class EmployeeList{

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
	// Date: 10/25/2015
	// Description:  Big O runtime: O(1) only sets one variable lenght
	//               
	//
	//****************************************************
	EmployeeList();

	//****************************************************
	// Function(s): constructor
	//
	// Purpose: Constructs EmpolyeeList Object with copy of this object
	//
	// Update Information
	// ------------------
	//
	// Name: Jesus Quintanilla
	// Date: 10/25/2015
	// Description:  Big O runtime: O(N) since runtime depends on number of nodes in list to copy over DEEPly.
	//               
	//
	//****************************************************
	EmployeeList(const EmployeeList& otherList);

	//****************************************************
	// Function(s): destructor
	//
	// Purpose: deletes EmpolyeeList Object to memory
	//
	// Update Information
	// ------------------
	//
	// Name: Jesus Quintanilla
	// Date: 10/25/2015
	// Description:  Big O runtime: ?????
	//               
	//
	//****************************************************
	~EmployeeList();
	
	//****************************************************
	// Function(s): clear
	//
	// Purpose: wipes the linked list **Clears the current list.Remember, when items are removed you MUST release memory.
	//
	// Update Information
	// ------------------
	//
	// Name: Jesus Quintanilla
	// Date: 10/25/2015
	// Description:  Big O runtime:O(N) because it is dependant on how many NODES there are in the linked list
	//               
	//
	//****************************************************
	void Clear();
	//****************************************************
	// Function(s): lenght
	//
	// Purpose: Returns the number of items in the current list. 
	//          **Important: The runtime of this operation should be O(1). **

	//
	// Update Information
	// ------------------
	//
	// Name: Jesus Quintanilla
	// Date: 10/25/2015
	// Description:  Big O runtime: O(1) 
	//               
	//
	//****************************************************
	int Length();
	//****************************************************
	// Function(s): add
	//
	// Purpose: Adds an empolyee to linked list 
    //
	// Update Information
	// ------------------
	//
	// Name: Jesus Quintanilla
	// Date: 10/25/2015
	// Description:  Big O runtime: O(1)  BECAUSE the list is unsorted you just place this at the begining of list.
	//               
	//
	//****************************************************
    void Add(Employee e);
	//****************************************************
	// Function(s): add
	//
	// Purpose: Adds all elements from otherList on to the current list. 
	// Any data that exists in this instance before this function call should still be in the list after the function call completes. 
	// It does not matter where you add the elements. The otherList object should not change after this method is run. 
    // This should perform a DEEP COPY of the elements from the other list.
	// Here is sample call(assume a and b are EmployeeList type objects) :
    // Add(b);  //All elements of b will be added to a
	//
	//
	// Update Information
	// ------------------
	//
	// Name: Jesus Quintanilla
	// Date: 10/25/2015
	// Description:  Big O runtime: O(N)  BECAUSE the number of Nodes placed into THIS list is dependant on numbber of nodes in the list given
	//               
	//
	//****************************************************
    void Add(EmployeeList& otherList);

	//****************************************************
	// Function(s): Find
	//
	// Purpose: Finds the employee with the given id.
	// If the employee is found the result parameter should be populated with data from the target employee.
	// If found the function return value should be true otherwise return false.
	//
	// Update Information
	// ------------------
	//
	// Name: Jesus Quintanilla
	// Date: 10/25/2015
	// Description:  Big O runtime:O(N) because it is dependant on how many NODES there are in the linked list
	//               
	//
	//****************************************************
	bool Find(int id, Employee &result);
	
	//****************************************************
	// Function(s): Delete
	//
	// Purpose: Deletes the employee that matches the passed in id. Remember, when items are removed you MUST release memory
	//
	// Update Information
	// ------------------
	//
	// Name: Jesus Quintanilla
	// Date: 10/25/2015
	// Description:  Big O runtime:O(N) because it is dependant on how many NODES there are in the linked list
	//               
	//
	//****************************************************
	void Delete(int id);
    //****************************************************
	// Function(s): operator overload = (asignment)
	//
	// Purpose: overloads the assignment operator to make deep copy of THIS obeject
	//
	// Update Information
	// ------------------
	//
	// Name: Jesus Quintanilla
	// Date: 10/25/2015
	// Description:  Big O runtime:O(N) because it is dependant on how many NODES there are in the linked list
	//               
	//
	//****************************************************
	EmployeeList  operator=(EmployeeList& rhs);
	//****************************************************
	// Function(s): operator overload <<
	//
	// Purpose: overloads the assignment operator to make deep copy of THIS obeject
	//
	// Update Information
	// ------------------
	//
	// Name: Jesus Quintanilla
	// Date: 10/25/2015
	// Description:  Big O runtime:O(N) because it is dependant on how many NODES there are in the linked list
	//               
	//
	//****************************************************
	friend std::ostream &operator<<(std::ostream& os, EmployeeList& rhs);
	//****************************************************
	// Function(s): operator overload >>
	//
	// Purpose: input for this object
	//
	// Update Information
	// ------------------
	//
	// Name: Jesus Quintanilla
	// Date: 10/25/2015
	// Description:  Big O runtime:O(N) because it is dependant on how many NODES there are in the linked list
	//               
	//
	//****************************************************
	friend std::istream &operator>>(std::istream& os, EmployeeList& rhs);


private:
	//****************************************************
	// variable: lenght
	//
	// Purpose: is the logical lenght of the list when NODE is created increment by 1;
	//
	// Update Information
	// ------------------
	//
	// Name: Jesus Quintanilla
	// Date: 10/25/2015
	// Description:  Big O runtime: O(1) just a vairble declration 
	//               
	//
	//****************************************************
	int lenght;



	//****************************************************
	// variable: employeelistnode
	//
	// Purpose: struct that will be used in a unsorted linked list implemntation
	//
	// Update Information
	// ------------------
	//
	// Name: Jesus Quintanilla
	// Date: 10/25/2015
	// Description:  Big O runtime: O(1) will only create one instance of NODE
	//               
	//
	//****************************************************
	struct EmployeeListNode{
	Employee info;
	EmployeeListNode *nextNodeAddress;
	};

	//****************************************************
	// variable: employeelistnode pointer HEAD
	//
	// Purpose: will point to the start of linkedlist
	//
	// Update Information
	// ------------------
	//
	// Name: Jesus Quintanilla
	// Date: 10/25/2015
	// Description:  Big O runtime: O(1) will only create one instance of NODE
	//               
	//
	//****************************************************
	EmployeeListNode *head;







};






#endif
