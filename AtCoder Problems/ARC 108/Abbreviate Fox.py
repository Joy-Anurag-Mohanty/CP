N = int(input())
S = input()
     
T = ""
     
if(len(S) == 1 or len(S) == 2):
    print(len(S))
     
else:
    T = T + S[0:2]
    
    for i in range(2,len(S)):
        T = T + S[i]
     
        #print(T[-3:])
     
        if(T[-3:] == "fox"):
            T = T[:len(T) - 3]
     
    print(len(T))