from sys import stdin, stdout

t = int(stdin.readline())
for _ in range(t):
    n = int(stdin.readline())
    used = [False for i in range(n)]
    v = -1
    for i in range(n):
        l = [int(x) - 1 for x in stdin.readline().split()][1:]
        for j in l:
            if not used[j]:
                used[j] = True
                break
        else:
            v = i
    if v == -1:
        stdout.write("OPTIMAL\n")
    else:
        u = used.index(False)
        stdout.write("IMPROVE\n" + str(v + 1) + " " + str(u + 1) + "\n")