package app

sealed class Operation (val nama: String)
class Plus: Operation ("Plus")
class Minus: Operation("Minus gan")
class Modulo: Operation("Modulo")

fun operation(value1: Int, value2: Int, operation: Operation): Int{
    return when(operation){
        is Plus -> value1 + value2
        is Minus -> value1 - value2
        is Modulo -> value1 % value2
    }
}

fun main() {
    println(operation(20,20, Plus()))
    println(operation(50,20, Minus()))
    println(operation(20,20, Modulo()))
}