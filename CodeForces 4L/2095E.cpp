#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) return false;
    }
    return true;
};

bool verif(int x, int n, int line[]) {
    for (int i = 0; i < n; i++) {
        if (line[i] == x) return false;
    }
    return true;
};

int countPairs(int n, int p, int k, int line[]) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int xor1 = line[i] ^ line[j];
            int xor2 = ((1LL * line[i] * line[i]) % p) ^ ((1LL * line[j] * line[j]) % p);
            int result = (1LL * xor1 * xor2) % p;
            if (result == k) {
                count++;
            }
        }
    }
    return count;
};

int main() {
    int n, p, k;

    do {
        cin >> n;
    } while (n < 2 || n > 3 * pow(10, 5));

    do {
        cin >> p;
    } while (p < 2 || p > pow(10, 9) || !isPrime(p));

    do {
        cin >> k;
    } while (k < 0 || k > p - 1);

    int a;
    int line2[n];
    for (int i = 0; i < n; i++) {
        do {
            cin >> a;
        } while (!verif(a, i, line2) || a < 0 || a > p - 1);
        line2[i] = a;
    };

    cout << countPairs(n, p, k, line2) << endl;
};