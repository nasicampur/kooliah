package app

class App2(val nama: String){
    companion object{                    // boleh dikasih nama, boleh tidak
        fun tooUpper2(nama: String): String{
            return nama.uppercase()
        }
    }
}

fun main() {
    println(App2.tooUpper2("Ronaldi")) // bisa juga App2.Companion.tooUpper2
}