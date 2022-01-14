'''
@name : exercise 5th
@author : Nasrullah
@url github : https://github.com/nasdevs
@url repository : https://github.com/nasdevs/exercises-and-solution
'''

class Mahasiswa():
    def __init__(self, nim, nama, angkatan, prodi):
        self.nim = nim
        self.nama = nama
        self.angkatan = angkatan
        self.prodi = prodi
    
    def kartu_mahasiswa(self):
        print('Nama     : ', self.nama)
        print('Nim      : ', self.nim)
        print('Angkatan : ', self.angkatan)
        print('Prodi    : ', self.prodi)
        
    def selamat(self):
        print(f'Selamat datang {self.nama} di kampus UMS')

nas = Mahasiswa(123456789, 'Nasrullah', 2021, 'Teknik Informatika')
nit = Mahasiswa(987654321, 'Nit...', 2021, 'Pendidikan TI')
anonim = Mahasiswa(564738291, 'Anonim', 2019, 'Ternak Lele')

print('-----------------------------------')
nas.kartu_mahasiswa()
nas.selamat()

print('-----------------------------------')
nit.kartu_mahasiswa()
nit.selamat()

print('-----------------------------------')
anonim.kartu_mahasiswa()
anonim.selamat()

print('-----------------------------------')
