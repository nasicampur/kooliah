package app

open class Karyawan(val namaSaya: String){
    open fun sayHalo(nama: String){
        println("Hello $nama, namaku ${this.namaSaya}")
    }
}

class Manajer(namaSaya: String) : Karyawan(namaSaya){
    final override fun sayHalo(nama: String) {  // agar tidak dapat override class di bawahnya, tambahkan 'final'
        println("Hello $nama, namaku Manajer ${this.namaSaya}")
    }
}
class VP(namaSaya: String): Karyawan(namaSaya) {
    // override fun sayHalo(nama: String) {
    override fun sayHalo(nama:String){
        println("Hello $nama, namaku VP ${this.namaSaya}")
    }
}

fun main() {
    val manager = Manajer("Ronaldi")
    manager.sayHalo("Budi")

    val karyawan = Karyawan("Ronaldi")
    karyawan.sayHalo("Joko")

    val vicePresident = VP("Ronaldi")
    vicePresident.sayHalo("Eko")
}