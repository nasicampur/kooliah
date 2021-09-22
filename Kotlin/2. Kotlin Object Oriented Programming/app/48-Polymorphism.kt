package app

// perubahan bentuk suatu objek ke objek yang lain

fun main() {
    var employee: Employee = Employee("Ronaldi")
    employee.sayHalo("But")

    employee = Manager("Ron")
    employee.sayHalo("Budi")

    employee = VicePresident("Ron")
    employee.sayHalo("Budi")
}