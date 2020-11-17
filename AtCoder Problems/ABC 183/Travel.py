from itertools import permutations

n,k = map(int, input().split())
t = []

for _ in range(n):
    t.append(list(map(int, input().split())))

rem = list(permutations(range(1,n))) #generate iterators

res = 0

for perm in rem:
    dist = 0
    perm = [0] + list(perm) + [0]

    for i in range(n):
        dist += t[perm[i]][perm[i+1]]
    
    if(dist == k):
        res += 1
    
print(res)
