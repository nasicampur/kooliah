package app

import kotlin.test.todo

class ValidasiException(pesan: String): Throwable(pesan)

// membuat pesan error

fun validateAndSayHello(nama: String){
    if(nama.isBlank()){
        throw ValidasiException("namanya kosong nih!")
    } else {
        println("Hello $nama")
    }
}

fun main() {
    validateAndSayHello("Ronaldi")
//    validateAndSayHello("")
    println()
    try {       // cara agar program tidak berhenti saat eror
        validateAndSayHello("ronron")
        validateAndSayHello("")
    } catch (eror: ValidasiException){
        println("Terjadi error ${eror.message}")
    } catch (eror: Throwable){
        println("Terjadi error ${eror.message}")
    } finally { // dieksekusi baik kode sukses atau gagal
        println("Done")
    }
}