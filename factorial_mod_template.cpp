
vector<mint> inv, factorial, inv_factorial;
 
void prepare_factorials(int maximum) {
    // Make sure MOD is prime, which is necessary for the inverse algorithm below.
    for (int p = 2; p * p <= MOD; p++)
        assert(MOD % p != 0);
 
    inv = {0, 1};
    factorial = inv_factorial = {1, 1};
 
    maximum = max(maximum, 1);
    inv.resize(maximum + 1);
    factorial.resize(maximum + 1);
    inv_factorial.resize(maximum + 1);
 
    for (int i = 2; i <= maximum; i++) {
        inv[i] = inv[MOD % i] * (MOD - MOD / i);
        factorial[i] = i * factorial[i - 1];
        inv_factorial[i] = inv[i] * inv_factorial[i - 1];
    }
}
 
mint choose(long long n, long long r) {
    if (r < 0 || r > n) return 0;
    return factorial[n] * inv_factorial[r] * inv_factorial[n - r];
}
 
mint inv_choose(long long n, long long r) {
    assert(0 <= r && r <= n);
    return inv_factorial[n] * factorial[r] * factorial[n - r];
}
 
mint permute(long long n, long long k) {
    if (k < 0 || k > n) return 0;
    return factorial[n] * inv_factorial[n - k];
}
 
mint inv_permute(long long n, long long k) {
    assert(0 <= k && k <= n);
    return inv_factorial[n] * factorial[n - k];
}
