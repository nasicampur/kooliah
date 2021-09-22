package app

class User1(var username: String, var password: String){
    override fun toString(): String {
        return "User with username = $username"
    }
}

fun main() {
    val user = User1("ronaldi", "rahasia")
    println(user)
}