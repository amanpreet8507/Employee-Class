//
//  Employee.h
//  Employee Class
//
//  Created by Amanpreeet Sandhu on 2024-10-11.
//
#include <string>

class Employee {
public:
    // constructor
    explicit Employee(std::string fName, std::string lName, int salary):firstName{fName}, lastName{lName}, monthlySalary{salary}{}
    
    // setters
    void setFirstName(std::string fName){
        firstName = fName;
    }
    void setLastName(std::string lName){
        lastName = lName;
    }
    void setSalary(int salary){
        if(salary > 0){
            monthlySalary = salary;
        } else {
            monthlySalary = 0;
        }
    }
    // getters
    std::string getFirstName() const {
        return firstName;
    }
    
    std::string getLastName() const {
        return lastName;
    }
    int getSalary () const {
        return monthlySalary;
    }
    
    // member function to calculate yearly salary
    int getYearlySalary() const {
        return monthlySalary * 12;
    }
    // memeber function for raise
    int getRaise () const{
        return (monthlySalary * 12 * 0.10) + (monthlySalary * 12);
    }
    
private:
    std::string firstName;
    std::string lastName;
    int monthlySalary;
};
