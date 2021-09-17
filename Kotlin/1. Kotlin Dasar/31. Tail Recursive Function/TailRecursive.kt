/* 
    gunanya adalah untuk mengatasi stack overflow error atau terlalu banyak tumpukan recursive
    mengubah menjadi looping biasa
*/

fun main() {
    tailrec fun display(nilai: Int){
        println("Recursive $nilai")
        if(nilai > 0){
            display(nilai - 1) // syaratnya function tanpa embel2 lagi
        }
    }
    
    tailrec fun faktorialLoop(nilai: Int, total: Int = 1): Int{
        return when(nilai){
            1 -> total
            else -> faktorialLoop(nilai - 1, total * nilai)
        }
    }

    println(faktorialLoop(10))
}