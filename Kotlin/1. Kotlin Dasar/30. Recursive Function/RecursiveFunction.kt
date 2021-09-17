/* 
    memanggil function pada function diri sendiri
*/

fun main() {
    fun faktorialLoop(nilai: Int): Int{
        return when(nilai){
            1 -> 1
            else -> nilai * faktorialLoop(nilai - 1)
        }
    }
    println(faktorialLoop(10))
}