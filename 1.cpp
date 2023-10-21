#include <iostream>

using namespace std;


#define COLUMN 7
#define ROW 8


int main() {

    //Give the size of the matrix and determine the top bottom left and right parts
    int matrix[ROW][COLUMN];

    int  top = 0, bottom = ROW - 1, left = 0, right = COLUMN - 1;
    
    int k = 1;


    //Create and print the matrix
    for( int i = 0 ; i < ROW; i++ )
    {

        for( int j = 0 ; j < COLUMN; j++ )
        {

            matrix[i][j] = 0;

            cout << (matrix[i][j]) << (" ");
        }
       cout << endl;
    }
    cout << endl;

    
    //Loops that will spiral through all elements of the matrix
    while( top <= bottom && left <= right ) 
    {
        
        for ( int i = left; i <= right; i++ ) 
        {

            matrix[top][i] = k;
            k++;
        }
        ++top;
        
        for ( int i = top; i <= bottom; i++ ) 
        {

            matrix[i][right] = k;
            k++;
        }
        --right;
        
        for ( int i = right; i >= left; i-- )
        {

            matrix[bottom][i] = k;
            k++;
        }
        --bottom;

        for ( int i = bottom; i >= top; i-- ) 
        {

            matrix[i][left] = k;
            k++;
        }
        ++left;
    }


    //Print the matrix
    for ( int i = 0 ; i < ROW; i++ )
    {

        for ( int j = 0 ; j < COLUMN; j++ )
        {

            cout << (matrix[i][j]) << ("   ");
        }
        cout << endl;
    }

return 0;
}