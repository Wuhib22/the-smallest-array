#include <iostream>
using namespace std;

int main() {
    // Predefined array
    int arr[] = {34, 12, 5, 78, 1}; 
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int smallest = arr[0]; // Assume the first element is the smallest

    // Loop through the array to find the smallest element
    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i]; // Update if a smaller element is found
        }
    }

    // Output the smallest element
    cout << "The smallest element in the array is: " << smallest << endl;

    return 0;
}
