callTime = int(input())
time = list(map(int, input().split()))
youngsik = 0
minsik = 0
for i in time:
    youngsik += i // 30 * 10 + 10
    minsik += i // 60 * 15 + 15
if youngsik < minsik:
    print('Y %d' % youngsik)
elif youngsik > minsik:
    print('M %d' % minsik)
else:
    print('Y M %d' % youngsik)