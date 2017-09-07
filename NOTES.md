Just random things we discussed

```C
// type examples
enum Type {
  object,
  number,
  function
}

struct Basic {
  Basic basic;
  Type type;
  hashtable properties; // key: string, value: Basic
}

struct Function {
  Basic basic;
  AlgunTipoDeDato rawFunc;
}

struct String {
  Basic basic;
  // data del string
}
```

```C
// propety retrieval
typedef uintptr_t VALUE

struct TieneUnBasic {
  Basic basic;
}

VALUE getPropertyFromObject(VALUE object, VALUE propertyIdentifier) {
  VALUE property = getPropertyFromTable(((TieneUnBasic *)object)->hashtable, ((String *)propertyIdentifier)->rawString);
}
// Suponete que object es un Number * y queres acceder a su basic, pero a vos te lo pasan como
// VALUE object y no sabes q es un Number *

// (no me acuerdo la sintaxis pero podias hacer algo asi)
((Basic)(**object))
```

```C
struct Basic {
  Basic basic;
  Type type;
  hashtable properties; // key: string, value: Basic
}


// myVar = 2;

Crea un

Number: {
  Basic: {
    type: number,
    hashtable: {}
  }
  value: 2
}


// myVar.unaProp = 25;

Updatea el Number anterior y quedaría así
Number: {
  Basic: {
    type: number,
    hashtable: {
      unaProp: Number: {
        Basic: {
          type: number,
          hashtable: {}
        },
        value: 25
      }
    }
  }
  value: 2
}
```
