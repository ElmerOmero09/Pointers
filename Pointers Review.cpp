// Elmer Omero 
// 3/27/24
// 1:39am

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{                    // basic review of pointers
    int i = 2;
    int n = 3;

    cout << i << endl;                          // prints the values of the variables created. 
    cout << n << endl << endl; 

    cout << &i << endl;                         // The ampersign before the variable name will return the address of that variable, rather 
    cout << &n << endl << endl;                 // than the value of that variable. 

    int *pointerToI = &i;                       // here we have created two pointers pointing to the variables i and n. The pointer and                            
    int *pointerToN = &n;                       // the data type to where its pointing MUST match.                 

    cout << pointerToI << endl;                     // this is equivalent to the line of code written 5 lines up (other cout).
    cout << pointerToN << endl << endl;             // this will return the memory locatio of  the memory location that it is pointing to. 

    cout << *pointerToI << endl;                   // this is a de-referenced pointer, which now shows us the value of the memory
    cout << *pointerToN << endl << endl;            // location that these pointers are pointing to. 

    *pointerToI = 10;                           //this accesses the memory locaiton that the pointer is pointing to and assigns 10
    *pointerToN = 20;                              // to that memory location. The cout statements below will show that. 

    cout << *pointerToI << endl;                // here, the pointer is de-referenced, hence it will return the value that the pointerTo
    cout << *pointerToN << endl << endl;        // is pointing to, in each instance. 

    cout << pointerToI << endl;                   // To ensure that the memory locations are the same as above. They have not changed
    cout << pointerToN << endl << endl;           // simply the values stored in the have been changed by the code 6 lines above. 

    cout << i << endl;                      // here, we are showing what the de-referencing 9 lines above does to the variables and the 
    cout << n << endl << endl;              // the values they hold. 
    
    return 0;
}