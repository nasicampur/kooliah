package app

class Company(val nama:String){
    override fun equals(lain: Any?): Boolean {
        return when(lain){
            is Company -> lain.nama == this.nama
            else -> false
        }
    }
}

fun main() {
    val company1 = Company("Ronaldi")
    val company2 = Company("Ronaldi")
    println(company1 == company2) // true
    println(company1 == company1) // true
    println(company2 == company2) // true
}