# 전채 숫자 집합
num = set(range(1, 10001))
rmv = set()

# 생성자의 숫자를 rmv에 넣기
for i in range(1, 10001):
    for j in str(i):
        i += int(j)
    rmv.add(i)
# i = 33일 때 str(i) = '3', '3'
# 즉 i += int(j)이니까 i = 39
# 그리고 이 수는 생성자니까 rmv에 저장

# 전체 숫자에서 rmv제거
num -= rmv

# 출력
for k in sorted(num):
    print(k)
