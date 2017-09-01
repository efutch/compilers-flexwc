Según la página de manual en español del comando wc de Unix:

El comando wc

El nombre del comando wc proviene de word count, y como es de suponer, sirve para contar palabras.

Pero no sólo palabras como veremos a continuación. Su sintaxis es como sigue:

                          wc [opción...] [archivo...]

Si se omite el argumento archivo, wc tomará los datos (naturalmente) de la entrada estándar. La lista de opciones mas importantes es la siguiente:
-c
Contar caracteres.
-l
Contar líneas.
-w
Contar palabras.

Implemente en Flex un programa que tenga la funcionalidad del wc. Es decir, que analice un archivo e imprima al final cuántos caracteres encontró, cuantas líneas y cuántas palabras. Asuma que una palabra está rodeada de al menos un blanco.
