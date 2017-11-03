# LTAlang 💻

LTAlang is a simple programming language featuring: addition.

## Usage

```bash
git clone https://github.com/jjant/LTAlang.git && cd LTAlang
bison -d final-grammar.y
mv final-grammar.tab.h y.tab.h
lex lexer.l
gcc lex.yy.c -o olex
```

## Example program

```
2 + 123
```
