package app

object Utilitas{
    var nama = "Utilitas aq" // disarankan menggunakan vak

    fun tooUpper(value: String):String{
        return value.uppercase()
    }
}

class App(val nama: String){
    object Util{                    // nama object dengan class outer boleh sama
        fun tooUpper2(nama: String): String{
            return nama.uppercase()
        }
    }
}



fun main() {
    Utilitas.nama = "Mengubah"
    println(Utilitas.tooUpper("Ronaldi"))
    a()
    b()
    println()
    App.Util.tooUpper2("Ronron")
}


fun a(){
    println(Utilitas.nama)
}

fun b(){
    println(Utilitas.nama)
}