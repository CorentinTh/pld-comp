.text
.global main
main:
  pushq %rbp
  movq %rsp, %rbp
  movl $8, %eax
  imull $8, %eax
  movl %eax, -4(%rbp)
  movl -4(%rbp), %eax
  popq %rbp
  ret
