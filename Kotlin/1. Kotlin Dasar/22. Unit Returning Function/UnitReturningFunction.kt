/*
    sebetulnya tipe data function Unit tidak wajib  dituliskan
    karena jika tidak dituliskan, otomatis akan menjadi tipe data Unit
    kalo di C++ atau Java namanya 'void'
    yang artinya tidak mengembalikan nilai/data apa-apa
*/ 

fun printHalo(nama: String?) : Unit{
    if(nama == null){
        println("Hello gan")
    } else println("Hello $nama")
}

fun main() {
    printHalo("Ronaldi")
    printHalo(null)
}