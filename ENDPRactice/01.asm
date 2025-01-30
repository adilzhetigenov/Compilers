global main
extern read_unsigned, write_unsigned
extern read_boolean, write_boolean
segment .bss

segment .text
main:
mov eax, 1
push eax
mov eax, 3
pop ebx
cmp eax, ebx
sete al
cmp al, 1
jne near label0
mov eax, 1
jmp label2
label0:
mov eax, 1
push eax
mov eax, 3
pop ebx
cmp eax, ebx
setb al
cmp al, 1
jne near label1
mov eax, 2
jmp label2
label1:
mov eax, 0
label2:
push eax
call write_unsigned
add esp,4
mov eax, 1
push eax
mov eax, 1
pop ebx
cmp eax, ebx
sete al
cmp al, 1
jne near label3
mov eax, 1
jmp label5
label3:
mov eax, 1
push eax
mov eax, 1
pop ebx
cmp eax, ebx
setb al
cmp al, 1
jne near label4
mov eax, 2
jmp label5
label4:
mov eax, 0
label5:
push eax
call write_unsigned
add esp,4
mov eax, 3
push eax
mov eax, 1
pop ebx
cmp eax, ebx
sete al
cmp al, 1
jne near label6
mov eax, 1
jmp label8
label6:
mov eax, 3
push eax
mov eax, 1
pop ebx
cmp eax, ebx
setb al
cmp al, 1
jne near label7
mov eax, 2
jmp label8
label7:
mov eax, 0
label8:
push eax
call write_unsigned
add esp,4
nop
ret
