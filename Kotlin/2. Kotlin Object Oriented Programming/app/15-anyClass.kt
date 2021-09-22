package app

class Laptop(val brand: String)
open class HandPhone(val brand: String)
class Smartphone(brand: String, val OS: String) : HandPhone(brand)

fun main() {
    val smartPhone = Smartphone("Redmi", "Android")
    val laptop = Laptop("HP")
}