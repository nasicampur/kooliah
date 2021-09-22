package app

class Boss(val namaBoss: String){
        inner class Employee(val nama: String){
            fun hi(){
                println("Hi, namaku $nama, nama boskuh $namaBoss")
            }
        }
}

fun main() {
    val boss = Boss("Ronaldi")
    val employee1 = boss.Employee("Budi")
    val employee2 = boss.Employee("Jono")

    val boss2 = Boss("Ronaldi Chandra")
    val employee3 = boss2.Employee("Niken")
    val employee4 = boss2.Employee("Siti")

    employee1.hi()
    employee2.hi()
    employee3.hi()
    employee4.hi()
}