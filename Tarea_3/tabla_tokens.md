# Tabla de Tokens

A continuación se presenta la tabla de tokens identificados a partir del código fuente proporcionado.

## Código fuente analizado

```
int 123numero = 5;
float valor# = 10.5;
if (123numero > valor#) { return 0; }
```

## Tabla de Tokens

| Token               | Lexema    | Patrón                                     |
| ------------------- | --------- | ------------------------------------------ |
| Palabra reservada   | int       | `\b(if\|while\|for\|int\|float\|return)\b` |
| Error léxico        | 123numero | Identificador no puede iniciar con número  |
| Operador            | =         | `[+\-*/><=]`                               |
| Número entero       | 5         | `[0-9]+`                                   |
| Delimitador         | ;         | `[();{}]`                                  |
| Palabra reservada   | float     | `\b(if\|while\|for\|int\|float\|return)\b` |
| Error léxico        | valor#    | Caracter inválido en identificador         |
| Operador            | =         | `[+\-*/><=]`                               |
| Número real         | 10.5      | `[0-9]+\.[0-9]+`                           |
| Delimitador         | ;         | `[();{}]`                                  |
| Palabra reservada   | if        | `\b(if\|while\|for\|int\|float\|return)\b` |
| Delimitador         | (         | `[();{}]`                                  |
| Error léxico        | 123numero | Identificador inválido                     |
| Operador relacional | >         | `[+\-*/><=]`                               |
| Error léxico        | valor#    | Identificador inválido                     |
| Delimitador         | )         | `[();{}]`                                  |
| Delimitador         | {         | `[();{}]`                                  |
| Palabra reservada   | return    | `\b(if\|while\|for\|int\|float\|return)\b` |
| Número entero       | 0         | `[0-9]+`                                   |
| Delimitador         | ;         | `[();{}]`                                  |
| Delimitador         | }         | `[();{}]`                                  |
