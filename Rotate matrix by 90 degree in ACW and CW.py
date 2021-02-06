l = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]

for i in range(3):
    for j in range(3):
        print(l[i][j], end = " ")
    print()
print('***************************************')

for i in range(3):
    for j in range(i, 3):
        print(l[i][j], l[j][i])
        l[i][j], l[j][i] = l[j][i], l[i][j]

l.reverse()
        
for i in range(3):
    for j in range(3):
        print(l[i][j], end = " ")
    print()
print('***************************************')
   
   
l = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]

for j in range(3):
    for i in range(j, 3):
        print(l[i][j], l[j][i])
        l[i][j], l[j][i] = l[j][i], l[i][j]
        
for i in range(3):
    l[i].reverse()  
    
for i in range(3):
    for j in range(3):
        print(l[i][j], end = " ")
    print()