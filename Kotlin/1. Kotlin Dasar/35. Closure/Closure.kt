fun main() {
    var counter: Int = 0

    val lambdaIncrement: () -> Unit = {
        println("Increment")
        counter++
    }

    val anonymousIncrement = fun(){
        println("Anonymous")
        counter++
    }

    fun functionIncrement(){
        println("Function")
        counter++
    }

    lambdaIncrement()
    anonymousIncrement()
    functionIncrement()
    println(counter)
}