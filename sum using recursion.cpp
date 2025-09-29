#include <iostream>
using namespace std;
int sum(int n) {
    if (n == 0) {         
        return 0;
    }
    return n + sum(n - 1);  
}
int main() {
    int n;
    cout << "Enter the value of n: "<<endl;
    cin >> n;
    cout << "Sum of first " << n << " natural numbers = " << sum(n)<<endl;
    return 0;
}
