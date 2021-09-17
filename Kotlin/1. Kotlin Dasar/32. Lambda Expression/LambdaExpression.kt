// memasukkan function ke dalam variable
// lambda tidak return

fun toUpper(nilai: String): String = nilai.uppercase() // single expression

fun main() {
    val contohLambda: (String, String) -> String = { awal: String, akhir: String -> // lambda
        val hasil = "$awal $akhir"
        hasil                   // wajib ada return seperti ini
    }
    val hasil = contohLambda("Ronaldi", "Chandra")
    println(hasil)
    println()


    // jika hanya satu parameter, gunakan it
    val contohLambda2: (String) -> String = {
        "Hello $it"
    }
    println(contohLambda2("Ronaldi"))
    println()


    // method references atau function references
    val contohLambda3: (String) -> String = ::toUpper // memanggil function ke lambda expression
    println(contohLambda3("chandra"))
}