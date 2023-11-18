#include <iostream>
#include <string>

using namespace std;

#define SIZE 300

struct FruitJuice {
    string fruit;
};

int main() {
    FruitJuice *juices = new FruitJuice[SIZE];

    string answer = "break";

    int size = 0;

    for (int i = 0; i < SIZE; i++) {
        cout << "Fruit Juice ingredients:  ";
        cin.ignore();
        getline(cin, juices[i].fruit);
        cout << endl;

        if (juices[i].fruit == "break") {
            juices[i].fruit = nullptr;
            break;
        }

        size++;

        
    }

    int count = 0;

    for (int i = 1; i < size; i++) {
        size_t finder = juices[i].fruit.find(juices[i - 1].fruit);

        if (finder != string::npos) {
            count++;
        }
    }

    cout << "We have to wash " << count << " times." << endl;

    delete[] juices;

    return 0;
}