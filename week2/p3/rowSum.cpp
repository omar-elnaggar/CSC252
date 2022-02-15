#include <iostream>
#include <vector>

using namespace std;

/* (a) Write the function rowSum() that receives a(double type) two-dimensional array using vectors and returns a vector
 consisting of the sum of elements in each row of the two-dimensional structure. The value of the returned vector at index
 zero is the sum of the elements in row zero of the two-dimensional structures. At index one of the returned vectors is the
 sum of the elements in row one and so on. 
*/
vector<double> rowSum(vector<vector<double>> a);

int main(){

    vector<vector<double>> myVector = {
        {5,25.3,12.2,42.7,1.2},
        {12,2.2,312,31,24.5},
        {31,123.3,1.2,4.7,12},
        {61.2,2,12,31,24.5},
        {73.1,5,86,5,4.2}
    };

    cout << "myVector" << endl;
    for(int i = 0; i < myVector.size(); i++){
        for(int j = 0; j < myVector[i].size(); j++){
            cout << myVector[i][j] << " ";
        }
        cout << endl;
    }

    vector<double> summedVector = rowSum(myVector);

    cout << "Summed Vector" << endl;
    for (int i = 0; i < summedVector.size(); i++){
        cout << "Row " << i << ": " << summedVector[i] << endl;
    }


    return 0;
}

vector<double> rowSum(vector<vector<double>> a){
    vector<double> result;
    double sum = 0;
    for(int i=0; i < a.size(); i++){
        sum = 0;
        for(int j=0; j < a[i].size(); j++){
            sum += a[i][j];
        }
        result.push_back(sum);
    }
    return result;
}