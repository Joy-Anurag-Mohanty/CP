T = int(raw_input())
for i in range (T):
    n, k = map(int,raw_input().split())
    n = int(n) 
    k = int(k) 

    if(n % (k*k) == 0):
        print("NO")

    else:
        print("YES")