package app

// untuk membuat library atau framework

import app.ValidasiException
import kotlin.reflect.full.findAnnotation
import kotlin.reflect.full.memberProperties

data class CreateProductRequest(
    @NotBlank val id: String,
    @NotBlank val nama: String,
    @NotBlank val harga: Long
)

data class CreateCategoryRequest(
    @NotBlank val id: String,
    @NotBlank val nama: String
)

@Target(AnnotationTarget.PROPERTY)
@Retention(AnnotationRetention.RUNTIME)
@MustBeDocumented
annotation class NotBlank

fun validateRequest(request: Any) {
    val clazz = request::class
    val properties = clazz.memberProperties
    for(property in properties){
        if (property.findAnnotation<NotBlank>() != null){
            val value = property.call(request)
            when(value){
                is String -> {
                    if ("" == value) {
                        throw ValidasiException("${property.name} is blank")
                    }
                }
            }
        }
    }
}

fun main() {
    val request = CreateProductRequest("1", "Indomie", 3_000)
    validateRequest(request)

    val request2 = CreateCategoryRequest("F", "Food")
    validateRequest(request2)
}