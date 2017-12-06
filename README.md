# :shipit: LTAlang

LTAlang is a programming language with great features compiling to ECMAscript 2017

## Documentation
The report can be found under the name `Informe.pdf` under this same repository.

## Build & Run
To build and run

```bash
git clone https://github.com/jjant/LTAlang.git && cd LTAlang
make all
chmod 777 ./compiler #This is necessary to execute the compiler
./compiler input.lta > out.js
```

Finally, to run the compiled code you could use both `node` environment by running

```bash
node out.js
```

or try it in the javascript console of a modern browser.

## Example program
```lta
times = |n| => { return(|arr| => {
    return(a.map(|el| => {
      return(el * n)
    }))
  })
}

a = [1,2,3,4,5]
puts(times(2)) (: [2, 4, 6, 8, 10]

```

## Requirements
The project was tested in `pampero.it.itba.edu.ar` environment with `node v8.2.1` and `npm v5.3.0`. The compiled code runs with both `node` and the console for the latest browsers (such as `chrome v62`).

## Code examples
Check the  `programs/` folder to see some of valid LTA languages organized by features.

## Project organization
The project is divided in several folders and files:

* Folder `code_generator`: Contains the C code for the compiler and the AST generator. The file  `main.c` traverses the tree generating the ECMAscript code; The file `structures.c` generates the AST from the language token list. The file `nodes.h` defines the node used in the tree.
* Folder `grammar`: Contains the code for YACC and LEXX. Here we defined the grammar and tokenize the input.
* Folder `programs`: Contains a series of valid LTA program samples.
* `./compiler`: Runs the compiler when already built and have permissions to execute it.

## Features
These are some of the features that we included in the LTA language

* C-like operators
* Weak typing (but with primitive types `Number`, `String`, `Boolean`, `Array` and `Function`)
* Constants (eg: `1.232`, `-4`, `true`, `"Even strings!"`)
* Cycles with `loop`
* Conditionals with `if`
* Lamdas (anonymous functions) with `|x| => { ... }`
* Sync and Async functions with `=>` and `|>` operators
* Input/Output handling with `read` and `puts` respectively
* Native hashes (key-value pairs) with `| key: value |`
* Single line comments with `(:`
* Mathematic utils library with `Math` native hash.
* Self-reference in functions with `this`
* Newlines as endmarkers (no ugly `;`s)

## Caveats
This is a list of considerations to take into account when using or programming in LTA:

* The resulting code is valid ES2017 code. It should be tested on modern browsers, the latest versions of nodejs or by transpiling it to older ECMAscript versions.
* To achieve several functionalities we leverage on the power of Javascript. For example, our native `Math` library is just a wrapper for Javascript `Math` library. The self-reference keyword `this` is just a wrapper for javascript's `arguments.callee`. The asynchronous functions with `|>` leverages on javascript event loop, `async` functions and `setTimeout`.

## Dependencies
We used [`prompt-sync`](https://github.com/0x00A/prompt-sync) to enable stdin input from nodejs.

## Authors
* Julian Antonielli (@jant) jantonielli@itba.edu.ar
* Ramiro Olivera Fedi (@ramadis) rolivera@itba.edu.ar
