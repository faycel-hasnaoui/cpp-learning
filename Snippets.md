# My C++ Code Snippets 🚀

### 1. Robust Input Validation
Use this code when you need to prevent the program from crashing if a user types a letter instead of a number.

**Requires:** `#include <iostream>` and `#include <limits>`

```cpp
if (!(cin >> choice)) {
    // 1. Reset the error flags
    cin.clear();
    // 2. Clear the "bad" data from memory
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    cout << "Invalid input! Please enter a number." << endl;
    continue; // Restart the loop
}
