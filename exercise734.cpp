#include <iostream>
#include <string>

using namespace std;


#define N 2
#define A 2000

struct Worker{

    string lastName;
    int num_of_family_members;
    int salary;
};


int main() {

    //Dynamically allocating memory for an array of objects
    Worker *worker = new Worker[N];

    
    for( int i = 0; i < N; i++ )
    {

        cout << "Enter lastname: ";
        cin >> ( worker[i].lastName );

        cout << "Enter the number of family members: ";
        cin >> worker[i].num_of_family_members;

        cout << "Enter the salary: ";
        cin >> worker[i].salary;

        cout << endl;
    }


    for( int i = 0; i < N; i++ )
    {

        if( worker[i].salary < A ) {

            cout << worker[i].num_of_family_members << endl;
        }
    }
    

    return 0;
}