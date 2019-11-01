section .data
	msg: db "Hello, Holberton", 10, 0

section .text

global main
extern printf
main:
	push rax
	push rbx
	push rcx

	mov rdi, msg
	mov rsi, 1
	call printf

	pop rax
	pop rbx
	pop rcx

	ret
