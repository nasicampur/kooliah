package app

class Company2(val nama:String){
    override fun hashCode(): Int {
        return nama.hashCode()
    }
}

fun main() {
    val company1 = Company2("Ronaldi")
    val company2 = Company2("idlanoR")
    println(company1.hashCode())
    println(company2.hashCode())
    println(company1.hashCode() == company2.hashCode())
}