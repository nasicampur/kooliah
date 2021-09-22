package app

// import data.Mobil

class Mobil (paramMerk: String, paramTahun: Int = 2020) { // ini constructor (primary constructor)
    var merk: String = paramMerk
    var tahun: Int = paramTahun
}

fun main(){
    val avanza = Mobil("Toyota", 2015)
    val almaz = Mobil("Wuling", 2019)

    println(avanza.merk)
    println(avanza.tahun)
    println(almaz.merk)
    println(almaz.tahun)
}