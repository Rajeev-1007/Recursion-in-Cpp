# Recursion-in-Cpp
# Name: Rajeev Ramesh Reddy E
# PRN:24070123081

Aim: 

To study and implement recursion in C++ by writing programs for:

Calculating factorial of a number.
Finding the sum of first n natural numbers.
Reversing a string using recursion.

Sodtware Used: Vs Code

Theory: 

Recursion in C++ is a programming technique where a function calls itself to solve smaller instances of a problem. It consists of a base case to terminate the recursion and a recursive case that reduces the problem. Recursion simplifies complex tasks like factorials, Fibonacci series, and tree traversals. Though elegant, it can lead to stack overflow if not properly controlled. Efficient recursive functions balance clarity with performance, often aided by memoization or tail recursion.

Syntax:

    #include <iostream>
    using namespace std;

    // Recursive function to calculate factorial
    int factorial(int n) {
    if (n == 0)  // Base case
        return 1;
    else         // Recursive case
        return n * factorial(n - 1);
    }

    int main() {
    int num = 5;
    cout << "Factorial of " << num << " is " << factorial(num);
    return 0;
    }


Algorithm: 

i) Algorithm: Recursive Factorial in C++

 1. Input Number
- Prompt the user to enter an integer `num` using `cin`.

 2. Define Recursive Function
- Create a function `factorial(int n)` that returns 1 if `n == 0` or `n == 1` (base case).
- Otherwise, return `n * factorial(n - 1)` (recursive case).

 3. Call Function
- In `main()`, call `factorial(num)` and store the result in `result`.

 4. Display Result
- If `result != -1`, print the factorial value using `cout`.

 5. End Program
- Return 0 to indicate successful execution.

ii) Algorithm: Recursive String Reversal in C++

 1. Input String
- Prompt the user to enter a string using `cin.getline()` and store it in a character array `str`.

 2. Calculate Length
- Traverse the string using a loop until the null character `'\0'` is found to determine its length.

 3. Define Recursive Function
- Create `reverseString(char str[], int start, int end)`:
  - If `start >= end`, return (base case).
  - Swap characters at `start` and `end`.
  - Recursively call the function with `start + 1` and `end - 1`.

 4. Call Reversal
- Call `reverseString(str, 0, length - 1)` to reverse the string in-place.

 5. Display Result
- Print the reversed string using `cout`.

iii)  Algorithm: Recursive Sum of Natural Numbers in C++

 1. Input Value
- Prompt the user to enter an integer `n` using `cin`.

 2. Define Recursive Function
- Create a function `sum(int n)`:
  - If `n == 0`, return 0 (base case).
  - Otherwise, return `n + sum(n - 1)` (recursive case).

 3. Call Function
- In `main()`, call `sum(n)` and store or directly print the result.

 4. Display Result
- Output the sum of the first `n` natural numbers using `cout`.

 5. End Program
- Return 0 to indicate successful execution.

Conclusion:

This program demonstrates how recursion simplifies the calculation of the sum of natural numbers. By repeatedly calling the same function with a reduced value, it breaks the problem into smaller parts until reaching the base case. This approach reinforces the concept of divide-and-conquer and highlights recursion’s elegance in solving mathematical problems efficiently.
