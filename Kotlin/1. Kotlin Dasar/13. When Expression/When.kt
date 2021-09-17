fun main() {
    val nilaiUjian = 'D'
    when (nilaiUjian){
        'A' -> {
             println("Sangat baik")
        }
        'B' -> println("Baik")
        'C' -> println("Lumayan")
        else -> println("Wadidaw")
    }

    when(nilaiUjian){
        'A', 'B', 'C' -> {
            println("Selamat anda lulus")
        }
        else -> println("Maaf, Anda tidak lulus")
    }
    println("Anda mendapatkan nilai $nilaiUjian")
    println()


    // in dalam when expression (patokannya apakah data tersebut ada dalam array)
    val nilaiLulus = arrayOf('A', 'B', 'C')
    when(nilaiUjian){
        in nilaiLulus -> println("Lulus")
        !in nilaiLulus -> println("Tidak lulus") // bisa juga menggunakan else
    }
    println()

    // is dalam when expression (mengecek tipe data dari suatu variable)
    val nama = "ronaldi"
    when(nama){
        is String -> println("Variable nama adalah strng")
        !is String -> println("Variable nama bukan strng")
    }

    // when sebagai pengganti if else
    val nilaiUjian2 = 98
    when {
        nilaiUjian2 > 75 -> println("Mantap")
        nilaiUjian2 > 60 -> println("Mayan lah")
        else -> println("Wadidaw gaming")
    }
}   