clc
ldm 0
xch r0
ld r1

more_bits:
rar
jcn c0 skip_inc
clc
inc r0
skip_inc:
jcn an more_bits