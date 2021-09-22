package app

data class Friend(val nama: String)

fun sayHalo(friend: Friend?) {
//    if (friend != null) println("Hello ${friend.nama}")         // null checking

//    val nama = friend?.nama ?: ""       // alternatif null checking, elvis operator
//    println("Hello gan $nama")
    val notNullFriend = friend!!
    val nama = notNullFriend.nama        // akan error jika data null
    println("Halo mas $nama")

}

fun main() {
    sayHalo(Friend("Ronaldi"))
    sayHalo(null)
}