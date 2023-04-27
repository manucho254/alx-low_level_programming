SECTION .data
   message: db  "Hello, Holberton", 0
   fmt: db "%s", 10, 0

SECTION .text
	extern printf
	global main

main:
_start:
  mov esi, message ;64-bit Abi passing order
  mov edi, fmt
  mov eax, 0   ; printf is varargs so eax counts

  ; call printf
  call printf
  mov ebx, 0      ; normal-exit code
  mov eax, 1      ; process-termination service
