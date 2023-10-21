#include <iostream>
#include <string>

using namespace std;

#define N 1

struct Author {

    string lastName;
    int pages;
};


int main() {

    // Dynamically allocating memory for an array of objects
    Author *authors = new Author[N];

    for ( int i = 0; i < N; i++ ) {

        cout << "Enter lastname: ";
        cin >> authors[i].lastName;

        cout << "Enter pages: ";
        cin >> authors[i].pages;

        cout << endl;
    }

    int allPages = 0;

    for ( int i = 0; i < N; i++ ) {

        if ( authors[i].lastName.front() == 'A' ) {

            allPages += authors[i].pages;
        }
    }

    cout << allPages << endl;

    return 0;
}
