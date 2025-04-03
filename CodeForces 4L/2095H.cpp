#include <iostream>
#include <string>

using namespace std;

int main() {
    string wordlist[11] = {
        "CODEFORCES",
        "EYE",
        "TESTING",
        "SYSTEM",
        "APRIL",
        "FOOLS",
        "YOU",
        "READ",
        "POORLY",
        "GET",
        "EYEGLASSES"
    };

    int x;
    cin >> x;
    cout << wordlist[x-1] << endl;

    return 0;
}


// DONE 04/03/2025