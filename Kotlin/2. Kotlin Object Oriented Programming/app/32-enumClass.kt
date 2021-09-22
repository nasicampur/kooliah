package app

enum class Gender {
    PRIA,
    WANITA;
}

enum class Gender2(val deskripsi: String) {
    PRIA("PRIA"),
    WANITA("WANITA");

    fun showDeskripsi(){
        println(deskripsi)
    }
}

fun main() {
    val man = Gender.PRIA
    val woman = Gender.WANITA
    val allGenders: Array<Gender> = Gender.values()

    val manFromString = Gender.valueOf("PRIA")
    val womanFromString = Gender.valueOf("WANITA")

    println(man)
    println(woman)
    println(allGenders.toList())
    println()

    val man2 = Gender2.PRIA
    val woman2 = Gender2.WANITA
    man2.showDeskripsi()
    woman2.showDeskripsi()
}