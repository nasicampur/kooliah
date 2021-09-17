/* 
    gunanya adalah tidak perlu menuliskan return berulang pada setiap blok if
*/

fun main() {
    // Return IF
    fun sayHalo(nama: String = ""): String {
        return if(nama == ""){
            "Hello gan!"
        } else {
            "Hello $nama"
        }
    }

    println(sayHalo())
    println(sayHalo("Ronaldi"))

    fun sayNama(nama2: String = ""): String{
        return when(nama2){
            "" -> "Halo bro"
            else -> "Halo $nama"
        }
    }
    println(sayHalo())
    println(sayHalo("Niken"))
}