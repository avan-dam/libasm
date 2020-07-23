          global     _ft_strlen
          section   .text
_ft_strlen:
        xor     rax, rax                  ; make sure return value starts at 0
loop:
        cmp    byte [rdi+rax], 0          ; see if the byte you are reading is the last byte
        je      done                      ; if it is the last byte go to done function and return
        inc     rax                       ; otherwise increase rax, which is both our return value and our counter
        jmp     loop                      ; continue looping (as not end of string yet)
done:
        ret
