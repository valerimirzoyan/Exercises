#include <iostream>

using namespace std;

struct Time {

    int hor;
    int min;
    int sec;
};

// Correct the function declaration to specify the return type
int countSec(Time t) {

    return t.hor * 3600 + t.min * 60 + t.sec;;
};


int main() {

    Time r;
    

    cout << "Hor: ";
    cin >> r.hor;

    cout << "Min: ";
    cin >> r.min;

    cout << "Sec: ";
    cin >> r.sec;

    cout << endl << "Total seconds: " << countSec(r) << endl;

    return 0;
}