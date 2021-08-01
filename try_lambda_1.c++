#include <iostream>
#include <vector>

using namespace std;

// takes vector<int> and function pointer as parameters
void whatValues(const vector<int>& values, void(*printValue)(int)) {
    for (auto value: values) {
        printValue(value);
    }
}

int main() {
    vector<int> values = { 1,2,3,4,5 };
    // pass lambda expression to print value
    whatValues(values, [](int value){cout << "Value: " << value << endl;});

    return 0;
}