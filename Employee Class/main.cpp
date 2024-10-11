//
//  main.cpp
//  Employee Class
//
//  Created by Amanpreeet Sandhu on 2024-10-11.
//

#include <iostream>
#include "Employee.h"

using namespace std;

int main() {
    Employee employee1("John", "Smith", 10000);
    Employee employee2("Ed", "Joan", 20000);
    
    cout << employee1.getFirstName() << " " << employee1.getLastName() << "'s monthly salary is " << employee1.getSalary() << " so his yearly salary is " << employee1.getYearlySalary() << endl;
    
    cout << "After raise of 10% " << employee1.getFirstName() << " " << employee1.getLastName() << "'s total yearly salary is " << employee1.getRaise() << endl << endl;
    
    
    cout << employee2.getFirstName() << " " << employee2.getLastName() << "'s monthly salary is " << employee2.getSalary() << " so his yearly salary is " << employee2.getYearlySalary() << endl;
    
    cout << "After raise of 10% " << employee2.getFirstName() << " " << employee2.getLastName() << "'s total yearly salary is " << employee2.getRaise() << endl << endl;
    
}
