def uniqueElements(A,B):
    return len(set(A + B))

def solve():
    N = int(input())
    S = input().split()

    sp_dict = {} #suffix -> prefix dict

    '''
    i/p : hell bell best test
    ell -> h , b
    est -> b , t
    '''

    for s in S:
        st = s[1 : ]

        if st in sp_dict:
            sp_dict[st].append(s[0])
        else:
            sp_dict[st] = [s[0]]

    suffix_keys = list(sp_dict.keys())

    total = 0

    for it1 in range(len(sp_dict)):
        for it2 in range(len(sp_dict)):
            sz = uniqueElements(sp_dict[suffix_keys[it1]], sp_dict[suffix_keys[it2]])
            total = total + (sz - len(sp_dict[suffix_keys[it1]]))*(sz - len(sp_dict[suffix_keys[it2]]))

    print(total)

def main():
    T = int(input())

    while(T):
        solve()
        T = T - 1

if __name__ == "__main__":
    main()
