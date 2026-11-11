#include <iostream>
#include <algorithm>
using namespace std;

struct Item{
    int weight;
    int value;
    int ratio;
};

int main(){
    int n, capacity;
    int totalValue = 0;
    
    printf("Enter number of items: ");
    scanf("%d", &n);

    struct Item items[n];

    for(int i = 0;i<n; i++){
        if(capacity >= items[i].weight){
            capacity -= items[i].weight;
            totalValue += items[i].value;
        }else{
            totalValue += items[i].ratio * capacity;
            break;
        }
    }
    printf("\nMaximum Value = %.2f\n", totalValue);
    
    return 0;
}