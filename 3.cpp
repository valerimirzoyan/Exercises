#include <iostream>

using namespace std;

#define SIZE 5


int main() {

    char matrix[SIZE][SIZE] = {

        {'a', 'b', 'f', 'g', 'o'},
        {'c', 'e', 'h', 'n', 'p'},
        {'d', 'i', 'm', 'q', 'v'},
        {'j', 'l', 'r', 'u', 'w'},
        {'k', 's', 't', 'x', 'y'}
    };

    int shadowMatrix[SIZE][SIZE] = {

        {1, 2, 6, 7, 15},
        {3, 5, 8, 14, 16},
        {4, 9, 13, 17, 22},
        {10, 12, 18, 21, 23},
        {11, 19, 20, 24, 25}
    };


    // Print the unordered matrix
    for (int i = 0; i < SIZE; i++) 
    {

        for (int j = 0; j < SIZE; j++) 
        {

            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;


    // Sort the matrix using bubble sort
    for (int k = 0; k < SIZE * SIZE - 1; k++) 
    {

        for (int i = 0; i < SIZE * SIZE - k - 1; i++) 
        {

            if (shadowMatrix[i / SIZE][i % SIZE] > shadowMatrix[(i + 1) / SIZE][(i + 1) % SIZE]) 
            {

              // Swap matrix
              swap(matrix[i / SIZE][i % SIZE], matrix[(i + 1) / SIZE][(i + 1) % SIZE]);

              // Swap shadowMatrix
              int swaping = shadowMatrix[i / SIZE][i % SIZE];
              shadowMatrix[i / SIZE][i % SIZE] = shadowMatrix[(i + 1) / SIZE][(i + 1) % SIZE];
              shadowMatrix[(i + 1) / SIZE][(i + 1) % SIZE] = swaping;
            }
        }
    }


    // Print the ordered matrix
    for (int i = 0; i < SIZE; i++) 
    {

        for (int j = 0; j < SIZE; j++) 
        {

            cout << matrix[i][j] << ' ';
        }
    }
    cout << endl;

    return 0;
}