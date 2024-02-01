#include <iostream>


int getFibonacci(int num) {
    int result = 0;
    int lastResult = 1;
    if (num != 1) {
        for (int i = 0; i < num - 1; i++) {
                int tmpResult = result;
                result = result + lastResult;
                lastResult = tmpResult;
            }
        return result;
    } else {
        return result;
    }
    
}

int main() {
    int inputNum = 0;
    std::cout << "Enter a number: ";
    std::cin >> inputNum;
    std::cout << "\nResult: " << getFibonacci(inputNum) << "\n";
    return 0;
}

