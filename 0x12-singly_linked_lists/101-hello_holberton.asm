   SECTION .data
message: db  "Hello, Holberton", 0
fmt: db "%s", 10
new_line: db "\n", 0
fmt2: db "%c", 13, 0

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

  mov esi, new_line ;64-bit Abi passing order
  mov edi, fmt2
  mov eax, 0   ; printf is varargs so eax counts
  ; call printf
  call printf

  ret
