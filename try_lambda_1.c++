#include <iostream>
#include <vector>

using namespace std;

void whatValues(const vector<int>& values, void(*printValue)(int)) {
    for (auto value: values) {
        printValue(value);
    }
}

int main() {
    vector<int> values = { 1,2,3,4,5 };

    whatValues(values, [](int value){cout << "Value: " << value << endl;});

    return 0;
}