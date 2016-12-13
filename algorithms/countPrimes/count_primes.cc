// Copyright 2016 <lee>
// Author: Congcong Li
// Mail: licongcongcn@gmail.com
// Time: Tue Dec 13 17:01:17 2016
// Source: https://leetcode.com/problems/count-primes/

// Description:

// Count the number of prime numbers less than a non-negative number, n.

class Solution {
 public:
  int countPrimes(int n) {
    if (n <= 2) return 0;
    int total = 0;
    vector<bool> prime(n, true);
    prime[0] = false;
    prime[1] = false;
    for (int i=2; i < sqrt(n); i++) {
      if (prime[i]) {
        for (int j = 2*i; j < n; j += i) {
          prime[j] = false;
        }
      }
    }
    return count(prime.begin(), prime.end(), true);
  }
};
