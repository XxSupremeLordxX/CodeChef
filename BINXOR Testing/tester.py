import random
print("1")
n = random.randint(0,100)
print(n)
a =[0,1]
s1 = [ a[random.randint(0,1)] for x in range(n)]
s2 = [ a[random.randint(0,1)] for x in range(n)]
print(*s1,sep='')
print(*s2,sep='')