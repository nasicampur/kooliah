// berguna pada break, continue, return

fun loopBreak(){
    loopI@ for (i in 1..10){
        loopJ@ for (j in 1..10) {
            println("$i * $j = ${i * j}")
            if (j == 10) {
                break@loopI // break langsung ke labek loopI
            }
        }
    }
}


fun continueBreak(){
    loopI@ for (i in 1..10){
        loopJ@ for (j in 1..10) {
            if (j == 5) {
                continue@loopI // continue langsung ke labek loopI
            }
            println("$i * $j = ${i * j}")
        }
    }
}



fun main() {
    fun testLambda(nama: String, operasi: (String) -> Unit): Unit = operasi(nama)

    testLambda("Eko") testLabel@{
        if (it == ""){
            return@testLabel
        } else {
            println("Eko")
        }
    }
}