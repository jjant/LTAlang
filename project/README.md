# LTAlang 💻

LTAlang is a simple programming language featuring

## Build & Run
To build and run
```bash
git clone https://github.com/jjant/LTAlang.git && cd LTAlang
make all
./compiler input.lta
```
or
```bash
cat input.lta | ./compiler
```

## Optimizations
To compile the code with optimizations run the following line to build your code

```bash
./compiler input.lta --optimize
```
or
```bash
cat input.lta | ./compiler --optimize
```

## Project organization
The project is divided in several folders and files:

* Folder `code_generator`: Contains the C code for the compiler and the AST generator. The file  `main.c` traverses the tree generating the Ecmascript code; The file `structures.c` generates the AST from the LTA language token list. The file `nodes.h` defines the node used in the tree.
* Folder `grammar`: Contains the code for YACC and LEXX. Here we defined the grammar and the tokenization.
* Folder `programs`: Contains a series of valid LTA program samples.
* `compiler.sh`: Runs the compiler when the compiler is available

## Features
These are some of the features that we included in the LTA language

* C-like operators
* Weak typing (but with primitive types `Number`, `String`, `Boolean`, `Array` and `Function`)
* Cycles with `loop`
* Conditionals with `if`
* Lamdas (anonymous functions) with `|x| => { ... }`
* Sync and Async functions with `=>` and `|>` operators
* Input/Output handling with `read` and `puts` respectively
* Native hashes (key-value pairs) with `| key: value |`
* Single line comments with `(:`
* Mathematic utils library with `Math` native hash.
* Self-reference in functions with `this`
* Newlines as endmarkers (no uglies `;`s)

## Caveats
This is a list of considerations to take into account when using or programming in LTA:

* The resulting code is valid ES2017 code. It should be tested on modern browsers, the latest versions of nodejs or by transpiling it to a older version.
* The optimizations are achieved through the use of dependencies such as `prepack`.


## Authors
Julian Antonielli (@jant) jantonielli@itba.edu.ar
Ramiro Olivera Fedi (@ramadis) rolivera@itba.edu.ar
