          global     _ft_strcpy
          section   .text
_ft_strcpy:
        xor     rax, rax                  ; make sure return value starts at 0
        mov     rdx, 0                    ; use rdx as counter
loop:
        mov     r9b, byte [rsi+rdx]       ; temp 1 byte register to store
        mov     byte [rdi+rdx], r9b       ; not at end of string so copy string from rsi to rdi
        cmp     byte [rsi+rdx], 0         ;see if first argument is at the end of string
        je      done                      ; if it is jump to end of string
        inc     rdx                       ; increase counter
        jmp     loop                      ; again

done:
        mov     rdi, rsi                  ; copy last byte
        mov     rax, rdi                  ; make the return value the copied string
        ret                               ; return
