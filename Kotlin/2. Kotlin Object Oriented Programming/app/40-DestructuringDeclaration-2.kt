package app

data class Loginn (var username: String, var password: String) {
}

fun login(login: Loginn,callback: (Loginn)->Boolean): Boolean{
    return callback(login)
}

fun main() {
    val login = Loginn("ronaldi", "rahasia")
//    login(login){ login1 ->
//        login.username == "ronaldi" && login.password == "rahasia"
//    }
    val sukses = login(login){ (username, password) ->
        username == "ronaldi" && password == "rahasia"      //alternatif
    }

    println(sukses)
}