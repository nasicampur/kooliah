package app

class App3(val nama: String){
    companion object{                    // boleh dikasih nama, boleh tidak
        fun tooUpper2(nama: String): String{
            return nama.uppercase()
        }
    }
}

typealias Aplikasi = App3   // typealias untuk class
typealias Apl = Aplikasi

typealias cnthLambda = () -> String     // contoh lambda untuk pengganti lambda

fun sayHalo(supplier: cnthLambda){
    println("Halo ${supplier()}")
}

fun main() {
    val aplikasi = Aplikasi("Kotlin")
    val apl = Apl("Ronron")
    sayHalo { "Ronaldi" }
}