fun sayHello(namaAwal: String, namaAkhir: String?, umur: Int){ 
    // parameter adalah val
    // variable parameter dtidak bisa diubah datanya di sini seperti namaAwal = "Awewe"
    if(namaAkhir == null){          
        println("Hello $namaAwal, umur gw $umur")       
    } else println("Hello $namaAwal $namaAkhir, umur gw $umur")
}

fun main() {
    sayHello("Ronaldi", "Chandra", 20)
    sayHello("Adit", null, 20) // null harus tetap diisi, tidak boleh langsung skip ke umur
}