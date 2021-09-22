package app

import kotlin.properties.Delegates

class Account2 (deskripsi: String = ""){
    val nama: String by lazy {
        println("Nama is called")
        "Ronaldi"
    }

    var deskripsi: String by Delegates.observable(deskripsi){
        property, oldValue, newValue ->  println("${property.name} is changed to $oldValue to $newValue")
    }
}

fun main() {
    val account = Account2()
    account.deskripsi = "Contoh"
    account.deskripsi = "Uwu"
    account.deskripsi = "Srot"
}