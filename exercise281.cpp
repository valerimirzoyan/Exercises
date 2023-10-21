#include <iostream>

using namespace std;

#define NUM 5

int main() {

    srand( (unsigned) time(NULL) );

    int x[NUM];

    int y[NUM];

    int j = 0;

    for ( int i = 0; i < NUM; i++ )
    {

        x[i] = rand() %10 - 5;
        
        if( x[i] > 0 ) {
            
            y[j] = x[i];
            j++;
        }
    }

    for( int i = 0; i <= j; i++ )
    {

        cout << y[i] << " ";
    }
}