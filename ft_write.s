          global     _ft_write
          extern     ___error
          section   .text
_ft_write:
        mov     rax, 0x2000004 ; write
        syscall                 ; call write
        mov     r9, rax         ; mov the return value of the write into r9
        jc      error           ; see if there is a carry flag if there is go to error
        ret                     ; if no error return from write then just return

error:
        push    rbp             ; alignment
        call    ___error        ; call the errno function 
        pop     rbp
        mov     [rax], r9       ; move the return of the write call into errno value address
        mov     rax, -1         ; change the return value to -1
        ret