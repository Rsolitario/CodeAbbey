clc     ; clear Carry

ld r3   ; load r3 to acc
ral     ; *2 it (highest bit sent to Carry)
xch r3  ; put back to r3
        ; do not clear carry here!
ld r2   ; proceed with r2 and so on
ral     ; ...
xch r2

ld r1
ral
xch r1

ld r0
ral
xch r0