t=input()

while(t>0):
	a=raw_input()
	b=raw_input()
	
	na=len(a)
	nb=len(b)
	
	lpa=[]
	lpb=[]
	for i in range(26):
		lpa.append(0)
		lpb.append(0)
	k2=ord('a')
	for i in range(na):
		lpa[ord(a[i])-k2]=lpa[ord(a[i])-k2]+1
	for i in range(nb):
		lpb[ord(b[i])-k2]=lpb[ord(b[i])-k2]+1
	flag=0
	c1=0
	c2=1
	for i in range(26):
		if(lpa[i]>=2)and(lpb[i]==0):
			flag=1
		if(lpa[i]!=0)and(lpb[i]==0):
			c1=1
	if(c1==1):
		for i in range(26):
			if(lpb[i]!=0)and(lpa[i]==0):
				c2=0
	if(flag==1)or((c1==1)and(c2==1)):
		print "A"
	else:
		print "B"
	t=t-1
	
