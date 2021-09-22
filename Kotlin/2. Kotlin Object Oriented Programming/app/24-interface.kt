package app

// contoh 1

interface Interaksi {
    val namaKu: String
    fun sayhalo(nama: String): Unit
}

class Human(override val namaKu: String): Interaksi {
    override fun sayhalo(nama: String){
        println("Halo $nama, nama gw adalah ${this.namaKu}")
    }
}

// contoh 2 concrete interface

interface Interaksi2 {
    val namaKu: String
    fun sayhalo(nama: String) {
        println("Halo $nama, nama gw adalah ${this.namaKu}")
    }
}

interface Go: Interaksi2 {  // inheritance interface dengan interface
    fun go() {
        println("goooo")
    }
}

interface MoveA {
    fun move() = println("Move A")
}

interface MoveB {
    fun move() = println("Move B")
}

class Human2(override val namaKu: String): Go, MoveA, MoveB { // interface bisa diturunkan lebih satu, tambahkan setelah Go
    override fun move() {
        println("moveeeee")
        super<MoveA>.move()
        super<MoveB>.move()
    }
}


fun main() {
    val human = Human("Ronaldi")
    human.sayhalo("Eko")

    val human2 = Human2("Ronaldi")
    human2.sayhalo("Eko")
    human2.go()
    human2.move()
}