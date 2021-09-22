package app

open class Pelanggan(val nama: String, val tipe: String, val balance: Long){
    constructor(nama: String, tipe: String) : this(nama, tipe, 0)
    constructor(nama: String) : this(nama, "Standar")
}

class PremiumCustomer : Pelanggan{
    constructor(nama: String): super(nama, "Premium")
    constructor(nama: String, balance: Long): super(nama, "Premium", balance)
}

class ExecutiveCustomer(nama: String, balance: Long): Pelanggan(nama, "Executive", balance){
    constructor(nama: String) : this(nama,0)
}

fun main() {
    val premiumCustomer = PremiumCustomer("Ronaldi")
    println(premiumCustomer.nama)

    val executiveCustomer = ExecutiveCustomer("Ronaldi", 100000000000000)
    println(executiveCustomer.nama)
    println(executiveCustomer.balance)

}