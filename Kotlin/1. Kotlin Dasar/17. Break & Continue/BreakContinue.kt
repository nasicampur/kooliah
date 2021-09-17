fun main() {
    // break digunakan untuk menghentikan seluruh perulangan (for, while, do while)
    var i = 0
    while (true) { // while(true) adalah perulangan yang tidak pernah berhenti atau infinite loop
        println("Test $i")
        i++
        if(i > 1){
            break // menghentikan perulangan pada suatu kondisi menggunakan if
        }
    }

    // continue menghentikan suatu perulangan, namum melanjutkan perulangan selanjutnya (for, while, do while)
    for (i in 1..1000) {
        if (i % 2 == 0){
            continue // bilangan modulus 2 di-skip, sehingga output hanya mengeluarkan angka ganjil
        }
        println(i)
    }

}