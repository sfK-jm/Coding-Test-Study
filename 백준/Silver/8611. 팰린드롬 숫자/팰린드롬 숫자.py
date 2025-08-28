def isPalindrome(a):
    return a == a[::-1]

def convert(n, m):
    arr = []
    while True:
        if n // m == 0:
            arr.append(n)
            break
        arr.append(n % m)
        n = n // m
    arr.reverse()
    return "".join(map(str, arr))
    
n = int(input())
flag = False
for i in range(2, 11):
    if isPalindrome(convert(n, i)):
        flag = True
        print(i, convert(n, i))
        
if not flag:
    print("NIE")