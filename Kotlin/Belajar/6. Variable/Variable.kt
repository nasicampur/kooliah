const val APP = "Belajar Kotlin"  // const merupakan variable global, wajib menyertakan val
const val VERSION = "0.0.1" // taruh di luar fungsi main dll, biasanya uppercase 

fun main(){
    var contohMuteable: String = "Ronaldi" // datanya dapat berubah-ubah
    val contohImmutable = "Chandra" // datanya tidak dapat berubah-ubah, tidak perlu menulis tipe data

    var namaAwal = "Ronaldi"
    namaAwal = "idlanoR" // data pada var dapat diubah
    println(namaAwal)
    println()

    val namaAkhir = "Chandra"
    val umur = 20
    println(namaAkhir)
    println(umur)
    println()

    // nullable (null tidak direkomendasikan di kotlin)
    var contohNull: String? = null // cara null pada kotlin, disertai tanda tanya di akhir tipe data
    contohNull = "ronron"
    println(contohNull)
    println(contohNull?.length) // harus disertai tanda tanya jika ada ekspresi

    println()
    println("$APP : $VERSION") // mencetak output dari constant variable 

}