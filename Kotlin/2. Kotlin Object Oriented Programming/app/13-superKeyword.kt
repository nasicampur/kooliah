package app

open class Shape1 {          // class harus open
    open val corner: Int = -1
    open fun printNama(){
        println("This is shape")
    }
}

open class Segitiga: Shape(){
    override val corner: Int = 5
}

class Kotak: Shape1() {
    override val corner: Int = 4
        val parentCorner: Int = super.corner
    override fun printNama(){
        println("This is Segitiga")
        super.printNama()
    }
}


fun main() {
    val kotak = Kotak()
    println("Corner ${kotak.corner}")
    println("Parent Corner ${kotak.parentCorner}")
    println()
    kotak.printNama()
}