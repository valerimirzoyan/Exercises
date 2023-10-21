#include <iostream>
#include <string>

using namespace std;

#define N 2

struct Student{

    string lastName;
    int journalNumber;
    int grade;
};


int main() {

    //Dynamically allocating memory for an array of  objects
    Student *student = new Student[N];

    int num = 0;
    

    for( int i = 0; i < N; i++ )
    {

        cout << "Enter lastname: ";
        cin >> ( student[i].lastName );

        cout << "Enter grade (0 - 20): ";
        cin >> student[i].grade;
        cout << endl;

        if( student[i].grade > 20 || student[i].grade < 0 ) {

            cout << "Incorrect grade!!!" << endl;

            break;
        }

        student[i].journalNumber = ++num;
    }


    //Determine lazy students
    for( int i = 0; i < N; i++ )
    {

        if( student[i].grade >= 0 && student[i].grade < 10 ) {

            cout << student[i].lastName << " " << student[i].journalNumber << endl;
        }
    }


    return 0;
}