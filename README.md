# bloqueio-de-letras

A unica coisa que muda nesse codigo é o scanf("%*[^1234567890]"); que deve ficar entre a pergunta e a função que salva o que foi digitado, dentro do [^] você coloca o que quer que o programa identifique, caso queira permitir somente os numeros 1 e 2 é so colocar scanf("%*[^12]"); por exemplo.

ultilizando scanf("%*[12]"); sem o ^ ele vai aceitar qualquer tecla menos as que tem no comando, no caso do exemplo, ele vai aceitar tudo que for
digitado, menos os numeros 1 e 2.
