# Manual do repositório

## Finalidade

Este repositório reúne, em formato público, as listas e exercícios da disciplina `SPOLOG1`.

O foco aqui é preservar de forma organizada os artefatos de estudo e entrega já finalizados, como:

- enunciados;
- algoritmos em Visualg;
- programas em C;
- fluxogramas;
- imagens de execução;
- PDFs finais das listas.

## Estrutura

Estrutura principal:

```text
.
├── README.md
├── manual.md
└── listas/
    └── lista-XX/
        ├── README.md
        ├── entrega/
        └── exercicios/
            └── exNN/
```

Regras de organização:

- `listas/` concentra as listas publicadas da disciplina;
- cada pasta `lista-XX/` agrupa a entrega final e os exercícios daquela lista;
- `entrega/` guarda o PDF final entregue;
- `exercicios/exNN/` guarda os arquivos públicos de cada exercício;
- cada exercício pode conter apenas os artefatos que realmente existirem para aquele caso.

## Escopo dos arquivos

Arquivos comuns por exercício:

- `enunciado.md`
- `algoritmo.alg`
- `programa.c`
- `fluxograma.drawio`
- `fluxograma.svg`
- `fluxograma.png`
- imagens de execução

Nem toda pasta de exercício precisa conter todos esses arquivos.

## Manutenção

Ao adicionar uma nova lista:

- criar a pasta `listas/lista-XX/`;
- incluir um `README.md` próprio da lista;
- copiar os exercícios e seus artefatos finais;
- adicionar o PDF final em `entrega/`;
- atualizar o `README.md` da raiz.
