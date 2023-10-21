#include <iostream>

using namespace std;

#define NUM 3

struct worker{

    char name[20];
    char lastName[20];
    int wedding;
    int kids;
};


int main() {
    
    worker a[NUM];

    for ( int i = 0; i < NUM; i++)
    {

        cout << "Enter name : ";
        cin.getline(a[i].name,20);
        
        cout << "Enter last name : ";
        cin.getline(a[i].lastName,20);
        
        cout << "Are worker mariade? [1 / 0] : ";
        cin >> a[i].wedding;
        
        cout << " How many kids  has worker? : ";
        cin >>  a[i].kids;
        
        cin.get();
    }

    for (int i = 0; i < NUM; i++)
    {

        if ( a[i].wedding == 1 && a[i].kids > 0) {

            cout << a[i].name << endl << a[i].lastName << endl << endl;
        }
    }

    return 0;
}