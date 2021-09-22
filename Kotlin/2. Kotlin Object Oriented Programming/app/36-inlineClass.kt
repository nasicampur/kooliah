package app

// membuat program lebih ringan
// syaratnya yaitu hanya boleh satu properties

inline class Token(val value: String) {
    fun tooUpper(): String = value.uppercase()
}

fun main() {
    val token = Token("ini token")
    println(token.value)
    println(token.tooUpper())
}