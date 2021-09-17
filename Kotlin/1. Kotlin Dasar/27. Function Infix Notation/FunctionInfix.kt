/* 
    mempermudah function menjadi bentuk infix
*/

infix fun String.menjadi(tipe: String): String{
    if(tipe == "kapital"){
        return this.uppercase()
    } else {
        return this.lowercase()
    }
}

fun main() {
    val hasil = "Ronaldi Chandra" menjadi "kapital"
    println(hasil)

    val hasil2 = "Ronaldi Chandra" menjadi "nonkapital"
    println(hasil2)
}