# 🏥 SCAM - Sistema de Controle e Agendamento Médico

**Disciplina:** Programação Orientada a Objetos  
**Curso:** Sistemas de Informação  
**Instituição:** Universidade Estadual de Goiás  
**Data:** 13/05/2025  
**Objetivo:** Trabalho acadêmico para avaliação na disciplina de POO, sem fins comerciais.

---

## 📌 Sumário

- [Descrição do Projeto](#descrição-do-projeto)
- [Diagramas de Caso de Uso](#diagramas-de-caso-de-uso)
  - [Secretária](#secretária)
  - [Médico](#médico)
  - [Paciente](#paciente)
- [Diagrama de Classes](#diagrama-de-classes)
- [Requisitos do Sistema](#requisitos-do-sistema)
  - [Requisitos Funcionais](#requisitos-funcionais)
  - [Requisitos Não Funcionais](#requisitos-não-funcionais)
- [Especificações do Trabalho](#especificações-do-trabalho)
- [Definições](#definições)
- [Linguagem Utilizada](#linguagem-utilizada)

---

## 📖 Descrição do Projeto

O SCAM é um sistema desenvolvido com o objetivo de gerenciar o controle e agendamento de consultas médicas em uma clínica. O projeto foi elaborado para fins acadêmicos, aplicando os conceitos de Programação Orientada a Objetos.

---

## 🎯 Diagramas de Caso de Uso

### Secretária

![Diagrama de Caso de Uso - Secretária](https://github.com/user-attachments/assets/8b24264e-358f-478d-9b8b-dd8754a70796)

### Médico

![Diagrama de Caso de Uso - Médico](https://github.com/user-attachments/assets/58a72b11-ec83-4f80-9990-366077663517)

### Paciente

![Diagrama de Caso de Uso - Paciente](https://github.com/user-attachments/assets/2c533c70-24f1-467d-ad64-13a62d676434)

---

## 🧩 Diagrama de Classes

![Diagrama de Classes](https://github.com/user-attachments/assets/438abc7c-bdc6-4119-8b2d-d35f30e6ad3c)

---

## ✅ Requisitos do Sistema

### Requisitos Funcionais

- **[RQ-01]**: O sistema deve permitir o cadastro de secretárias, médicos e pacientes, incluindo informações como CPF, nome, e-mail, telefone e WhatsApp.
- **[RQ-02]**: Permitir o cadastro do número de matrícula, cargo (secretária, secretária-supervisora) e médicos assessorados por cada secretária.
- **[RQ-03]**: Somente a secretária supervisora pode cadastrar outras secretárias.
- **[RQ-04]**: Cada secretária pode assessorar no máximo três médicos.
- **[RQ-05]**: Apenas a secretária supervisora pode consultar as secretárias.
- **[RQ-06]**: Cada secretária pode cadastrar e consultar apenas os médicos que assessora.
- **[RQ-07]**: Cada secretária pode cadastrar e consultar apenas os pacientes dos médicos que assessora.
- **[RQ-08]**: Cada secretária pode cadastrar e consultar apenas a agenda dos médicos que assessora.
- **[RQ-09]**: Cada secretária pode cadastrar e consultar apenas a agenda dos pacientes dos médicos que assessora.
- **[RQ-10]**: As funcionalidades de cadastro devem permitir inclusão, alteração e exclusão das entidades relacionadas.
- **[RQ-11]**: O sistema deve permitir apenas três tentativas de autenticação inválidas.

### Requisitos Não Funcionais

- Cada grupo deve especificar os requisitos não funcionais que considerar necessários para o sistema.

---

## 🛠️ Especificações do Trabalho

- Implementar a aplicação SCAM conforme as especificações estabelecidas.
- Especificar o Diagrama de Caso de Uso Geral do SCAM, representando as relações de generalização e especialização.
- Finalizar a especificação do Diagrama de Classes do SCAM.

---

## 📚 Definições

- **Generalização**: Quando uma classe compartilha atributos e métodos com outras classes, caracterizando uma relação de herança.
- **Especialização**: Quando uma classe derivada possui atributos ou métodos específicos que não são compartilhados com a classe base.

---

## 💻 Linguagem Utilizada

Este projeto foi desenvolvido utilizando a linguagem de programação **C++**, aplicando os conceitos de Programação Orientada a Objetos para a implementação das funcionalidades do sistema.

---

