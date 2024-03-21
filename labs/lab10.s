.data               # start of data section
# put any global or static variables here

.section .rodata    # start of read-only data section
# constants here, such as strings
# modifying these during runtime causes a segmentation fault, so be cautious!
multString: .string "The mult answer is %d\n"


.text           # start of text /code
# everything inside .text is read-only, which includes your code!
.global main  # required, tells gcc where to begin execution

# === functions here ===

main:           # start of main() function
# preamble
pushq %rbp
movq %rsp, %rbp

# === code here ===
# a = 7, b = 5, c = a* b == 35
# set-up var a = 7

movq $7, %rax           # a = 7 in rax
# set-up var b = 5
movq $5, %rbx           # b = 5 in rbx
# mult
imulq %rbx              # rax(a) * rbx(b) --> rdx: rax

# printf("The mult answer is %d\n", c);
# 1. save any caller-saved registers
# none
# push on stack 
# move to another register
# 2. set-up the regs: rdi, rsi, ...

movq $multString, %rdi      
# 3. 0 in rax, using 0 floating point registers
# mov


# return
movq $0, %rax   # place return value in rax
leave           # undo preamble, clean up the stack
ret             # return
