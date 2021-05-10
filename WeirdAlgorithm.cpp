// Weird Algorithm

#include <iostream>
#include <list>
#include <cmath>

using namespace std;

void weird (int n) {
    list<int> arr;
    if (n == 1) {
        arr.push_back(n);
    } else if (n > 1 && n <= pow(10, 6)) {
        while (n != 1) {
            if (n % 2 == 0) {
                n = n / 2;
            } else {
                n = n * 3 + 1;
            }
        arr.push_back(n);
        }
    } else {
        cout << "You exceeded the range";
    }
    if (!arr.empty()) {
        for (auto item : arr)
        std::cout << item << " ";
    }
}

int main ()
{
  weird(123);
  return 0;
}
