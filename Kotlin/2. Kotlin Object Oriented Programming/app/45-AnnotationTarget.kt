package app

// cocok ketika memakai framework java

@Target(
    AnnotationTarget.PROPERTY_GETTER,
    AnnotationTarget.FIELD,
    AnnotationTarget.VALUE_PARAMETER
)
@Retention(AnnotationRetention.RUNTIME)
@MustBeDocumented
annotation class Beta()

// cek lewat bytecode

class ContohTarget(
    @field:Beta val namaAwal: String,
    @get:Beta val namaTengah: String,
    @param:Beta val namaAkhir: String
)
