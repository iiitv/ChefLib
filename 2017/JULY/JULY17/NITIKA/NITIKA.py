#made by DipanshKhandelwal
#this is a python3 file


def main():
	N = int(input())
	for _ in range(N):
		string = input()
		my_list = string.split()
		x= True
		for i in range(len(my_list)-1,-1,-1):
			if x:
				temp = my_list[i].lower()
				temp2 = my_list[i][0].upper()
				temp = temp[1:]
				final = temp2 + temp
				x = False
			else :
				final =  my_list[i][0].upper()+". "+final
		print (final)


if __name__ == '__main__':
	main()
	
