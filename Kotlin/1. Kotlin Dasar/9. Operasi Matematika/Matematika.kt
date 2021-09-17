fun main() {
    // bisa digunakan pada tipe data short, int, long, byte

    val hasil1 = 10.0 / 3.0  // gunakan koma agar terdetek sebagai pecahan (double)
    println(hasil1)

    val hasil2 = 10 + 10 / 2
    println(hasil2)
    println()

    // augmented assignments
    var total: Int = 0
    val barang1 = 100
    val barang2 = 100
    val barang3 = 100
    total += barang1
    total += barang2
    total += barang3
    println(total)
    println()

    // unary operator
    total++  // total = total + 1
    total-- // total = total - 1
    total++
    println(total)
    
    val gaming = true
    println(!gaming) // kebalikan dari boolean, not

}