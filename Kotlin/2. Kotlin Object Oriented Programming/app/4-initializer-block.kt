package app

class Mobil2(paramMerk: String, paramTahun: Int = 2020) {

    init {
        println("$paramMerk dibuat")       // contoh init, dieksekusi ketika constructor dipanggil
    }

    var merk: String = paramMerk
    var tahun: Int = paramTahun
}


fun main(){
    val avanza = Mobil2("Toyota", 2015)
    val almaz = Mobil2("Wuling", 2019)

    println(avanza.merk)
    println(avanza.tahun)
    println(almaz.merk)
    println(almaz.tahun)
}