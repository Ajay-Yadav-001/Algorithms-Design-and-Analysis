#include <iostream>
#include <algorithm>
using namespace std;

struct Item {
    int weight, value;
};

bool compare(Item a, Item b) {
    return (double)a.value / a.weight > (double)b.value / b.weight;
}

int main() {
    int capacity = 50;
    int n = 3;

    Item item[] = {
        {10, 60},
        {20, 100},
        {30, 120}
    };

    sort(item, item + n, compare);

    double maxValue = 0;

    for (int i = 0; i < n; i++) {
        if (capacity >= item[i].weight) {
            capacity -= item[i].weight;
            maxValue += item[i].value;
        } else {
            maxValue += (double)item[i].value / item[i].weight * capacity;
            break;
        }
    }

    cout << "Maximum Value = " << maxValue;

    return 0;
}