# Selection-Sort-Algorithm-Implementation
Description:

This repository contains an implementation of the Selection Sort algorithm in C++.

Introduction:

Selection Sort is a simple sorting algorithm that works by repeatedly finding the minimum element from the unsorted portion of the array and swapping it with the first element of the unsorted portion. It has a time complexity of O(n^2), making it inefficient for large lists, but it's simple and easy to implement.

<img src="https://github.com/bhawanak0504/Selection-Sort-Algorithm-Implementation/assets/117829849/addbeffd-61c6-44d5-bea0-abf5e4027fd3" height="400" width="600"></img>


Implementation:

The Selection Sort algorithm is implemented in the Code file, written in C++. The main function selection_sort() takes an array as input and sorts it in ascending order using the Selection Sort algorithm.


Complexity Analysis of Selection Sort:

Time Complexity: The time complexity of Selection Sort is O(N2) as there are two nested loops:

- One loop to select an element of Array one by one = O(N)
- Another loop to compare that element with every other Array element = O(N)
- Therefore overall complexity = O(N) * O(N) = O(N*N) = O(N2) 

Advantages of Selection Sort Algorithm:

- Simple and easy to understand.
- Works well with small datasets.

Disadvantages of the Selection Sort Algorithm:

- Selection sort has a time complexity of O(n^2) in the worst and average case.
- Does not work well on large datasets.
- Does not preserve the relative order of items with equal keys which means it is not stable.

Usage:

To use the Selection Sort algorithm:

1. Clone this repository to your local machine.
2. Navigate to the directory containing the source code.
3. Run the compiled program.
4. Enter the number of elements you want to sort and the elements themselves.
5. The program will output the sorted array.


Contributing:

Contributions to improve this implementation or add features are welcome. If you find any issues or have suggestions for enhancements, please open an issue or submit a pull request.

Author: bhawanak0504
