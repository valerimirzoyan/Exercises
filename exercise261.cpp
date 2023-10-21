#include <iostream>
#include <ctime>

using namespace std;


#define N 5

int main() {

    int X[N], Y[N];

    srand( (unsigned) time(NULL) );  // seed for random number generation

    float outputX, outputY, output;

    for ( int i = 0; i < N; i++ )
    {

        X[i] = rand() %10 - 5;
        Y[i] = rand() %10;

        outputX += X[i];
        outputY += Y[i];

    }

    outputX = (outputX / N);
    outputY = (outputY / N);
    output = outputX * outputY;

    cout << endl << output << endl;
}