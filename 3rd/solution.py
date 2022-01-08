'''
@name : exercise 3rd
@author : Nasrullah
@url github : https://github.com/nasdevs
@url repository : https://github.com/nasdevs/exercises-and-solution
'''

accounts = [
    {"username": "user", "password": "pass"},
    {"username": "admin", "password": "pass"}
]

def login(username, password):
    for i in range(len(accounts)):
        if username == accounts[i]["username"] and password == accounts[i]["password"]:
            return True
    else: return False

i = 0
loop = 'y'
while (loop.lower() == 'y'):

    # login
    while True:
        logUsername = str(input('Input username      : '))
        logPassword = str(input('Input password      : '))
        loggedIn = login(logUsername, logPassword)

        if loggedIn == True:
            break
        else: 
            i+=1
            print('Wrong username or password.')

        if i == 3:
            print('login failed.')
            print('Too many login attempts. Please try again later.')
            exit()

    print('Login Succes')
    print('Selamat Datang di Menu Entri Data Gaji Pegawai')
    print('==============================================')
    
    #input
    noPegawai = int(input('Nomor Pegawai       : '))
    namaPegawai = str(input('Nama Pegawai        : '))
    gol = str(input('Gol                 : '))
    lemburInput = int(input('Lembur (Jam)        : '))

    # proses
    # gapok proses
    if gol.lower() == 'a': gapok = 1000000
    elif gol.lower() == 'b': gapok = 1250000
    elif gol.lower() == 'c': gapok = 1500000
    else: gapok : 0

    # lembur proses
    if lemburInput == 1: lembur = 50000
    elif lemburInput == 2: lembur = 100000
    else: lembur = 150000 

    # pajak proses
    pajak = 0.1 * gapok

    # gaji bersih proses
    gaji = (gapok+lembur) - pajak

    # output
    print('\nInformasi Entri Edata Gaji Pegawai')
    print('==================================')
    print('No Pegawai          :', noPegawai)
    print('Nama Pegawai        :', namaPegawai)
    print('Gol                 :', gol)
    print('Gapok               : Rp.', gapok)
    print('Lembur (jam)        : Rp.', lembur)
    print('Pot Pajak           : Rp.', int(pajak))
    print('Gaji Bersih         : Rp.', int(gaji))
    
    loop = str(input('Masih ada data [y/n] : '))
