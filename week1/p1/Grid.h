using namespace std;

class Grid {
    
// private data field which is a 10 by 10 two-dimensional array of integer data type 
private:
    static const int ROWS = 10;
    static const int COLS = 10;
    int grid[ROWS][COLS];

// Include a no-argument constructor that initializes all the elements of the array to zero
public:
    Grid(){
        // initialize all the elements of the array to zero
        // outer
        for (int i = 0; i < ROWS; i++)
        {
            // inner
            for (int j = 0; j < COLS; j++)
            {
                grid[i][j] = 0;
            }
        }
    }

    // a get function that returns the element at row i and column j of the array, the row and the column are passed as parameters to the get function 
    int getElement(int i, int j){
        if (i < ROWS && j < COLS){
            return grid[i][j];
        } else {
            cout << "Element does not exist in the array" << endl;
        }
    }

    // a set function that sets the element at row i and column j of the array to a given value.
    // The row and the column as well as the new value are passes as parameters to the set function 
    void setElement(int i, int j, int newValue){
        if (i < ROWS && j < COLS){
            grid[i][j] = newValue;
        } else {
            cout << "Element does not exist in the array" << endl;
        }
    }

};