package app

// ada banyak operator overloading
// baca slide untuk lebih lanjut


data class Fruit(val jumlah: Int){              // untuk mengetahui operator apa sajam tekan ctrl + spasi pada fungsi
    operator fun plus(fruit: Fruit): Fruit{       // wajib tambahkan operator dan nama fungsi harus plus
        return Fruit(this.jumlah + fruit.jumlah)
    }

    operator fun minus(fruit: Fruit): Fruit{        // wajib tambahkan operator dan nama fungsi harus minus
        return Fruit(this.jumlah - fruit.jumlah)
    }
}


fun main() {
    val buah = Fruit(20)
    val buah2 = Fruit(30)
    val buah3 = buah + buah2
    val buah4 = buah - buah2
    println(buah3)
    println(buah3 - Fruit(20))  // bisa langsung dikurangi
}