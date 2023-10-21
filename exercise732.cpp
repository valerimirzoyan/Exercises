#include <iostream>
#include <string>

using namespace std;

#define N 2

struct Student{

    string name;
    string lastName;
    string fatherIsName;
    char firsElement;
    char lastElement;
};


int main() {

    //Dynamically allocating memory for an array of  objects
    Student *student = new Student[N];

    
    for( int i = 0; i < N; i++ )
    {

        cout << "Enter name: ";
        cin >> ( student[i].name );

        cout << "Enter lastname: ";
        cin >> ( student[i].lastName );

        cout << "Enter absences: ";
        cin >> student[i].fatherIsName;
        cout << endl;
    }

    
    //Determine last and first elements
    for( int i = 0; i < N; i++ )
    {
        
        student[i].firsElement = student[i].lastName.front();
        student[i].lastElement = student[i].lastName.back();


        if( student[i].firsElement == 'A' && student[i].lastElement == 'n') {

            cout << student[i].lastName << " " << student[i].name << " " << student[i].fatherIsName << endl;
        }
    }


    return 0;
}