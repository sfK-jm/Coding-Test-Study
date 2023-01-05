K = int(input())
for _ in range(K):
    P, M = map(int, input(). split())
    seat = [True for _ in range(M)]
    impossibleToSeatPeople = 0
    for _ in range(P):
        wantSeat = int(input())

        if seat[wantSeat - 1] == True:
            seat[wantSeat - 1] = False
        else:
            impossibleToSeatPeople += 1
    print(impossibleToSeatPeople)