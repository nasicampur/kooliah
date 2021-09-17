fun String.hello(): String = "Hello $this"

fun String.sebut(): Unit = println("$this")

fun main() {
    val nama = "Ronaldi"
    println(nama.hello())
    nama.sebut()
    "Chandra".sebut()
}