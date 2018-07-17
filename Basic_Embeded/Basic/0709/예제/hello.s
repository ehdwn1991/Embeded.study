	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 13
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi0:
	.cfi_def_cfa_offset 16
Lcfi1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi2:
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	leaq	L_.str.1(%rip), %rdi
	leaq	L_.str(%rip), %rax
	movl	$0, -4(%rbp)
	movl	$1, -8(%rbp)
	movq	%rax, -24(%rbp)
	movl	L_main.asd(%rip), %ecx
	movl	%ecx, -30(%rbp)
	movw	L_main.asd+4(%rip), %dx
	movw	%dx, -26(%rbp)
	movb	$0, %al
	callq	_printf
	xorl	%ecx, %ecx
	movl	%eax, -36(%rbp)         ## 4-byte Spill
	movl	%ecx, %eax
	addq	$48, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__DATA,__data
	.globl	_a                      ## @a
	.p2align	2
_a:
	.long	1                       ## 0x1

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"hello"

L_main.asd:                             ## @main.asd
	.asciz	"hello"

	.section	__DATA,__data
	.p2align	2               ## @main.s_a
_main.s_a:
	.long	123                     ## 0x7b

	.section	__TEXT,__cstring,cstring_literals
L_.str.1:                               ## @.str.1
	.asciz	"hi\n"

	.comm	_b,4,2                  ## @b
	.comm	_c,40,4                 ## @c

.subsections_via_symbols
