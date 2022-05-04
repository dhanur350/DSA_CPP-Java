# C++ & Java

C++ nad Java codes with DSA logics

<!--Please ignore the `a.out` file as I do code in linux and G++ compiler produces `a.out` file everytime when my code gets compiled successfully.
-->

## DSA `Data Structures and Algorithms` Concepts and other simple concepts are stored in different folders and it's now available in Java too..

## `cin.geltine()` is a method where we can take input from user including spaces and tabs

## getline functions have `3 parameters`

## `cin.getline(a, 10, '\n');`

      getline  |    |   |
    /**        |    |    |  Delimiter
     *      1st    2nd  3rd Parameter
     *   Parameter Parameter
         is var*/

## To take input in 2D array in Java

- Simple take a 2D variable as int and direct use this code
- import java.util.\*;
- int[][] arr = new int[size][size]
- Scanner scan = new Scanner(System.in);
- arr[i][j] = scan.nextInt();
- This'll store numbers in array storage.
- This'll show garbage value which is by default zero but at() of vector will show error because if we don't added something it'll not show anything else
- It'll print segmentation fault core dumped, so it's good to use at().

## About Vector library file in C++

- If we use for loop to iterate in vector then using v[i] will be safe but using v[i] direct will be unsafe because it'll show 0 as answer so alternate will be we should use v.at(); so if we cout<< that array index it'll throw error of segmentation fault core dumped so we'll get to know about that index is not initialized in vector dynamic array;

## LeetCode Spiral Order Matrix Solution

- Link to the problem in LeetCode [Spiral_Order_Matrix](https://leetcode.com/problems/spiral-matrix/)
- Solution is in the DSA Folder in spiral.cpp with comments available how to traverse like spiral.
- In While loop will continue checking till `( startRow <= endRow and startColumn <= endColumn)`
