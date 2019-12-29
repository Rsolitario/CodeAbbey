clc     ;borrar carry
ld r3   ;cargar en el acumulador registro r3
add r3  ;duplicar registro r3
xch r3  ;escribir en el registro r3
tcc     ;transferncia de carry y borrado al acumulador
xch r15 ;llevo carry r15

ld r2     ;duplico
add r2
xch r2

tcc        ;tmp
xch r14

ld r15     ;suma carry
add r2
xch r2

tcc           ;sumar carry despues de la suma del carry anterior
add r14
xch r15
ld r13
xch r14

ld r1     ;duplico
add r1
xch r1

tcc        ;tmp
xch r14

ld r15     ;suma carry
add r1
xch r1

tcc           ;sumar carry despues de la suma del carry anterior
add r14
xch r15
ld r13
xch r14


ld r0     ;duplico
add r0
xch r0

tcc        ;tmp
xch r14

ld r15     ;suma carry
add r0
xch r0

tcc           ;sumar carry despues de la suma del carry anterior
add r14
xch r15
ld r13
xch r14

ld 14
xch 15