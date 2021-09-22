package app

// hanya bisa dibuat di primary constructor
// tidak bisa dibuat di secondary constructor

class User(var username: String, var password: String){

}

fun main() {
    val user1 = User("ronaldichdr", "asdadas")

    user1.username="budi"  // bisa diubah

    println(user1.username)
}