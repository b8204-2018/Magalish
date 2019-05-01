#include <iostream>
#include "sort.h"

using namespace std;

int main() {
    int mass[] = {1,7,5,4,9};
    SimpleInsertion<int> insert;
    int *sorted = insert.sort(mass, 5);
    for (int i = 0; i < 5; i++){
        cout << sorted[i] << ' ';
    }
    return 0;
}