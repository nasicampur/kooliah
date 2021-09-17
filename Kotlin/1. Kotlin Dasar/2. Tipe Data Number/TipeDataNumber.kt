package `2`.` Tipe Data Number`

fun main(){
    // tipe data bilangan bulat
    var umur: Byte = 20
    var tinggi: Int = 172
    var jarak: Short = 2000
    var dataLong: Long = 1000000000L // harus ditambahkan L agar terdeteksi sebagai tipe data Long
    println(umur)
    println(tinggi)
    println(jarak)
    println(dataLong)
    println()

    // tipe data float
    var pecahan: Float = 10.99F // harus ditambahkan F agar terdeteksi sebagai tipe data float
    var pecahanDouble: Double = 10.102312
    println(pecahan)
    println(pecahanDouble)

    // tipe data literal
    var decimal: Int = 100
    var hexadecimal: Int = 0xFFAB // harus diawali dengan 0x agar terdeteksi sebagai literal hexadecimal
    var binary: Int = 0b0010010101 // harus diawali dengan 0b agar terdeteksi sebagai literal biner
    println()
    println(decimal)
    println(hexadecimal)
    println(binary)

    // underscore dalam integer (hanya untuk pemisah, tidak muncul di output)
    var uang: Long = 1_000_000_000_000L
    println()
    println(uang)


    // konversi bilangan
    var angka: Float = 200F
    var byte: Byte = angka.toByte()
    var int: Int = angka.toInt()
    var short: Short = angka.toShort()
    var long: Long = angka.toLong()
    var float: Float = angka.toFloat()
    var double: Double = angka.toDouble()
    println()
    println(byte)
    println(int)
    println(short)
    println(long)
    println(float)
    println(double)
}