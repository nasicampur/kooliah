package app

class Manusia {
    var namaAwal:String = ""
    var namaTengah:String? = null
    var namaAkhir:String = ""

    fun sayHalo(nama:String){
        println("Halo $nama, nama saya $namaAwal")
    }

    fun lari(){
        println("lari")
    }

    fun namaLengkap(): String{
        return "$namaAwal $namaTengah $namaAkhir"
    }
}

fun main() {
    val ronaldi = Manusia()
    ronaldi.namaAwal = "Ronaldi"
    ronaldi.namaTengah = "Chandra"
    ronaldi.namaAkhir = "Karuna"

    ronaldi.sayHalo("Tes")

    ronaldi.lari()

    val namaLengkap = ronaldi.namaLengkap()
    println(namaLengkap)
}
