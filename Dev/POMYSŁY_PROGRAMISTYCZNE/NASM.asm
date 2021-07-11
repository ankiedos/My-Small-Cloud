%assign STDOUT 1
%assign STDIN 0
%assign SYS_WRITE 4
%assign SYS_EXIT 1
print_world:
    mov edx, len ; move length1 to reg edx
    mov ecx, msg ; move text1 to aux reg eax
    mov ebx, STDOUT ; stdout
    mov eax, SYS_WRITE ; sys_write
    int 0x80

;   eax = ebx = ecx = edx = 0
    ; xor eax, eax
    ; xor ebx, ebx
    ; xor ecx, ecx
    ; xor edx, edx
print_univ:
    mov edx, len2
    mov ecx, msg2
    mov ebx, STDOUT
    mov eax, SYS_WRITE
    ; int 0x80

    ; xor eax, eax
    ; xor ebx, ebx
    ; xor ecx, ecx
    ; xor edx, edx
    int 0x80 ; sys_exit
    ret ; return
section	.text
	global _start           ;must be declared for using gcc
_start:                     ;tell linker entry point
	call print_world        ; print "Hello, World\nHello, Universe!\n"
	call print_univ
	mov	eax, SYS_EXIT	    ;system call number (sys_exit)
	int	0x80                ;call kernel
section	.data

msg	db	'Hello, world!', 0xa  ;our dear string
; var db "Hello, Universe!", 0xa
msg2 db "Hello, Universe!", 0xa
; varlen equ $ - var
len	equ	$ - msg			;length of our dear string
len2 equ $ - msg2