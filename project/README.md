# LTAlang 💻

LTAlang is a simple programming language featuring: addition.

## Usage

```bash
git clone https://github.com/jjant/LTAlang.git && cd LTAlang
bison -d grammar.y
lex lexer.l
gcc -c grammar.tab.c structures.c code_generator/main.c lex.yy.c -s
gcc grammar.tab.o lex.yy.o structures.o main.o -o runner.out
```

## Example program

```
2 + 123
```


## Code generator
Así lo podes probar:
```bash
cd project/code_generator
gcc main.c -pedantic -std=c99 -Wall -Wextra -Wfloat-equal -Wshadow -Wpointer-arith -Wstrict-prototypes -Wstrict-overflow=5 -Waggregate-return -Wcast-qual -Wswitch-default -Wswitch-enum -Wunreachable-code -Wno-unused-parameter -Wno-unused-function -Wno-unused-variable -Werror -pedantic-errors -Wmissing-prototypes && ./a.out
```
