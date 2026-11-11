#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

double FKnapsack(int value[], int weight[], int n, int w) {
    double ratio[n];

    for(int i = 0; i < n; i++) {
        ratio[i] = (double)value[i] / weight[i];
    }

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(ratio[i] < ratio[j]) {
                swap(ratio[i], ratio[j]);
                swap(value[i], value[j]);
                swap(weight[i], weight[j]);
            }
        }
    }

    double totalvalue = 0.0;

    for(int i = 0; i < n; i++) {
        if(weight[i] <= w) {
            totalvalue += value[i];
            w -= weight[i];
        } else {
            totalvalue += ratio[i] * w;
            break;
        }
    }

    return totalvalue;
}

int main() {
    int n, w;
    cin >> n >> w;

    int value[n], weight[n];

    for(int i = 0; i < n; i++) {
        cin >> value[i] >> weight[i];
    }

    cout << fixed << setprecision(2) << FKnapsack(value, weight, n, w);

    return 0;
}

/*
kmp
boyer more
prims
kruskal
fractional knapsack

*/
