package app

// import data.Orang // import class dulu

class Orang {
    var namaAwal: String = ""
    var namaTengah: String? = null
    var namaAkhir: String = ""
}

fun main() {
    val ronaldi = Orang()   //membuat object
    ronaldi.namaAwal = "Ronaldi"    // mengubah data dalam class, karena var
    ronaldi.namaTengah = "Chandra"
    ronaldi.namaAkhir = "Karuna"

    println(ronaldi.namaAwal) // memanggil output
    println(ronaldi.namaTengah)
    println(ronaldi.namaAkhir)
}

