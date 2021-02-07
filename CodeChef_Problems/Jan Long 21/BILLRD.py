T = int(input())

for t in range(T):
    
    N, K , x, y = map(int,input().split())

    if x == y:
        print(N,N)
    
    else:

        l = []

        if x < y:

            l = [[x + N - y, N],[N, N - y + x], [y - x,0], [0, y - x]]
        
        else:

            l = [[N,y + N - x], [y + N - x, N], [0,x - y], [x - y,0]]

        K = K - 1

        temp = l[K % 4]

        print(temp[0],temp[1])