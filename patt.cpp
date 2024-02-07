#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 7; // Number of rows (adjust this as needed)
    int mid = n / 2;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j >= mid - i && j <= mid + i) {
                cout << n - i;
            } else {
                cout << n;
            }
        }
        cout << endl;
    }

    return 0;

}