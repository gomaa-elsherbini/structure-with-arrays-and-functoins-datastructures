
#include <iostream>
using namespace std;


struct stInfo
{
    string firstName;
    string lastName;
    short int age;
    string phone;
};

void readPersonInfo(stInfo &Person)
{
    cout << "please enter the person`s first name?\n";
    cin >> Person.firstName;

    cout << "please enter the person`s last name?\n";
    cin >> Person.lastName;

    cout << "please enter the person`s age?\n";
    cin >> Person.age;

    cout << "please enter the person`s phone?\n";
    cin >> Person.phone;
}

void printPersonInfo(stInfo Person)
{
    cout << "***********************\n";
    cout << "First Name: " << Person.firstName << endl;
    cout << "Last Name: " << Person.lastName << endl;
    cout << "Age: " << Person.age << endl;
    cout << "Phone: " << Person.phone << endl;
    cout << "***********************\n";
}

void readInfoOfPersonsArray(stInfo arrayOfPersons[2])
{
    readPersonInfo(arrayOfPersons[0]);
    readPersonInfo(arrayOfPersons[1]);
}
void printInfoOfPersonsArray(stInfo arrayOfPersons[2])
{
    printPersonInfo(arrayOfPersons[0]);
    printPersonInfo(arrayOfPersons[1]);
}
int main()
{
    stInfo arrayOfPersons[2];

    readInfoOfPersonsArray(arrayOfPersons);
    printInfoOfPersonsArray(arrayOfPersons);

    return 0;
    
}
