#include <iostream>
#include <vector>
#include <string>

using namespace std;

int fib(int number) {
    if (number == 1 || number == 0 ) {
        return number;
    }
    
    return fib(number-1) + fib(number - 2);
}

int main()
{
    int num1;

    std::cout << "Enter a number to find the fib of: ";
    std::cin >> num1;

    std::cout << "Fibonacci of " << num1 << " is " << fib(num1);

}
