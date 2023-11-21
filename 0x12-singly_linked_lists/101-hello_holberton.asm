global main
extern printf
main:
	push rbp
	mov rdi, format
	xor eax, eax
	call printf
	pop rbp
	mov eax, 0
	ret
format: db 'Hello, Holberton', 0
