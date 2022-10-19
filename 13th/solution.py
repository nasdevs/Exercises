N = int(input())
x = 1

a = []
for i in range(0, N):
    b = []
    x = x + i
    y = x
    for j in range(i+1, N+1):
        b.append(str(y))
        y = y * 2 + j

    a.append(b)

length = len(' '.join(a[0])) + 1

for i, c in zip(a, range(len(a))):
    length_i = len(' '.join(i)) + 1
    space = length - length_i - c

    print(f'{" ".join(i)}{" "*space} {"* "*(c+1)}{" "*space}{" ".join(i[::-1])}')


for i, c in zip(a[::-1], range(len(a)-1, -1, -1)):
    length_i = len(' '.join(i)) + 1
    space = length - length_i - c

    print(f'{" ".join(i)}{" "*space} {"* "*(c+1)}{" "*space}{" ".join(i[::-1])}')
