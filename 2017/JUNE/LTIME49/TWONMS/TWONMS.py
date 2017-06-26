# code written by Monal
def main():
	tc = int(input())
	for _ in range(tc):
		a,b,t = map(int, input().split())
		if t % 2 == 0:
			print(max(a,b) // min(a,b))
		else:
			print(max(2*a,b) // min(2*a,b))
 
if __name__ == '__main__':
	main()
