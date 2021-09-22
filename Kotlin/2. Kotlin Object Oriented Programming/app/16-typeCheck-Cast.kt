package app

import app.HandPhone
import app.Laptop

fun printObjek(any: Any){
    if (any is Laptop){ // penggunaan casts di if else
        println("Laptop ${any.brand}")
    } else if (any is HandPhone){
        println("Handphone merk ${any.brand}")
    } else {
        println(any)
    }
}

fun printObjek2(any: Any){ // penggunaan casts pada when
    when(any){
        is Laptop -> println("Laptop ${any.brand}")
        is HandPhone -> println("Handphone merk ${any.brand}")
        else -> println(any)
    }
}

fun printString(any: Any) {
    val value = any as String // unsafe casts, menggunakan 'as'
    // as? akan menjadi null
    println(value)
}

fun printStringSafe(any: Any) {
    val value = any as? String // unsafe casts, menggunakan 'as'
    // as? akan menjadi null
    println(value)
}

fun main() {
    printObjek("Ronaldi")
    printObjek(1)
    printObjek(HandPhone("Redmi"))
    printObjek(Laptop("HP"))
    println()

    printObjek2("Ronaldi")
    printObjek2(1)
    printObjek2(HandPhone("Redmi"))
    printObjek2(Laptop("HP"))
    println()

    printString("Ronaldi")
    // printString(23) // error karena Integer ga bisa konversi ke String
    println()

    printStringSafe("Ronron")
    printStringSafe(21)
}