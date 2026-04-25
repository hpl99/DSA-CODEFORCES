n = input()
n1 = input()
sum = str(int(n) + int(n1))

x = int(n.replace('0', ''))
y = int(n1.replace('0', ''))
z = int(sum.replace('0', ''))   

# print(x, y, z)
if(x + y == z):
    print('YES')
else:
    print('NO')