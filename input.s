.text
.global main
main:
  pushq %rbp
  movq %rsp, %rbp
  movl $8, -4(%rbp)
  movl $2, -8(%rbp)
  movl -4(%rbp), %eax
  movl -8(%rbp), %ebx
  imull %ebx, %eax
  movl %eax, -12(%rbp)
  movl -12(%rbp), %eax
  popq %rbp
  ret
