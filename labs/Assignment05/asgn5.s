	.file	"asgn5.c"										# Indicates the source file name
	.text													# Start of the text (code) section
	.globl	myAddTwoNumbersFunction							# Makes myAddTwoNumbersFunction globally accessible
	.type	myAddTwoNumbersFunction, @function				# Declares myAddTwoNumbersFunction as a function type
myAddTwoNumbersFunction:									# Label marking the start of myAddTwoNumbersFunction
.LFB0:														# Indicates the begining of the function's local block
	.cfi_startproc											
	pushq	%rbp											# Pushes the base pointer on ot the stack
	.cfi_def_cfa_offset 16									# Adjusts the stack pointer
	.cfi_offset 6, -16										
	movq	%rsp, %rbp										# Sets the base pointer to the current stack pointer
	.cfi_def_cfa_register 6									
	movl	%edi, -4(%rbp)									# Moves the first argument (in %edi) to a memory location on the stack
	movl	%esi, -8(%rbp)									# Moves the second argument (in %esi) to a memory location on the stack
	movl	-4(%rbp), %edx									# Moves the first argument from the stack to the refister %edx
	movl	-8(%rbp), %eax									# Moves the second argument frmo the stack to register %eax
	addl	%edx, %eax										# Adds the value of %edx and %eax and stores the result in %eax
	popq	%rbp											# Restores the base pointer from the stack
	.cfi_def_cfa 7, 8										
	ret														# Returns from the function
	.cfi_endproc											# signals the end of the procedure
.LFE0:														# Indicates the end of the function's local block
	.size	myAddTwoNumbersFunction, .-myAddTwoNumbersFunction	# Specifies the size of the function
	.section	.rodata										# Declares the beginning of the read-only data section
.LC0:														# Local label for constant data
	.string	"The answer is %d\n"							# String constant for printf
	.text													# switch back to the code section
	.globl	main											# Declares the main function as global
	.type	main, @function									# Defines main as a function type
main:														# Start of the main function
.LFB1:														# Begining of the function's local block
	.cfi_startproc											
	pushq	%rbp											# Push the base pointer to the stack
	.cfi_def_cfa_offset 16									# Adjusts the stack pointer
	.cfi_offset 6, -16										
	movq	%rsp, %rbp										# Sets the base pointer to the current stack pointer
	.cfi_def_cfa_register 6									
	subq	$16, %rsp										# Allocates space on the stack for local variables
	movl	$10, -12(%rbp)									# Stores the value 10 in a memory location on the stack
	movl	$7, -8(%rbp)									# Stores the value 7 in a memory location on the stack
	movl	$0, -4(%rbp)									# Initializes a variable to 0 on the stack
	movl	-8(%rbp), %edx									# Moves the second argument from the stack to register %edx
	movl	-12(%rbp), %eax									# Moves the first argument to register %edi
	movl	%edx, %esi										# Moves the second argument to register %esi
	movl	%eax, %edi										# Moves the first argument to register %edi
	call	myAddTwoNumbersFunction							# Calls the function myAddTwoNumbersFunction
	movl	%eax, -4(%rbp)									# Stores the return value from myAddTwoNumbersFunction on the stack
	movl	-4(%rbp), %eax									# Moves the return value to register %eax
	movl	%eax, %esi										# Moves the return value to register %esi
	leaq	.LC0(%rip), %rdi								# Loads the address of the string into register %rdi
	movl	$0, %eax										# Clears register %eax
	call	printf@PLT										# Calls the printf function to print the string
	movl	$0, %eax										# Sets return value to 0
	leave													# Restores the stack frame and base pointer
	.cfi_def_cfa 7, 8										
	ret														# Exits the function, returning control to the caller
	.cfi_endproc											# signals the end of the procedure
.LFE1:														# Indicates the end of the function's lcoal block
	.size	main, .-main									# Specifies the size of the main function
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"		# Provies information about the compiler
	.section	.note.GNU-stack,"",@progbits				# Defines stack related information
