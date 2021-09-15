fun main() {
    // for array
    val namaMahasiswa = arrayOf("Ronaldi", "idlanoR", "Koceng")
    var total = 0

    for(nama in namaMahasiswa){ // mengeluarkan semua data pada array
        println(nama) // variable nama adalah immutable, tidak bisa diubah
        total++
    }
    println("Total perulangan = $total")
    println()

    // for range
    for(nilai in 0..3){
        println(nilai)
    }

    for(nilai2 in 4 downTo 0){
        println(nilai2)
    }
    println()

    val ukuranArray = namaMahasiswa.size-1
    for (i in 0..ukuranArray) {
        println("Array $i = ${namaMahasiswa[i]}") // bisa juga ${namaMahasiswa.get(i)}
    }

} 