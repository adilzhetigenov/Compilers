global main
extern read_unsigned, write_unsigned
extern read_boolean, write_boolean
segment .bss
label0: resb 1
label1: resb 1

segment .text
main:
mov al, 1
mov [label0], al
mov al, 0
mov [label1], al
xor eax, eax
mov al, [label0]
push eax
mov al, [label1]
push ax
mov al, [label0]
pop bx
and al, bl
pop ebx
cmp eax, ebx
sete al
not al
push eax
call write_boolean
add esp,4
xor eax, eax
mov al, 0
push eax
mov al, 1
pop ebx
cmp eax, ebx
sete al
not al
push eax
call write_boolean
add esp,4
xor eax, eax
mov al, 1
push eax
mov al, 0
pop ebx
cmp eax, ebx
sete al
not al
push eax
call write_boolean
add esp,4
xor eax, eax
mov al, 0
push eax
mov al, 0
pop ebx
cmp eax, ebx
sete al
not al
push eax
call write_boolean
add esp,4
xor eax, eax
mov al, 1
push eax
mov al, 1
pop ebx
cmp eax, ebx
sete al
not al
push eax
call write_boolean
add esp,4
nop
ret
