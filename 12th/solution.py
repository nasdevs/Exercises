N = int(input('Input A : '))
M = int(input('Input B : '))

for i in range(N*2+1):
    for j in range(M*2+1):
        if i%2 == 0: print('#', end='')
        else:
            if j%2 != 0: continue
            print('#', end=' ')

    print()
