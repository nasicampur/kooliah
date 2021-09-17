// menambah performa
// gunakan dalam lambda
// disarankan digunakan pada looping yang besar

inline fun hello(name: () -> String): String { // inline function
    return "Hello ${name()}"
}

inline fun hello(
    firstName: () -> String,
    noinline lastname: () -> String, // no inline function
    ): String {
    return "Hello ${name()}"
}

fun main() {
    println(hello{"Ronaldi"}, {"Chandra"})
}