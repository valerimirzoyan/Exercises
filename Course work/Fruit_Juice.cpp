#include <iostream>
#include <string>

using namespace std;

/*
 This line defines a constant name with a value.
 This constant is later used to declare the size of the dynamic array. "SIZE" 
*/
#define SIZE 300

/*
 A named structure is defined that contains a single member variable ՛fruit՛
 representing the components of the fruit juice. ՛FruitJuice՛
*/
struct FruitJuice {

    string fruit;
};

int main() {

    // The dynamic range of structures is distributed in magnitude.!FruitJuice! !SIZE!
    FruitJuice *juices = new FruitJuice[SIZE];

    string answer = "break";

    int size = 0;
    int count = 0;

    /* 
     A loop is used to take user input for the ingredients of the fruit juice.
     It continues until the user enters "break" as a component.
     The input is stored in the structure member.
     The rotation also tracks the number of valid entries ():'fruit' 'FruitJuice' 'size'
    */
    for (int i = 0; i < SIZE; i++) {

        cout << "Fruit Juice ingredients:  ";
        cin.ignore();
        getline(cin, juices[i].fruit);
        cout << endl;

        if (juices[i].fruit == "break") {
            
            juices[i].fruit = "";
            break;
        }

        size++;
    }

    /*
     Another twist is used to duplicate the fruit juice ingredients.
     Checks for duplicate components using the objects function.
     If no match is found, it is incremented.'find' 'string:npos' 'count'
    */
    for (int i = 1; i < size; i++) {

        size_t finder = juices[i].fruit.find(juices[i - 1].fruit);

        if (finder == string::npos) {

            count++;
        }
    }
    count++;
    
    /*
     The program calculates the number of times the filter needs to be flushed
     based on the number of repeated ingredients.
    */
    cout << "We have to wash " << count << " times." << endl;

    // The dynamic range is designed to free up memory.
    delete[] juices;
}
