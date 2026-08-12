#include <iostream>
using namespace std;

int main() {
    int m, n;

    cout << "Enter the number of Rows of 2D Array : ";
    cin >> m;
    cout << "Enter the number of Columns of 2D Array : ";
    cin >> n;

    int a[m][n];

    cout << "Enter the Elements of 2D Array :\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
        cout<< "\n";
    }
    cout << "Enter the element to be searched : ";
    int x;
    cin >> x;
    int found = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == x) {
                if(found == 0)
                cout << "Element found at position: (" << i << "," << j << ")";
                else
                cout << ", (" << i << "," << j << ")";

                found++;
            }
        }
    }
    if (found == 0)
    cout << "Element not found.\n";
    else
    return 0;
}