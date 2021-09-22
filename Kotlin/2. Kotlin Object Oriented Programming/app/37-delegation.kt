package app

interface Base {
    fun sayHalo(nama: String)
    fun sayGudbay(nama: String)
}

class MyBase: Base {
    override fun sayHalo(nama: String) {
        println("Hello $nama")
    }

    override fun sayGudbay(nama: String) {
        println("Babay $nama")
    }
}

class MyBaseDelegate(val base: Base): Base by base  { // contoh delegation, semuanya di-delegasi
    override fun sayGudbay(nama: String) {      // contoh pengecualian delegation, tidak mengambil dari Base
        println("bubuy $nama")                  // mengubah isi sayGudbay
    }
}

fun main() {
    val base = MyBase()
    base.sayHalo("Ronaldi")
    val baseDelegate = MyBaseDelegate(base)
    baseDelegate.sayHalo("Nanno")
    baseDelegate.sayGudbay("Nanno")
}