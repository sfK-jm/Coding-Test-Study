n = input()
result = ''
for i in range(len(n)):
    if n[i] == ' ' or ord(n[i]) < ord('A'):
        result += n[i]
    else:
        if ord(n[i]) + 13 > 122:
            result += chr(96 + (ord(n[i]) + 13) - 122)
        elif ord(n[i]) + 13 > 90 and ord(n[i]) < 91:
            result += chr(64 + (ord(n[i]) + 13) - 90)
        else:
            result += chr(ord(n[i]) + 13)
print(result)
