package app

// lazy yaitu contoh objek delegazy
// selanjutnya ada di materi generic programming

class Account {
    val nama: String by lazy {
        println("Nama is called")
        "Ronaldi"
    }
}

fun main() {
    val account = Account()
    val account2 = Account() // properties tidak dipanggil, maka "Nama is called" tidak akan keluar sebelum properties diambil
    println(account.nama)
    println(account.nama)
    println(account.nama)
}