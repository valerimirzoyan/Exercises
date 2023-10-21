#include <iostream>
#include <string>

using namespace std;


#define N 2
#define START 30
#define END 60

struct Student{

    string lastName;
    int journalNumber;
    int middleGradeNum;
};


int main() {

    //Dynamically allocating memory for an array of  objects
    Student *student = new Student[N];

    int num = 0;
    

    for( int i = 0; i < N; i++ )
    {

        cout << "Enter lastname: ";
        cin >> ( student[i].lastName );

        cout << "Enter middle Grade Num (0 - 20): ";
        cin >> student[i].middleGradeNum;
        cout << endl;

        if( student[i].middleGradeNum < 0 || student[i].middleGradeNum > 100 ) {

            cout << "Incorrect middle Grade Num!!!" << endl;

            break;
        }

        student[i].journalNumber = ++num;
    }


    // Start to End graded students
    for( int i = 0; i < N; i++ )
    {

        if( student[i].middleGradeNum >= START && student[i].middleGradeNum < END ) {

            cout << student[i].lastName << " " << student[i].journalNumber << endl;
        }
    }


    return 0;
}