def gcd(a, b):
    "greatest common divisor"
    while a != 0:
        a, b = b%a, a    #병렬 할당( parallel assignment)
    return b
print(gcd.__doc__)
print(gcd(12, 20))

