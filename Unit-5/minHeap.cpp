
// The heap data structure is very useful if you want to create a video game, as it makes it easy to store future events that might occur at a specific time in the heap and retrieve them quickly.


// Write a program that takes the event times of the video game as input and creates a min-heap. The event times are represented as integers for now. Your program should produce the min-heap for the given input.
// Input format :

// The first line of input consists of an integer n, the total number of events. 

// The second line of input consists of n space-separated elements.
// Output format :

// The output prints the given array of events into a min-heap data structure.
// Code constraints :

// 1<=n<=30

// 1<=values of min-heap<=50
// Sample test cases :
// Input 1 :

// 5
// 2 4 1 5 9

// Output 1 :

// 1 4 2 5 9 

// Input 2 :

// 7
// 8 7 6 4 5 1 2

// Output 2 :

// 1 4 2 7 5 6 8 

#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    // Convert the array into a min-heap
    std::make_heap(arr.begin(), arr.end(), std::greater<int>());

    // Printing the min-heap elements
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
