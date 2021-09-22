package app

class Student3(val nama: String, val age: Int)

fun Student3?.sayHalo(nama:String){ // nullable
    if (this != null){
        println("Hello $nama, namaku ${this.nama}, umurku ${this.age}")
    }
}

val Student3.upperName: String
get() = this.nama.uppercase()


fun main() {
    val student = Student3("Ronaldi", 20)
    println(student.upperName)
}