#include "EmployeeList.h"
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
EmployeeList::EmployeeList(){
	lenght = 0;
	head = NULL;

}

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
EmployeeList::EmployeeList (const EmployeeList& otherList){
	EmployeeListNode *temp;
	temp = otherList.head;
	while (temp != NULL){
		this->Add(temp->info);
		temp = temp->nextNodeAddress;

	}
}

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
EmployeeList::~EmployeeList(){

	Clear();
}

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
void EmployeeList::Clear(){
	
	while (head != NULL){
		EmployeeListNode *temp = head;
		head = head->nextNodeAddress;
		delete temp;
	}
	head = NULL;

}
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
int EmployeeList::Length(){


	return lenght;
}
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
void EmployeeList::Add(Employee e){
	EmployeeListNode* newNode = new EmployeeListNode();
	
	newNode->info = e;
	newNode->nextNodeAddress = head;
	head = newNode;
	// incriment lenght eeverythign time you callt his method
	lenght++;
}
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
void EmployeeList::Add(EmployeeList& otherList){
	EmployeeListNode *temp;
	temp = otherList.head;
	for (int i = 0; i < otherList.lenght; i++){
		
	  this -> Add(temp->info);
	  temp = temp->nextNodeAddress;
	
    }



}

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
bool EmployeeList::Find(int id, Employee &result){
  // check if list isNOT EMPTY
 if (head != NULL){
    EmployeeListNode *temp;
	// set temp to head to enter the singly linked list 
	temp = head;

	// try to find right away if found on first node just return it
	if (temp->info.getId() == id){
		result.setId(temp->info.getId());
		result.setSalary(temp->info.getSalary());
		return true;
	}
	else{
		// else cycle throght the wholelist using while list not equal null
		// used to get to second node since head is sitting at first node above
		//temp = temp->nextNodeAddress;
		while (temp != NULL){
			if (temp->info.getId() == id){
				result.setId(temp->info.getId());
				result.setSalary(temp->info.getSalary());
				return true;
				break;
			}
			else
			{
				//cycle the list if not found
				temp = temp->nextNodeAddress;
			}

		 }
	  }
    }
 // return flase not found
	return false;
}

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
void EmployeeList::Delete(int id){
	EmployeeListNode *temp;
	temp = head;
	/* 
	
		TEST CASES
		EITHER ITS NOT IN THE LIST  ----> do nothing
		ITS AT THE BEGINING ----> update head to go next node delete the first node 
		IT SOMEWHERE IN THE REST OF THE LIST 
		----> find the node and stop one less update pointer so it points the next node after deleteed one 
	
	*/
	
	if (head ->info.getId() == id){
		head = head->nextNodeAddress;
		delete temp;

	}
	else{
		//cycle throught the list untill youfind ID elsedo nothing
		// while list is not end OR STOP ONE NODE BEFORE THE TARGET NODE TO MAKE ITS ADDRESS
		while ((temp->nextNodeAddress != NULL) && (id != (temp->nextNodeAddress)->info.getId())){
			temp = temp->nextNodeAddress;
		}
		EmployeeListNode *x = temp;
	}



}
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
EmployeeList EmployeeList::operator=(EmployeeList& rhs){
	EmployeeListNode *temp;
	temp = rhs.head;
	while (temp != NULL){
	 

	}

	return *this;
}
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
std::ostream& operator<<(std::ostream& os, EmployeeList& rhs){
	EmployeeList::EmployeeListNode *temp = rhs.head;
	while (temp != NULL)
	{
		os << temp->info.getId() << " " << temp->info.getSalary() << " " << std::endl;
		temp = temp->nextNodeAddress;
	}

	return os;
}
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
std::istream &operator>>(std::istream& os, EmployeeList& rhs){
	Employee temp;
	os >> rhs.head->info >> temp;
	rhs.Add(temp);
			
	


	return os;
}
