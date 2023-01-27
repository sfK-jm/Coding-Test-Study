num1, num2 = map(int, input().split())


def gcd(a, b):
    while b > 0:
        a, b = b, a % b
    return a


def lcm(a, b):
    return a * b // gcd(a, b)


print(gcd(num1, num2))
print(lcm(num1, num2))
