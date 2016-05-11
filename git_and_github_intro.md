# Uma Introdução a Git e GitHub

## O que é Git?
[**Git**](https://pt.wikipedia.org/wiki/Git) é um [sistema de controle de versão](https://pt.wikipedia.org/wiki/Sistema_de_controle_de_vers%C3%A3o)
criado, a princípio, para gerenciar o desenvolvimento do kernel [**Linux**]().
Sua principal diferença em relação a outros sistemas de controle de versão
conhecidos (como [SVN](https://pt.wikipedia.org/wiki/Subversion) e
[CVS](https://pt.wikipedia.org/wiki/CVS)) é sua natureza distribuída.
Isto significa que não há, necessariamente, um repositório central.

## O que é GitHub?
[**GitHub**](https://github.com) é uma empresa focada em fornecer repositórios git na nuvem além uma
série de funcionalidades para facilitar a colaboraçao de desenvolvedores em
projetos de software. O uso da plataforma é gratuito para projetos livres e/ou
de código aberto.

## Interfaces
A interface oficial do git é o conjunto de ferramentas de linha de
comandos que vem com o git propriamente dito. Segundo a [documentação
oficial](https://git-scm.com/book/en/v2/Getting-Started-The-Command-Line)
, é a única interface que permite acssar todas os comandos do git.  
Entretando, existem outras formas de manipular os repositórios com uma
abordagem mais *user-friendly*. A mais usada atualmente é a
GUI (*Graphical User Inteface*) feita pela equipe do GitHub, [**GitHub Desktop**](https://desktop.github.com/).
Disponível para Mac e Windows.

**As instruções abaixo são para a *CLI* (*Command Line Interface*).**

## Como criar um Repositório
A forma mais simples de ter um repositório local já vinculado a um
repositório no GitHub é através do comando [`git clone`](https://git-scm.com/docs/git-clone).  
Para clonar um repositório é necessário que exista um repositório
remoto a ser clonado. Criar um repositório remoto no GitHub é bastante
simples graças à interface web fornecida pelo GitHub. Para tanto basta:

  * Fazer login no [GitHub](https://github.com/login)
  * Clicar no botão verde `New Repository` no lado direito da página
  * Atribuir um nome para o novo repositório
  * Clicar no botão verde `Create Repository` na parte inferior da página.
  * Copiar o link (https) que aparecerá na sessão **Quick Setup**
  * Usar o comando `git clone URL` na pasta onde quer criar o repositório
  (sendo URL o link copiado no item anterior)

O repositório estará criado localmente em seu computador na pasta com mesmo nome do repositório criado no github.

*Obs*: É necessário digitar suas credenciais do GitHub ao fazer operações que envolvem o repositórios remotos. Para contornar este problema veja este [link](https://help.github.com/articles/why-is-git-always-asking-for-my-password/).

## Fazendo seu primeiro *commit*
Um *commit* é ação pela qual você envia as mudanças feitas para o
repositório. O comando para fazer *commit* é [`git commit`](https://git-scm.com/docs/git-commit).  

Antes de fazer o *commit* de alguma alteração é necessário marcá-la
para ser enviada no próximo *commit*. A forma de fazer isto é com o
[`git add`](https://git-scm.com/docs/git-add).
Este comando aceita pastas ou arquivos como argumentos,
assim como caracteres reservados do seu terminal (como "\*", "." e "..").

Antes de fazer um *commit* é interessante verificar quais arquivos estão
marcados para serem enviados. Isto pode ser feito com
[`git status`](https://git-scm.com/docs/git-status).

Note que `git commit` envia as alterações para o repositório
local (no seu computador) e não para o repositório remoto nos servidores
do GitHub. Existem comandos para sincronizar o repositório remoto
com o local e vice versa. São eles:

  * [`git push`](https://git-scm.com/docs/git-push) sincroniza o
  repositório remoto com o repositório local.
  * [`git pull`](https://git-scm.com/docs/git-pull) sincroniza o
  repositório local com o repositório remoto.

Um fluxo bastante comum de trabalho segue as etapas:

  1. Fazer as alterações desejadas.
  2. Marcar as mudanças para serem enviadas no próximo *commit* com `git add`.
  3. Enviar as mudanças para o repositório local com `git commit`.
  4. Enviar as mudanças para o repositório remoto com `git push`.

## Contribuindo com o projeto
É necessário fazer um [fork](https://pt.wikipedia.org/wiki/Bifurca%C3%A7%C3%A3o)
do [repositório do projeto deste curso](https://github.com/programathon-unifesp/programathon-unifesp.github.io)
 para poder contribuir com suas soluções. Para tanto basta:

  1. Logar em sua conta do GitHub.
  2. Acessar a [página do projeto](https://github.com/programathon-unifesp/programathon-unifesp.github.io).
  3. Clicar no botão `Fork` no canto superior direito da página.
  4. (Uma cópia deste repositório será criado em sua conta).
  5. Siga os passos nas seções sobre [criar primeiro repositório](#como-criar-um-repositório)
  e [fazer primeiro *commit*](#fazendo-seu-primeiro-commit). Para fazer
  as alterações desejadas.
  6. Requisitar que suas alterações sejam unidas com o repositório
  oficial. Através de um [**Pull Request**](#pull-request).

## Pull Request
**Pull request** é a ferramenta através da qual é proposta a união
entre dois [branches](https://git-scm.com/book/en/v2/Git-Branching-Basic-Branching-and-Merging)
de um projeto.  
Para o escopo deste texto assuma que os branches serão sempre seu repositório
remoto e o repositório oficial do projeto. Para fazer um **pull request**
você deve:

  1. Acessar a página do seu repositório (aquele gerado pelo `Fork` em sua conta).
  2. Clicar no botão verde `New pull request`.
  3. Verificar que as modificações que deseja requisitar a união são a que estão listadas.
  4. Clicar em `Create pull request`
  5. Adicionar um título e descrição para o pull request.
  6. Clicar novamente em `Create pull request`.
  7. Aguardar a avaliação de algum dos responsáveis pelo repositório oficial.

## Conclusão
Embora possar parecer um pouco complexo a princípio, o fluxo de trabalho,
ao usar **Git** e **GitHub**, é bastante simples e fácil de se acostumar.
Entender como realizar estas tarefas principais em linha de
comando pode ajudar drasticamente usuários interface gráfica
([**GitHub Desktop**](https://desktop.github.com/)) também.
