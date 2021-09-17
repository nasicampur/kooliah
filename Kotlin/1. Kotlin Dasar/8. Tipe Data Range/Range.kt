fun main() {
    // range berguna untuk looping
    val range = 200 downTo 1 step 5 // 200 sampai 1 kelipatan 5
    val range2 = 1..1000; // 1 sampai 1000
    val range3 = 1000 downTo 1 // 1000 sampai 1
    
    println(range.count()) // jumlah data range
    println(range.contains(100)) 
    println(range.contains(2000)) // false karena variable 'range' hanya sampai 1000
    println(range.first)
    println(range.last)
    println(range.step) // kelipatannya
}