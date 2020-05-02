l = list(map(int,input('Enter the list elements as spaced string: ').split()))
l.sort()
print("Sorted list:")
for i in l:
    print(i,end=" ")