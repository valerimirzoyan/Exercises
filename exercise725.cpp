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

    Student *student = new Student[N];

    int middle = 0;
    

    for( int i = 0; i < N; i++ )
    {

        cout << "Enter name: ";
        cin >> ( student[i].name );

        cout << "Enter lastname: ";
        cin >> ( student[i].lastName );

        cout << "Enter grade: ";
        cin >> student[i].grade;
        cout << endl;

        middle += student[i].grade;
    }

    middle /= N;

    //Determine the clever students
    for( int i = 0; i < N; i++ )
    {

        if( student[i].grade > middle ) {

            cout << student[i].name + " " + student[i].lastName;
        }
    }


    return 0;
}