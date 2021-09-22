package app

class Murid(var namaAwal: String ="", var namaAkhir: String=""){

    fun sayHello(namaAwal: String, namaAkhir: String){
        // this untuk memanggil properties di class dengan nama yg sama
        println("Halo $namaAwal $namaAkhir, nama gw ${this.namaAwal}")
    }

}

fun main() {
    val ronaldi = Murid()
    ronaldi.namaAwal = "Ronaldi"
    ronaldi.sayHello("Eko", "Kurniawan")
}
