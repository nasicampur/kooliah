package app

abstract class Binatang {
    abstract val nama: String   // tidak perlu inisialisasi seperti = "Kucing"
    abstract fun contohFunction(): Unit // tidak perlu punya body, harus kosong
}

class Kucing: Binatang() {
    override val nama: String = "Kucing"
    override fun contohFunction() {
        println("ada kucing!")
    }
}

class Anjing: Binatang() {
    override val nama: String = "Anjing"
    override fun contohFunction() {
        println("ada anjing!")
    }
}

fun main() {
    val cat = Kucing()
    println(cat.nama)
    cat.contohFunction()
}