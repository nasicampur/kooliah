package app

/**
 * public = bisa diakses dari manapun
 * private = hanya bisa diakses di tempat deklarasinya
 * protected = hanya bisa diakses di tempat deklarasinya, dan juga keturunannya/inheritance
 * internal = hanya bisa diakses di module/project yang sama
 */


open class Guru(val nama: String) {
    internal fun ngajar(){
        println("ngajar")
    }

    open fun test(){
        println("Test")
    }
}

class SuperGuru(nama: String): Guru(nama){
    override fun test(){
        super.test()
    }
}

fun main() {
    val guru = Guru("Ronaldi")
    println(guru.nama)
    guru.ngajar()
    println()

    val guruSuper = SuperGuru("Ronaldi")
    guruSuper.test()
}