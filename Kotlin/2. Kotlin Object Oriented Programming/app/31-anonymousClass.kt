package app

import java.util.logging.XMLFormatter

interface Action {
    fun action()
}

fun jalanAction(action: Action){
    action.action()
}

fun main() {

    jalanAction(object: Action{
        override fun action() = println("aksi 1")
    })

    jalanAction(object: Action{
        override fun action() = println("aksi 2")
    })
}