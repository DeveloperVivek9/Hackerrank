# Enter your code here. Read input from STDIN. Print output to STDOUT
import itertools 
n=input()
n=(int)(n)
s=input()
s=s.split(" ")
sum=0
for i in range(0,n):
    s[i]=(int)(s[i])
    sum+=s[i]
mean=round(sum/n,1)
s.sort()
frequency = {}
for item in s:
   if item in frequency:
      frequency[item] += 1
   else:
      frequency[item] = 1
#N=5
#print(dict(itertools.islice(frequency.items(), N))) 
#print(frequency)
frequency={k: v for k, v in sorted(frequency.items(), key=lambda item: item[1],reverse=True)}
#print(dict(itertools.islice(frequency.items(), N))) 
mode=list(frequency.keys())[0]
print(mean)
if(n%2==0):
    print((s[(int)(n/2)]+s[(int)((n/2)-1)])/2)
else:
    print(s[(int)(n/2-1)])
print(mode)