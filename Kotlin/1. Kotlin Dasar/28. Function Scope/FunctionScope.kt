/* 
    membatasi function agar tidak bisa dipakai di function lain
*/

fun satu(){
    // menjadi error, karena helloNama() hanya ada di function `2`.` Tipe Data Number`.main
    // helloNama()
}

fun main() {
    fun helloNama(nama: String){
        println("Hello $nama")
    }
    helloNama("Ronaldi")
}