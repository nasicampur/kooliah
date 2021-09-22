package app

// otomatis dibuatkan toString, hashCode, equals, copy

data class Produk(val nama: String, val harga: Int, val kategori: String)

fun main() {
    val produk = Produk("Babi panggang", 100_000, "food")
    val produk2 = produk.copy(nama = "Babi guling") // mengubah isi objek
    println(produk)
    println(produk2)
}