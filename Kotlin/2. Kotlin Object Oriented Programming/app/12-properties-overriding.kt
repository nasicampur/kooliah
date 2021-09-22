package app

// menggunakan properties sama di class yang berbeda

open class Shape {          // class harus open
    open val corner: Int = -1
}

class Rectangle: Shape() {
    override val corner: Int = 4
}

class Triangle: Shape(){
    override val corner: Int = 5
}

fun main() {
    val shape = Shape()
    println(shape.corner)

    val shape2 = Rectangle()
    println(shape.corner)

    val shape3 = Triangle()
    println(shape.corner)
}