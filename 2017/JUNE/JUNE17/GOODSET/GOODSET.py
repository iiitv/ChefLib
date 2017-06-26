# code written by Monal
import math
 
def main():
	tc = int(input())
	primes = [1,2,5,9,13]
	appended = False
	for i in range(14,501):
		appended = False
		for j in primes:
			for k in primes:
				if k != j:
					if i == j + k:
						appended = True
						break
		if not appended:
			primes.append(i)
		if len(primes) == 100:
			break
	for _ in range(tc):
		n = int(input())
		tmp = [str(primes[x]) for x in range(n)]
 
		print(' '.join(tmp))
 
if __name__ == '__main__':
	main()
