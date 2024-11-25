# Jogo da Advinhação

Bem-vindo ao Jogo da Advinhação! Este é um projeto simples desenvolvido em C++ onde você tentará adivinhar um número aleatório gerado pelo computador. Teste suas habilidades e divirta-se!

---

## **Lingugem**
  Fiz este jogo para testar um pouco da linguagem C++, logo ela é a única utilizada no mesmo.

## **Pré-requisitos**

Antes de compilar e executar o programa, é necessário configurar um compilador C++ no seu sistema. Siga as instruções abaixo para o seu sistema operacional.

---

## **Configuração do compilador**

### **Windows**
1. **Baixe e instale o MinGW:**
   - Acesse o site oficial do MinGW: [MinGW](https://sourceforge.net/projects/mingw/).
   - Baixe o instalador `mingw-get-setup.exe`.
   - Durante a instalação, selecione os pacotes:
     - `mingw32-gcc-g++` (suporte ao C++).
     - `mingw32-gcc` (suporte ao C, opcional).

2. **Adicione o MinGW ao PATH do sistema:**
   - Pressione `Win + R`, digite `sysdm.cpl` e pressione Enter.
   - Vá para a aba **Avançado** e clique em **Variáveis de Ambiente**.
   - Na variável `Path`, adicione o diretório `C:\MinGW\bin`.

3. **Verifique a instalação:**
   Abra o Prompt de Comando (cmd) e digite:
   ```bash
   g++ --version

### **MacOS**
1. **Instale o Xcode Command Line Tools:**
  Abra um terminal de sua escolha e digite:
  ```terminal
  xcode-select --install
  ```
2. **Verifique a instalação:**
   ```terminal
   g++ --version
    ```

### **Linux**
1. **Instale o compilador GCC: No terminal, execute:**
   ```
    sudo apt update
    sudo apt install build-essential
   ```

2. **Verifique a instalação**
   ```
   g++ --version
    ```

## **Como compilar e executar o jogo**
1. **Baixe o zip ou clone o repositório:**
   ```bash
   git clone <URL_DO_REPOSITORIO>
    cd <LOCAL_ONDE_A_PASTA_ESTÁ_LOCALIZADA>
    ```

2. **Compile o programa:**
   Utilize o comando:
   ```bash
   g++ jogodaadivinhacao.cpp -o jogodaadivinhacao.out
   ```

3. **Execute o programa:**
   ```bash
   ./jogodaadivinhacao.out
    ```

**Observação para Windows**
O comando para executar no Windows é:
```bash
jogodaadivinhacao.out
