	.file	"asgn5.c"										# Indicates the source file name
	.text													# Start of the text (code) section
	.globl	myAddTwoNumbersFunction							# Makes myAddTwoNumbersFunction globally accessible
	.type	myAddTwoNumbersFunction, @function				# Declares myAddTwoNumbersFunction as a function type
myAddTwoNumbersFunction:									# Label marking the start of myAddTwoNumbersFunction
.LFB0:														# Indicates the begining of the function's local block
	.cfi_startproc											# Signals the start of the procedure			
	pushq	%rbp											# Pushes the base pointer on ot the stack
	.cfi_def_cfa_offset 16									# Adjusts the stack pointer
	.cfi_offset 6, -16										# Defines the offset for %rbp in the Call Frame Information
	movq	%rsp, %rbp										# Sets the base pointer to the current stack pointer
	.cfi_def_cfa_register 6									# Defines %rbp as the current frame pointer
	movl	%edi, -4(%rbp)									# Moves the first argument (in %edi) to a memory location on the stack
	movl	%esi, -8(%rbp)									# Moves the second argument (in %esi) to a memory location on the stack
	movl	-4(%rbp), %edx									# Moves the first argument from the stack to the refister %edx
	movl	-8(%rbp), %eax									# Moves the second argument frmo the stack to register %eax
	addl	%edx, %eax										# Adds the value of %edx and %eax and stores the result in %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	myAddTwoNumbersFunction, .-myAddTwoNumbersFunction
	.section	.rodata
.LC0:
	.string	"The answer is %d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$10, -12(%rbp)
	movl	$7, -8(%rbp)
	movl	$0, -4(%rbp)
	movl	-8(%rbp), %edx
	movl	-12(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	myAddTwoNumbersFunction
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
