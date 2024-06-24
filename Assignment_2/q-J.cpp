#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>
using namespace std;

long double roundToFiveDecimalsLongDouble(long double number) {
    return round(number * 100000.0L) / 100000.0L;
}

int main() {
    int numoftcases;
    cin >> numoftcases;
    for (int i = 0; i < numoftcases; i++) {
        int n;
        cin >> n;
        vector<long long int> arr(n);
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }

        unordered_map<long double, long long int> mp;
        for (int j = 0; j < n; j++) {
            long double temp = arr[j];
            temp = temp * log(2) - log(temp);
            long double rounded = roundToFiveDecimalsLongDouble(temp);
            mp[rounded]++;
        }

        long long int ctr = 0;
        for (const auto &pair : mp) {
            if (pair.second > 1) {
                ctr += (pair.second * (pair.second - 1)) / 2;
            }
        }
        cout << ctr << endl;
    }
    return 0;
}