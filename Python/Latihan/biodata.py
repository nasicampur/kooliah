from os import system, name
def clear(): 
    if name == 'nt': 
        _ = system('cls') 
  
    else: 
        _ = system('clear') 

nama_depan = input("Masukkan nama depan: ")
nama_belakang = input("Masukkan nama belakang: ")
umur = input("Umur: ")
alamat = input("Alamat: ")
clear()
print("Nama anda:", nama_depan + " " + nama_belakang)
print("Umur anda:", umur)
print("Alamat anda:", alamat)
