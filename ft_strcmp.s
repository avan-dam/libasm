          global     _ft_strcmp
          section   .text
_ft_strcmp:
        xor     rax, rax                  ; make sure return value starts at 0
        mov     rdx, 0                    ; max sure rdx, register using for my counter is 0
loop:
        cmp     byte [rdi+rdx], 0         ; see if first argument is at the end of string
        je      done                      ; if it is jump to done
        mov     cl, byte[rdi+rdx]         ; store byte from first argument in cl
        cmp     cl, byte[rsi+rdx]         ; compare the same byte number of second argument
        jne     done                      ; if they are not the same then jump to done
        inc     rdx                       ; otherwise increase rdx to increase the index i am checking
        jmp     loop                      ; and loop again
done:
        mov     cl, byte[rdi+rdx]         ; store byte (index we got to in loop) from first argument in cl
        sub     cl, byte[rsi+rdx]         ; find the difference between this byte in first argument to second one
        movsx   rax, cl                   ; store the difference between values in rax (our return)
        ret
