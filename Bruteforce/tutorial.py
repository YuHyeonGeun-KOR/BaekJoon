M = int(input())

number = 0 
checknum = 0

for i in range(1,M):
    checknum = 0
    strchecknum =str(i)
    length = len(strchecknum)    
    for j in range(length):
        checknum = checknum + int(strchecknum[j])
    checknum = checknum + i    
    if checknum == M:
        print(i)
        exit()

print(0)
    
