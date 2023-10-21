#include <iostream>
#include <cmath>

using namespace std;

#define SIZE 8


int main() {

    uint64_t matrix[SIZE][SIZE];

    uint64_t add = 0;
    
    int power = 0, sqrtNumber = 2;

    
    for( int i = 0; i < SIZE; i++ )
    {

        for( int j = 0; j < SIZE; j++ )
        {
           
            uint64_t square = pow(sqrtNumber, power);

            matrix[i][j] = square;

            cout << matrix[i][j] << "   " ;
            
            power++;

            add += matrix[i][j];

        }
        cout << endl << endl;
    }
    cout << endl << add << endl;

    return 0;
}