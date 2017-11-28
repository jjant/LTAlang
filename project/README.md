# LTAlang 💻

LTAlang is a simple programming language featuring: addition.

## Usage

```bash
git clone https://github.com/jjant/LTAlang.git && cd LTAlang
bison -d grammar.y
lex lexer.l
gcc -c grammar.tab.c structures.c lex.yy.c -s
gcc grammar.tab.o lex.yy.o structures.o -o runner.out
```

## Example program

```
2 + 123
```
