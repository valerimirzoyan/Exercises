#include <iostream>

using namespace std;

#define NUM 3


int main() {

    int matrix[NUM][NUM];


    for (int i = 0; i < NUM; i++)
    {

        for (int j = 0; j < NUM; j++)
        {

            if ( (i == 0 && j == 0) || ( i == 0 && j == ( NUM - 1 ) ) || ( i == ( NUM - 1) && j == 0) || ( i == ( NUM - 1) && j == ( NUM - 1 ) ))
            {

                matrix[i][j] = 1;
            } 
            else if ( i == ( (NUM - 1) - (NUM - 1)/ 2 ) && j == ( (NUM - 1) - (NUM - 1) / 2 ) )
            {

                matrix[i][j] = 2;
            }
            else {

                matrix[i][j] = 0;
            }
        }
    }


    for (int i = 0; i < NUM; i++)
    {
        
        for (int j = 0; j < NUM; j++)
        {
            
            cout << matrix[i][j];
        }
        cout << endl;
    }

    return 0;
}