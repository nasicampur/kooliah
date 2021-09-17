import id.ronaldichdr.belajar.util.sayHello
import id.ronaldichdr.belajar.util.* // dapat mengakses seluruh code dari kode pada package tersebut

fun main(args: Array<String>) {
    sayHello("Chandra")
    id.ronaldichdr.belajar.util.sayHello("Karuna") // package dalam function
}