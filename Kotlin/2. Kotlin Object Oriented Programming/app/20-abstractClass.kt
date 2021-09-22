package app

abstract class Lokasi(val nama: String)

class Kota(nama: String) : Lokasi(nama)

class Negara(nama: String) : Lokasi(nama)

fun main() {
    val kota = Kota("Tangerang")
    val negara = Negara("Indonesia")
    println(kota.nama)
    println(negara.nama)
}