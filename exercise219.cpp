#include <iostream>
#include <ctime>

using namespace std;

#define SIZE 10
#define K 2

int main () {

    srand( (unsigned) time(NULL) );  // seed for random number generation

    int n[SIZE];

    float output;

    for ( int i = 0; i < SIZE; i++ )
    {

        n[i] = rand() %10 - 5;

        cout << n[i] << " ";

        if ( i % K == 0 ) {
            
            output++;
        }
    }

    cout << endl << *(&output) << endl;

    return 0;
}