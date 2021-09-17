/* 
    digunakan jika ingin menggunakan lambda namun isi blok lebih kompleks

    anonymous function sebagai parameter
*/

fun main() {

    fun hello(nama: String, transformer: (String) -> String): String{
        val namaTransform = transformer(nama)
        return "Hello $namaTransform"
    }

    val upper = fun(nilai: String): String{
        if (nilai == ""){
            return "Ups"
        } else {
            return nilai.uppercase()
        }
    }

    println(hello("ronaldi", upper))
    println(hello("chandra", fun(nilai: String): String{
        return nilai.lowercase()
    }))
}