package app

class Student(val nama: String, val age: Int)
class Student2(val nama: String, val age: Int)

fun Student.sayHalo(nama:String){
    println("Hello $nama, namaku ${this.nama}, umurku ${this.age}")
}

fun Student2?.sayHalo(nama:String){ // nullable
    if (this != null){
        println("Hello $nama, namaku ${this.nama}, umurku ${this.age}")
    }
}

fun main() {
    val student = Student("Ronaldi", 20)
    student.sayHalo("Budi")

    val student2 = Student2("Ronaldi", 20)
    student.sayHalo("")
}