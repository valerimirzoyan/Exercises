#include <iostream>
#include <string>

using namespace std;

#define N 2

struct Student{

    string name;
    string lastName;
    int grade;
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

        cout << "Enter grade (0 - 20): ";
        cin >> student[i].grade;
        cout << endl;

        if( student[i].grade > 20 || student[i].grade < 0 ) {

            cout << "Incorrect grade!!!";
        }
    }

    //Determine clever students
    for( int i = 0; i < N; i++ )
    {

        if( student[i].grade >= 10 && student[i].grade <= 20 ) {

            cout << student[i].name + " " + student[i].lastName;
        }
    }


    return 0;
}