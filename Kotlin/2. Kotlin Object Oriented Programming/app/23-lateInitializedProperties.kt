package app

// hanya bisa digunakan dalam var (muteable)

class Television {
    lateinit var brand: String

    fun initTelevision(brand:String){
        this.brand = brand
    }
}

fun main() {
    val tipi = Television()
    // bisa juga tanpa initTelevision dengan tipi.brand = "Samsung"
    tipi.initTelevision("Samsul") // inisialisasi
    println(tipi.brand)
}