def subarrayBitwiseOR(A):
	
	res = set()
	
	pre = {0}
	
	for x in A:
		
		pre = {x|y for y in pre}|{x}
		
		res |= pre
		
	return len(res)

T = int(input())

for i in range(0,T):

	N = int(input())

	l = list(map(int,input().strip().split()))[:N]

	#print(l)
	
	curr = subarrayBitwiseOR(l)
	
	#print(curr)
	
	total = int((N*(N+1))/2)
	
	#print(total)
	
	if(curr == total):
		print("YES")
	else:
		print("NO")
	