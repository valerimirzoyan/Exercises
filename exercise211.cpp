#include <iostream>
#include <ctime>

using namespace std;

#define SIZE 10

int main () {

    srand( (unsigned) time(NULL) );  // seed for random number generation

    int n[SIZE];

    float output;

    for ( int i = 0; i < SIZE; i++ )
    {

        n[i] = rand() %10 - 5;

        output += n[i];

        cout << *(&n[i]) << " ";
    }

    output = (output / SIZE);

    cout << endl << *(&output) << endl;

    return 0;
}
