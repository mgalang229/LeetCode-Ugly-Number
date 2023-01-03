class Solution {
    bool is_prime(int x) {
        if (x < 2) {
            return false;
        }
        if (x == 2) {
            return true;
        }
        for (long long i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                return false;
            }
        }
        return true;
    }
    
    bool is_chosen_prime(int d) {
        int prime[] = {2, 3, 5};
        for (int p : prime) {
            if (d == p) {
                return true;
            }
        }
        return false;
    }
public:
    bool isUgly(int n) {
        if (n <= 0) {
            return false;
        }
        if (is_prime(n) && !is_chosen_prime(n)) {
            return false;
        }
        for (int d = 2; d * d <= n; d++) {
            if (n % d == 0) {
                if (is_prime(d) && !is_chosen_prime(d)) {
                    return false;
                }
                if (is_prime(n / d) && !is_chosen_prime(n / d)) {
                    return false;
                }
            }
        }
        return true;
    }
};
