package app

// pewarisan
// apa yg dimiliki parent, akan dimiliki child
// default class adalah final
// child hanya memiliki 1 parent
// 1 parent bisa memiliki banyak child

open class Employee(val namaSaya: String){  // contoh parent
    fun sayHalo(nama: String){
        println("Hello $nama, namaku ${this.namaSaya}")
    }
}

final class Manager(namaSaya: String) : Employee(namaSaya) // contoh child
class VicePresident(namaSaya: String): Employee(namaSaya) // primary constructor harus sama

fun main() {
    val manager = Manager("Ronaldi")
    manager.sayHalo("Budi")
}