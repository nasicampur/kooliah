fun main() {
    val nilaiUjian = 100
    val nilaiKehadiran = 79
    val nilaiEkstra = 80

    val ujian = nilaiUjian > 75
    val hadir = nilaiKehadiran > 80
    val ekstra = nilaiEkstra > 75

    val apakahLulus = ujian && hadir && ekstra // operasi AND
    // ((ujian && hadir) && ekstra)
    println(apakahLulus)
}