fun main() {
    fun hello(nama: String, transformer: (String) -> String): String{
        val namaTransform = transformer(nama)
        return "Hello $namaTransform"
    }

    val lambdaUp = { value: String -> value.uppercase() }
    println(hello("ronaldi", lambdaUp))
    println(hello("ronaldi", {value: String -> value.lowercase()}))
    println()

    val hasil = hello("ronaldi"){ value: String -> // trailing lambda (syarat: parameternya harus di akhir)
        value.lowercase()
    }
    println(hasil)

}