
clc
ldm 4
xch r13

sumar:
ld r1
ral
xch r1
tcc 

add r0
xch r0

ld r13
dac
xch r13
jcn an sumar

ldm 0
xch r1
ldm 0
xch r13