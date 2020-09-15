x = input()

if(x[0]=='A'):
    cnt=10
elif(x[0]=='B'):
    cnt=11
elif(x[0]=='C'):
    cnt=12
elif(x[0]=='D'):
    cnt=13
elif(x[0]=='E'):
    cnt=14
elif(x[0]=='F'):
    cnt=15
elif(x[0]=='G'):
    cnt=16
elif(x[0]=='H'):
    cnt=17
elif(x[0]=='I'):
    cnt=34
elif(x[0]=='J'):
    cnt=18
elif(x[0]=='K'):
    cnt=19
elif(x[0]=='L'):
    cnt=20
elif(x[0]=='M'):
    cnt=21
elif(x[0]=='N'):
    cnt=22
elif(x[0]=='O'):
    cnt=35
elif(x[0]=='P'):
    cnt=23
elif(x[0]=='Q'):
    cnt=24
elif(x[0]=='R'):
    cnt=25
elif(x[0]=='S'):
    cnt=26
elif(x[0]=='T'):
    cnt=27
elif(x[0]=='U'):
    cnt=28
elif(x[0]=='V'):
    cnt=29
elif(x[0]=='W'):
    cnt=32
elif(x[0]=='X'):
    cnt=30
elif(x[0]=='Y'):
    cnt=31
elif(x[0]=='Z'):
    cnt=33

cnt = int(cnt/10) + (cnt%10)*9

sum = 0
for i in range(1,10):
    sum += (int(x[i])*(9-i))

sum += int(x[9])

sum2 = sum + cnt

if(sum2%10==0):
    print("real")
else:
    print("fake")
