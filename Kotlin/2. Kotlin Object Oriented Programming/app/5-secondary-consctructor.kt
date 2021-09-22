package app

class Mobil3(paramMerk: String, paramNama: String, paramTahun: Int = 2020) {

    constructor(paramMerk: String, paramNama: String) : this(paramMerk, paramNama, 2020) {
        println("Secondary Constructor 1")
    }


    constructor(paramMerk: String): this(paramMerk, paramNama = "Avanza"){ // secondary constructor
        println("Secondary Constructor 2")
    }

    var merk: String = paramMerk
    var nama: String = paramNama
    var tahun: Int = paramTahun
}


fun main() {
    val avanza = Mobil3("Toyota")
    val almaz = Mobil3("Wuling", "Almaz")
    println(avanza.merk)
    println(avanza.nama)
    println(almaz.merk)
    println(almaz.nama)
}