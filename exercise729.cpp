#include <iostream>
#include <string>

using namespace std;

#define N 2

struct Worker{

    string lastName;
    int num_of_children;
};


int main() {

    //Dynamically allocating memory for an array of objects
    Worker *worker = new Worker[N];

    string mostAbsencesStudent;
    int maxAbsences = -1;

    
    for( int i = 0; i < N; i++ )
    {

        cout << "Enter lastname: ";
        cin >> ( worker[i].lastName );

        cout << "Enter the number of children: ";
        cin >> worker[i].num_of_children;
        cout << endl;
    }


    //Determine wich of the employyes has at least one child
    for( int i = 0; i < N; i++ )
    {

        if( worker[i].num_of_children > 0 ) {

            cout << worker[i].lastName << endl;
        }
    }
    

    return 0;
}