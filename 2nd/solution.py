'''
@name : exercise 2nd
@author : Nasrullah
@url github : https://github.com/nasdevs
@url repository : https://github.com/nasdevs/exercises-and-solution
limit = int(input('Limit : '))
'''

for i in range(1, limit+1):
    for j in range(0, i):
        # ternary conditional operator
        print('X' if (i+j)%2 != 0 else 'O', end=' ')
    # new line
    print('')
