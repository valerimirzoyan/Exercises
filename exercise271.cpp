#include <iostream>

using namespace std;


#define NUM 5

int main() {

    char numArray[NUM];
    int count = 0;

    for( int i = 0; i < NUM; i++ )
    {

        cout << "Enter sybols";
        cin >> numArray[i];

        cin.get();
    }

    for( int i = 0; i < NUM; i++ )
    {

        if( numArray[i] == 'a')
        {

            count++;
        }
    }

    cout << count;
}