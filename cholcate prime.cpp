#include<stdio.h>
#define SIZE 5
int p(int b[]);
main()
{
	int b[],i;
	printf("Eter:");
	for(i=0;i<SIZE;i++)
	scanf("%d",SIZE);
}
int p(int b[])
{
	int i;
	if()
	if	
}
/*
Got it! Here's a list of **different logic approaches** to check if a number is **prime**, using various methods — some optimized, some using tricks like bitwise, and some mathematical.

---

### ? 1. **Basic Trial Division**

```text
Check divisibility from 2 to n-1.
If divisible by any ? Not prime
Else ? Prime
```

---

### ? 2. **Optimized Trial Division (up to vn)**

```text
Check divisibility from 2 to vn.
If divisible ? Not prime
Else ? Prime
```

---

### ? 3. **Skip Even Numbers (except 2)**

```text
If n == 2 ? Prime
If n is even ? Not prime
Then check odd divisors from 3 to vn
```

---

### ? 4. **Bitwise Check for Evenness**

```text
Use (n & 1) == 0 to check if n is even.
Skip all even numbers during divisibility check.
```

---

### ? 5. **6k ± 1 Optimization**

```text
All primes > 3 are of form 6k ± 1
So:
1. Check n % 2 == 0 or n % 3 == 0 ? Not prime
2. Then check from i = 5 to vn with steps of 6:
   If n % i == 0 or n % (i + 2) == 0 ? Not prime
```

---

### ? 6. **Sieve of Eratosthenes (for range)**

```text
Generate all primes up to n using a boolean array.
Mark multiples of each prime as non-prime.
```

---

### ? 7. **Bitset-based Sieve (memory efficient)**

```text
Use bitset instead of boolean array in Sieve.
Saves space when working with large numbers.
```

---

### ? 8. **Miller-Rabin Primality Test (probabilistic)**

```text
Fast probabilistic test for large numbers.
Can be made deterministic for smaller ranges.
```

---

### ? 9. **Fermat's Little Theorem (probabilistic)**

```text
If a^(n-1) % n ? 1 for some a, then n is not prime.
Fast check but may give false positives (Carmichael numbers).
```

---

### ? 10. **Prime Lookup using Precomputed List**

```text
Store list of known primes.
Check membership using binary search or hash set.
```

---

Let me know if you want **code for any of these approaches**, or a **comparison of their speed/memory use**.
Sure! Here's the **core logic in C** for each prime-checking approach listed earlier. These are **code snippets only** (no full programs, no `main()`), focusing just on the **prime-checking logic**.

---

### ? 1. **Basic Trial Division**

```c
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i < n; i++)
        if (n % i == 0) return 0;
    return 1;
}
```

---

### ? 2. **Optimized Trial Division (up to vn)**

```c
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}
```

---

### ? 3. **Skip Even Numbers**

```c
int isPrime(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    for (int i = 3; i * i <= n; i += 2)
        if (n % i == 0) return 0;
    return 1;
}
```

---

### ? 4. **Bitwise Even Check**

```c
int isPrime(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if ((n & 1) == 0) return 0; // even check using bitwise
    for (int i = 3; i * i <= n; i += 2)
        if (n % i == 0) return 0;
    return 1;
}
```

---

### ? 5. **6k ± 1 Optimization**

```c
int isPrime(int n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    return 1;
}
```

---

### ? 6. **Sieve of Eratosthenes (range)**

```c
void sieve(int n, int isPrime[]) {
    for (int i = 0; i <= n; i++) isPrime[i] = 1;
    isPrime[0] = isPrime[1] = 0;
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = 0;
        }
    }
}
```

---

### ? 7. **Bitset Sieve (using `char` as bit array)**

```c
char isPrime[1000000];
void sieve(int n) {
    memset(isPrime, 1, sizeof(isPrime));
    isPrime[0] = isPrime[1] = 0;
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = 0;
        }
    }
}
```

---

### ? 8. **Miller-Rabin (Simplified Probabilistic)**

*Note: Only works well for large n, needs modular exponentiation*

```c
int power(int a, int b, int mod) {
    int result = 1;
    while (b) {
        if (b & 1) result = (1LL * result * a) % mod;
        a = (1LL * a * a) % mod;
        b >>= 1;
    }
    return result;
}

int isPrime(int n) {
    if (n <= 1 || n == 4) return 0;
    if (n <= 3) return 1;
    return (power(2, n - 1, n) == 1); // Fermat's test base 2
}
```

---

### ? 9. **Fermat’s Test (Probabilistic)**

```c
int power(int a, int b, int mod) {
    int res = 1;
    a %= mod;
    while (b) {
        if (b & 1) res = (1LL * res * a) % mod;
        a = (1LL * a * a) % mod;
        b >>= 1;
    }
    return res;
}

int isPrime(int n) {
    if (n <= 1) return 0;
    return power(2, n - 1, n) == 1; // base 2 check
}
```

---

### ? 10. **Prime Lookup from Precomputed List**

```c
int knownPrimes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23}; // Example
int isPrime(int n) {
    int size = sizeof(knownPrimes) / sizeof(int);
    for (int i = 0; i < size; i++)
        if (knownPrimes[i] == n) return 1;
    return 0;
}
```

---

Let me know if you'd like these grouped by **fastest**, **most accurate**, or **for large numbers**.
*/
