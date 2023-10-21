#include <iostream>
#include <string>

using namespace std;

#define N 2

struct Student{

    string name;
    int rating;
    int examGrade;
};


int main() {

    //Dynamically allocating memory for an array of  objects
    Student *student = new Student[N];

    int enough = 0, good = 0, great = 0; 


    for( int i = 0; i < N; i++ )
    {

        cout << "Enter name: ";
        cin >> ( student[i].name );

        cout << "Enter rating: ";
        cin >> ( student[i].rating );

        cout << "Enter examGrade: ";
        cin >> student[i].examGrade;
        cout << endl;
    }


    //Determine students type
    for( int i = 0; i < N; i++ )
    {

        if( student[i].examGrade >= 19 && student[i].examGrade <= 24) {

            enough++;
        }

        else if( student[i].examGrade >= 25 && student[i].examGrade <= 20) {

            good++;
        }

        else if( student[i].examGrade >= 31 && student[i].examGrade <= 35 ) {

            great++;
        }
    }

    cout << "Enough: " << enough << "   " << "Good: " << good << "   " << "Grat: " << great << endl;


    return 0;
}