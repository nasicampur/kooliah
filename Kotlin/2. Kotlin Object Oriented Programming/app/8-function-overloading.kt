package app

// membuat nama function yang sama, di class yang sama
// syaratnya tipe atau jumlah parameternya berbeda
// return value harus sama


class Man {
    var namaAwal:String = ""
    var namaTengah:String? = null
    var namaAkhir:String = ""

    fun sayHalo(nama: String){
        println("Halo $nama, nama saya $namaAwal")
    }

    fun sayHalo(nama: Int){     // parameter sama, tapi tipe data harus bedea
        println("Halo $nama, nama saya $namaAwal")
    }

    fun sayHalo(namaAwalParam:String, namaAkhirParam:String){
        println("Halo $namaAwalParam $namaAkhirParam, nama saya $namaAwal")
    }
}

fun main() {
    val ronaldi = Man()
    ronaldi.namaAwal = "Ronaldi"
    ronaldi.sayHalo("Eko")
    ronaldi.sayHalo("Joko", "Tingkir")
}