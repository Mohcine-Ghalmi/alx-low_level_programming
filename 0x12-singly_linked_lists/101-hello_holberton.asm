	section   .text
	global main
main:
	mov       rax, 1
	mov       rdi, 1
	mov       rsi, msg
	mov       rdx, 17
	syscall
	mov       rax, 60
	xor       rdi, rdi
	syscall

	section   .data
msg:	db        "Hello, Holberton", 10
