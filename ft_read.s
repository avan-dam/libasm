          global     _ft_read
          extern     ___error
          section   .text
_ft_read:
        mov     rax, 0x2000003  ; read
        syscall                 ; call read
        mov     r9, rax         ; mov the return value of the read into r9
        jc      error           ; see if there is a carry flag if there is go to error
        ret                     ; if no error return from write then just return

error:
        push    rbp             ; alignment
        call    ___error        ; call the errno function 
        pop     rbp             ; alignment
        mov     [rax], r9       ; move the return of the write call into errno value address
        mov     rax, -1         ; change the return value to -1
        ret