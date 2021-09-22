package app

@Target(AnnotationTarget.CLASS)
@Retention(AnnotationRetention.RUNTIME)
@MustBeDocumented

annotation class Fancy (val author: String){
}

@Fancy(author = "ronaldi")
class MyAplikasi(val nama: String, val version: Int){
    fun info(): String = "Aplikasi $nama-$version"
}

fun main() {
    val myAplikasi = MyAplikasi("Kotlin", 1)
    println(myAplikasi.info())
}