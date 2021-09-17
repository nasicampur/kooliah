// mempermudah jika parameter banyak, tidak perlu mengisi data parameter berurutan

fun biodata(namaAwal: String, namaAkhir: String, umur: Int, pekerjaan: String){
    println("Halo namaku $namaAwal $namaAkhir, umurku $umur dan pekerjaanku $pekerjaan")
}

fun main() {
    biodata("Ronaldi", "Karuna", 20, "Android App Developer")
    biodata(namaAkhir="Karuna", umur=20, namaAwal="Ronaldi", pekerjaan="Android App Developer")
}