import math

x=input()
t=int(x)
t2=t
answer2=[]
answer=[]


for i in range(2,int(math.sqrt(t2))+1):
    cnt=0
    if(t2==1): break
    while t%i==0:
        cnt+=1
        t/=i
    answer2.append(i)
    answer.append(cnt)


if t!=1:
    answer2.append(t)
    answer.append(1)


n=len(answer)
flag=False;

for i in range(n):
    if(answer[i]!=0):
        if(flag): print(" * ",end='')
        flag=True
        if(answer[i]!=1):
            print("%d^%d" % (answer2[i],answer[i]), end='')
        else:
            print("%d" % (answer2[i]) , end='')
