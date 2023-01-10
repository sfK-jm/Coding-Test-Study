N , K = map(int, input().split())
moneyValue = []


for _ in range(N):
    moneyValue.append(int(input()))

result = 0
for i in reversed(range(N)):
    result += K // moneyValue[i]
    K = K % moneyValue[i]

print(result)