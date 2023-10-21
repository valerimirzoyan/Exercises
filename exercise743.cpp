#include <iostream>
#include <string>

using namespace std;

#define N 1

struct Author {

    string lastName;
    string title;
};


int main() {

    // Dynamically allocating memory for an array of objects
    Author *authors = new Author[N];

    string word = "history";

    for ( int i = 0; i < N; i++ ) {

        cout << "Enter lastname: ";
        cin >> authors[i].lastName;

        cout << "Enter header: ";
        cin.ignore(); // ignored all non keyboard characters such as space or enter
        getline(cin, authors[i].title);

        cout << endl;
    }

    for ( int i = 0; i < N; i++ ) {

        //size_t used as the return type of the functions, such as the find()  
        size_t pos = authors[i].title.find(word);

        //string::npos returning false if word was found
        if ( pos!= string::npos ) {

            cout << authors[i].lastName << " " << authors[i].title << endl;
        }
    }

    return 0;
}
