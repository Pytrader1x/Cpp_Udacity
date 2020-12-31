#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main() {
    vector<int> a = {0, 1, 2, 3, 4};
    cout << a[0];
    cout << a[1];
    cout << a[2];
    cout << "\n";

    vector<int> a = {0, 1, 2, 3, 4};
    // Add some code here to access and print elements of a.
    cout << "\n";
    for(int i = 0; i < 5; i++){
        cout << a[i] << "\n";
    }
    
    // 2d Vector
    vector<vector<int>> b = {{1, 1, 2, 3},
                             {2, 1, 2, 3},
                             {3, 1, 2, 3}};
    cout<< b[0][3] << "\n";
}