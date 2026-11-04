#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; // Read the single value of N
    
    if (n < 5) {
        // Can't use the 5-rupee coin
        cout << n << "\n"; 
    } else {
        // Use exactly one 5-rupee coin, rest in 1-rupee coins
        cout << 1 + (n - 5) << "\n"; 
    }
    
    return 0;
}




// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna