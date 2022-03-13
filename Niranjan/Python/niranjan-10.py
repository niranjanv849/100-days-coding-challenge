t = int(input())
for _ in range(t):
    bike,car = map(int,input().split())

    if bike < car:
        print("BIKE")
    elif bike == car:
        print("SAME")
    else:
        print("CAR")