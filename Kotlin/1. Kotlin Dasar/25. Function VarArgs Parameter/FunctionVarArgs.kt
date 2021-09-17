/*
    variable arguments
    lebih mudah dibandingkan menggunakan array dalam function parameter
*/

fun hitungTotal(vararg nilai: Int): Int{ // vararg harus paling akhir
    var total = 0
    for (i in nilai) {
        total += i
    }
    return total;
}

fun main() {
    val hasil = hitungTotal(10, 10)
    println(hasil)
}