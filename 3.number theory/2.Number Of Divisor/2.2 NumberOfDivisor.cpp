#include <iostream>
#include <cmath>

int countDivisors(int n) {
    int count = 0;
    int limit = ceil(cbrt(n));  // Cube root of n

    for (int i = 1; i <= limit; i++) {
        if (n % i == 0) count = count + 2;
        if(n==i*i  ) count--;
    }

    return count;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    int result = countDivisors(n);

    std::cout << "Number of divisors for " << n << " is: " << result << std::endl;

    return 0;
}
