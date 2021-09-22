package app

fun main() {
    val student = Student("Ronaldi", 20)
    println(student.nama)
    println(student.age)
    println()

    val hasil: String = student.let {           // let function
        println(it.nama)
        println(it.age)
        println()
        "Namaku ${it.nama}, umur ${it.age}"
    }
    println(hasil)
    println()

    val hasil2: String = student.run {              // run function sama kayak let
        "Namaku ${this.nama}, umur ${this.age}"
    }

    println(hasil2)
    println()

    val hasil3: Student = Student("Ronaldi", 20).apply {    // apply function
        "Namaku ${this.nama}, umur ${this.age}"
    }
    println(hasil3)
    println()

    val hasil4: Student = student.also {           // also function
        "Namaku ${it.nama}, umur ${it.age}"
    }
    println(hasil4)
    println()

    val hasil5: String = with(student) {              // with function
        "Namaku ${this.nama}, umur ${this.age}"
    }

    println(hasil5)
}