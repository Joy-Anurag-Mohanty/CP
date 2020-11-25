import math
     
def isPerfectSquare(x):
    sr = math.sqrt(x)
     
    return ((sr - math.floor(sr)) == 0)
     
S,P = map(int, input().split())
     
D = S*S - 4*1*P
     
#print(D);
     
if(D >= 0):
        
    x = (S + math.sqrt(D)) / (2)
    y = (S - math.sqrt(D)) / (2)
     
    #print(x)
    #print(y)
     
    if(x > 0 and y > 0):
        if(x - math.floor(x) == 0 and y - math.floor(y) == 0):
            print("Yes")
        else:
            print("No")
    else:
        print("No")
     
else:
    print("No")