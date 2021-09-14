fun main(){
    var namaAwal: String = "Ronaldi"
    var namaAkhir: String = "Karuna "
    var namaLengkap: String = "Ronaldi Chandra Karuna"
    var alamat: String = """ 
        Perumahan GM
        Kelurahan Sekian
        Kecamatan Sekian
        Kota Tangerang
    """ // petik dua sebanyak 3 kali untuk kalimat lebih 3 baris
    println(namaAwal)
    println(namaAkhir)
    println(namaLengkap)
    println(alamat)

    // string trim margin
    var alamat1: String = """ 
        |Perumahan GM
        |Kelurahan Sekian
        |Kecamatan Sekian
        |Kota Tangerang
    """.trimMargin()
    println(alamat1)
    println()

    var alamat2: String = """ 
        ?Perumahan GM
        ?Kelurahan Sekian
        ?Kecamatan Sekian
        ?Kota Tangerang
    """.trimMargin("?")
    println(alamat2)
    println()

    // menggabungkan string
    var namaAwal1: String = "Ronaldi"
    var namaAkhir1: String = "Karuna "
    var namaLengkap2: String = namaAwal1 + " " + namaAkhir1
    var namaLengkap3: String = "$namaAwal1 $namaAkhir1"
    var deskripsi: String = "total char dari $namaLengkap3 = ${namaLengkap3.length}"
    println(namaLengkap2)
    println(namaLengkap3)
    println(deskripsi)
}