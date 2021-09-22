package app

class Catatan(judul: String){
    var judul: String = judul
    get(){
        println("Ini fungsi getter")
        return field
    }
    set(nilai) {
        println("ini fungsi setter")
       if(nilai.isNotBlank()){
           field = nilai
       } else {
           println("Judul invalid!")
       }
    }
}

class CatatanBesar(val judul: String) {
    val judulBesar: String
        get() = judul.uppercase()
}

fun main() {
    val ctt = Catatan("Belajar Kotlin")
    println(ctt.judul)
    println()

    ctt.judul = ""
    println()

    println(ctt.judul)
    println()

    val cttBesar = CatatanBesar("Belajar Android")
    println(cttBesar.judul)
    println(cttBesar.judulBesar)
}