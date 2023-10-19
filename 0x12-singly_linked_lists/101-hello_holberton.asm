section .data
	hello db "Hello, Holberton",10 ; The message and newline character

section .text
	global main

main:
	mov rdi, hello	;	Load the address of the message into rdi
	call printf	;	Call the printf function

	; Exit the program
	mov rax, 60	;	syscall number for exit
	xor rdi, rdi	;	Exit status: 0
	syscall
