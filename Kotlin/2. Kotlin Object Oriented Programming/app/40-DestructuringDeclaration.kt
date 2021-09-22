package app

data class Game(val nama: String, val harga: Int){  // tambahkan data di depan 'class'
//    operator fun component1(): String = nama
//    operator fun component2(): Int = harga
}

data class MinMax(val min: Int, val max: Int)

fun minmax(value1: Int, value2: Int) : MinMax {
    return when {
        value1 > value2 -> MinMax(value2, value1)
        else -> MinMax(value1, value2)
    }
}

fun main() {
    val game  = Game("gta", 3_000_000)
    val (nama, price) = game
    println(nama)
    println(price)
    println()

//    val result = minmax(10, 100)
//    val min = result.min
//    val max = result.max
    val (min, max) = minmax(1220,100)
//    val (min, _) = minmax(1220,100)           bisa juga pakai underscore jika tidak ingin digunakan
    println(min)
    println(max)

}