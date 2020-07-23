          global     _ft_strdup
          extern     _malloc
          extern     _ft_strlen
          section   .text
_ft_strdup:
        push    rdi             ; store argument
        call    _ft_strlen      ; find out size you need to malloc for
        mov     rdi, rax        ; move the return value of strlen to allow malloc to work with that
        push    rbp             ; alignment
        push    r10             ; alignment
        call    _malloc         ; malloc for the correct amount
        pop     r10             ; alignment
        pop     rbp             ; alignment
        pop     rdi             ; find the original string back
        cmp     rax, 0          ; protect malloc
        je      done            ; GO TO ERRROR
        mov     rdx, 0          ; use rdx as counter
loop:
        mov     r9b, byte [rdi+rdx]       ; temp 1 byte register to store
        mov     byte [rax+rdx], r9b       ; not at end of string so copy string from rsi to rdi
        cmp     byte [rdi+rdx], 0         ; see if first argument is at the end of string
        je      done                      ; if it is jump to end of string
        inc     rdx                       ; increase counter
        jmp     loop                      ; again
done:
        ret
