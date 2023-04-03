// 1. Find the Fibonacci Number at a specific index
#include<iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter index: ";
    cin >> n;

    int prev1 = 1;
    int prev2 = 0;

    if(n == 0)
        return prev2;

    for(int i = 2; i <= n; i++)
    {
        int current = prev1 + prev2;
        //shift logic
        prev2 = prev1;
        prev1 = current;
    }

    cout << "The Fibonacci Number at index " << n << " is " << prev1 << endl;

    return 0;
}

/*
Time Complexity: O(n)
Space Complexity: O(1)
*/