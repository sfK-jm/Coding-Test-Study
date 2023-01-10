W = []
K = []

for _ in range(10):
    W.append(int(input()))

for _ in range(10):
    K.append(int(input()))

W.sort(reverse=True)
K.sort(reverse=True)

WTop3 = 0
KTop3 = 0

for i in range(3):
    WTop3 += W[i]
    KTop3 += K[i]

print(WTop3, KTop3)