#include <iostream>
#include <vector>
using namespace std;

void InitRandMatrix1D(vector<int>& MatrixInit1D, int minData = 0, int maxData = 256) {
    for(int a = 1; a < MatrixInit1D.size() + 1; a++) {
       if ( maxData < minData ) { // Usually, the minimum is before the maximum, and sometimes it is not the default value.
          auto temp = maxData;
          maxData = minData;
          minData = temp;
      }
      MatrixInit1D[a] = rand() % (maxData - minData + 1) + minData;
        }
    }

    void CoutMatrix1D(vector<int>& CoutMatrix1D) {
    for(int a = 1; a < CoutMatrix1D.size() + 1; a++) {
      cout << CoutMatrix1D[a] << endl;
        }
    }

int main() {
    int N = 42;
    vector<int> Matrix(N, 0);
    InitRandMatrix1D(Matrix, 0, 42);
    CoutMatrix1D(Matrix);
    cout << "Ok!" << endl;
    return 0;
    }
