# Expresiones Regulares Utilizadas

En el analizador léxico implementado se utilizaron las siguientes categorías de tokens.

---

## 1. Palabras reservadas

Las palabras reservadas son términos propios del lenguaje que tienen un significado especial.

### Patrón

```
\b(if|while|for|int|float|return)\b
```

### Explicación

* `\b` indica un límite de palabra.
* `|` funciona como operador OR.
* El patrón reconoce únicamente las palabras reservadas definidas.

---

## 2. Identificadores

Los identificadores representan nombres de variables, funciones u otros elementos.

### Patrón

```
[a-zA-Z_][a-zA-Z0-9_]*
```

### Explicación

* `[a-zA-Z_]` indica que el primer carácter debe ser una letra o `_`.
* `[a-zA-Z0-9_]*` permite letras, números o `_` después del primer carácter.
* `*` significa cero o más repeticiones.

---

## 3. Números enteros

Representan valores numéricos sin parte decimal.

### Patrón

```
[0-9]+
```

### Explicación

* `[0-9]` representa cualquier dígito.
* `+` indica una o más repeticiones.

Ejemplos válidos:

```
0
5
123
```

---

## 4. Números reales

Representan valores numéricos con parte decimal.

### Patrón

```
[0-9]+\.[0-9]+
```

### Explicación

* `[0-9]+` parte entera.
* `\.` representa el punto decimal.
* `[0-9]+` parte fraccionaria.

Ejemplos válidos:

```
10.5
3.14
0.25
```

---

## 5. Operadores

Los operadores permiten realizar operaciones aritméticas o relacionales.

### Patrón

```
[+\-*/><=]
```

### Ejemplos

```
+
-
*
/
>
<
=
```

---

## 6. Delimitadores

Los delimitadores separan instrucciones o bloques de código.

### Patrón

```
[();{}]
```

### Ejemplos

```
(
)
;
{
}
```

---


