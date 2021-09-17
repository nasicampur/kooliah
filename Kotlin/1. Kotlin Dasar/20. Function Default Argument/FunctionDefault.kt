fun hello(namaAwal: String, namaAkhir: String? = null){ 
    // menambahkan data default kosong jadi tidak wajib diisi saat dipanggil
    if(namaAkhir = null){
        println("Hello $namaAwal")
    } else println("Hello $namaAwal $namaAkhir")   
}

fun main() {
    hello("Ronaldi") // tidak perlu menuliskan data null karena sudah ada default pada parameter
    hello("Ronaldi", "Chandra")
}