.model small
.stack 100h

.data
; Declare variables to store numbers and operator
num1 DWORD ?
num2 DWORD ?
operator BYTE ?

.code
_start:

; Get first number
mov ah, 1 ; Interrupt for character input
int 21h    ; Call interrupt
mov [num1], ax ; Store input in num1

; Get operator
mov ah, 1 ; Interrupt for character input
int 21h    ; Call interrupt
mov [operator], al ; Store input in operator

; Get second number
mov ah, 1 ; Interrupt for character input
int 21h    ; Call interrupt
mov [num2], ax ; Store input in num2

; Perform calculation based on operator
cmp [operator], '+'  ; Compare with '+'
je add_numbers        ; Jump to addition if equal
cmp [operator], '-'  ; Compare with '-'
jne invalid_operator ; Jump to error if not equal

; Addition function
add_numbers:
add [num1], [num2] ; Add num2 to num1
jmp print_result    ; Jump to print result

; Invalid operator function
invalid_operator:
; Handle error (e.g., display message)

; Print result function
print_result:
; Code to print the result stored in num1 (e.g., call interrupt for output)

; Exit program
mov ah, 4ch
int 21h
