package app

class Alamat {
    var jalan: String = ""
    var kota: String = ""
    var negara: String = "Indonesia"

    // secondary constructor tanpa primary constructor
    // asalkan tidak ada primary constructor
    constructor(paramJalan1: String, paramKota1: String){
        jalan = paramJalan1
        kota = paramKota1
    }

    constructor(paramNegara1: String){  // secondary constructor tanpa primary constructor
        negara = paramNegara1
    }

    constructor(paramJalan1: String, paramKota1: String, paramNegara1: String): this(paramJalan1, paramKota1){
        negara = paramNegara1
    }
}

fun main() {
    val alamat1 = Alamat("Jalan 1", "Tangerang")
    val alamat2 = Alamat("Jalan2", "Jakarta", "Indonesia")
    val alamat3 = Alamat("Belanda")

    println(alamat1.kota)
}