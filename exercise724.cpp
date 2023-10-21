#include <iostream>
#include <string>

using namespace std;

#define N 2

struct Student{

    string name;
    string lastName;
    int absences;
};


int main() {

    //Dynamically allocating memory for an array of  objects
    Student *student = new Student[N];

    string mostAbsencesStudent;
    int maxAbsences = -1;

    
    for( int i = 0; i < N; i++ )
    {

        cout << "Enter name: ";
        cin >> ( student[i].name );

        cout << "Enter lastname: ";
        cin >> ( student[i].lastName );

        cout << "Enter absences: ";
        cin >> student[i].absences;
        cout << endl;
    }


    //Determine the largest missing student
    for( int i = 0; i < N; i++ )
    {

        if( maxAbsences < student[i].absences ) {

            maxAbsences = student[i].absences;
            mostAbsencesStudent = student[i].name + " " + student[i].lastName;
        }
    }

    cout << mostAbsencesStudent;


    return 0;
}