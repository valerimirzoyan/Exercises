#include <iostream>

using namespace std;

#define NUM 5

int main() {

    char numArray[NUM];
    char newArray[NUM];


    for( int i = 0; i < NUM; i++ )
    {

        cout << "Enter sybols ";
        cin >> numArray[i];

        cin.get();
    }

    for ( int i = 0; i < NUM; i++)
    {

        if( numArray[i] != 'd' )
        {

            newArray[i] = numArray[i];
        }
    }

    for( int i = 0; i < NUM; i++ )
    {

        cout << newArray[i] << " ";
    }
}