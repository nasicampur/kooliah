fun main(){
    val namaMahasiswa: Array<String> = arrayOf("Heryanto", "Clairence", "Nathaneal", "Ronaldi") // jumlahnya bebas
    val angka: Array<Byte> = arrayOf(100, 90, 70) // wajib pake val
    val uang: Array<Int> = arrayOf(10_000,20_000) // data pada array fixed tidak bisa dikurang atau tambah

    val hery: String = namaMahasiswa[0]
    val rence: String = namaMahasiswa.get(1)
    namaMahasiswa.set(2, "Nathaneal FS")
    namaMahasiswa[3] = "Ronaldi Chandra K"
    println(namaMahasiswa[0])
    println(hery)
    println(rence)
    println(namaMahasiswa.get(2))
    println(namaMahasiswa[3])
    println()


    // cara null pada array
    val nama: Array<String?> = arrayOfNulls(4) // kasih tanda tanya pada akhir tipe data
    nama.set(0, "Ronaldi")
    nama.set(1, null)
    nama[2] = null
    println(nama[0])
    println(nama[1])
    println(nama[2])
}