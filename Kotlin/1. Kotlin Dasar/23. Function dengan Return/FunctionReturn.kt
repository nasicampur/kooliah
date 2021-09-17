/*
    function yang mengembalikan data
*/

fun penjumlahan(a: Int, b: Int): Int{
    val total = a + b   // function return digunakan untuk variable dalam function
    return total    // wajib untuk menuliskan return
}

fun bagi(a: Int, b: Int): Int{
    if (b == 0){
        return 0 // jika b = 0 maka mengembalikan data 0 karena angka dibagi dengan 0 hasilnya 0
    } else {
        val hasil = a / b
        return hasil
    } 
}

fun main() {
    println(penjumlahan(10, 50))

    val jumlah = penjumlahan(10, 10)
    println("Hasil dari 10 + 10 adalah $jumlah")

    val jumlah2 = penjumlahan(11, 11)
    println(jumlah2)

    println(bagi(100,10))
    println(bagi(100,0))
}