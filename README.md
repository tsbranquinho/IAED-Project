# Projecto 2 - IAED 2022/2023

## Enunciado

O enunciado do projecto está disponível em [enunciado.md](enunciado.md). 

## Data de entrega: 14 de abril de 2023, às 19h59

Informações detalhadas sobre o processo de submissão estão disponíveis em [informacoes.md](informacoes.md).



# Evaluation

2023-04-05T17:33:13

## [- Compile Time Error-].


Your code will not be reevaluated if you submit before 2023-04-05 17:43:13 @ Lisbon, Portugal. You need to wait 10 minute(s).



- Compiler Output:


```
project2.c: In function 'command_r':
project2.c:330:28: error: unused variable 'arg_number' [-Werror=unused-variable]
     int max_arguments = 1, arg_number = parser(line, &arguments, max_arguments);
                            ^~~~~~~~~~
project2.c: At top level:
project2.c:368:5: error: data definition has no type or storage class [-Werror]
     free_arguments(arguments, arg_number);
     ^~~~~~~~~~~~~~
project2.c:368:5: error: type defaults to 'int' in declaration of 'free_arguments' [-Werror=implicit-int]
project2.c:368:5: error: parameter names (without types) in function declaration [-Werror]
project2.c:368:5: error: conflicting types for 'free_arguments'
project2.c:164:6: note: previous definition of 'free_arguments' was here
 void free_arguments(char **arguments, int max_arguments) {
      ^~~~~~~~~~~~~~
project2.c:369:1: error: expected identifier or '(' before '}' token
 }
 ^
cc1: all warnings being treated as errors

```
